/* Module: pngu3266.dll
   Function: FUN_6061ee50
   Address: 6061ee50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6061ee50(undefined4 *param_1)

{
  uint uElapse;
  int *piVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  int local_1c [5];
  int local_8;
  
  uElapse = param_1[3];
  uVar2 = GetTickCount();
  piVar1 = (int *)*param_1;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_8 = 0;
  local_1c[4] = SetTimer((HWND)0x0,0,uElapse,(TIMERPROC)0x0);
  do {
    iVar3 = (**(code **)(*piVar1 + 0x28))(local_1c,0,0);
    if (iVar3 != 0) break;
    if (local_1c[0] == 0x113) {
      DVar4 = GetTickCount();
      if (DVar4 < uVar2) {
        uVar5 = (DVar4 - uVar2) - 1;
      }
      else {
        uVar5 = DVar4 - uVar2;
      }
      if (uElapse <= uVar5) {
        FUN_6061e110((void *)param_1[4],1);
        uVar2 = DVar4;
      }
    }
    else if (local_1c[0] == 0x4c8) {
      local_8 = 1;
    }
    else {
      (**(code **)(*piVar1 + 0x2c))(local_1c);
    }
  } while (local_8 == 0);
  KillTimer((HWND)0x0,local_1c[4]);
  (**(code **)(*(int *)param_1[1] + 4))();
  return 0;
}


