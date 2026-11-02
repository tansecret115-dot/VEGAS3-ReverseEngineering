/* Module: vidcap30.exe
   Function: FUN_0042e060
   Address: 0042e060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0042e060(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  undefined4 local_4;
  
  uVar2 = 0x80004005;
  iVar1 = FUN_0057b770(**(undefined4 **)(param_1 + 0x2c));
  if ((int)(*(undefined4 **)(param_1 + 0x2c))[2] <= param_2) {
    return 0x80004005;
  }
  local_4 = **(undefined4 **)(param_1 + 0x2c);
  if (-1 < param_2) {
    iVar3 = param_2 + 1;
    do {
      iVar1 = FUN_0057b750(&local_4);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_8 = *(int *)(iVar1 + 0x24) + 1;
  if (0 < local_8) {
    piVar4 = (int *)(iVar1 + 0x10);
    do {
      uVar2 = (**(code **)(*(int *)piVar4[2] + 0x14))((int *)piVar4[2],piVar4[-1],piVar4[-2]);
      if ((piVar4[1] != -1) && (*piVar4 != -1)) {
        (**(code **)(*(int *)piVar4[2] + 0x14))((int *)piVar4[2],piVar4[1],*piVar4);
      }
      piVar4 = piVar4 + 10;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  *(int *)(param_1 + 0x30) = param_2;
  return uVar2;
}


