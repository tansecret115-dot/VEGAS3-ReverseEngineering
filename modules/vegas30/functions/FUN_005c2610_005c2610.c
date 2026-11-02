/* Module: vegas30.exe
   Function: FUN_005c2610
   Address: 005c2610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005c2610(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_1[1];
  local_10 = 0x10;
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *(undefined4 *)*param_1;
  }
  local_4 = 0;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_10,0x10,0);
  if (((-1 < iVar1) && (unaff_ESI != 0)) && (iVar1 = 0, 0 < unaff_ESI)) {
    do {
      iVar2 = (**(code **)(*param_2 + 0x10))
                        (param_2,*(int *)(*param_1 + 4) * iVar1 + *(int *)(*param_1 + 8),8,0);
      if (iVar2 < 0) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < unaff_ESI);
  }
  return;
}


