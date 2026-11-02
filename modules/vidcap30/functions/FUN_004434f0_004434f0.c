/* Module: vidcap30.exe
   Function: FUN_004434f0
   Address: 004434f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004434f0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  local_4 = 0;
  iVar1 = FUN_00443780(param_1);
  if (param_1 == 0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0042f4b0(*(undefined4 *)(param_1 + 4),1);
    if (0 < iVar1) {
      do {
        iVar2 = FUN_004437e0(param_1,iVar4);
        if (iVar2 != 0) {
          if ((param_2 == 0) || ((*(byte *)(iVar2 + 0x38) & 0x20) == 0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = 4;
          }
          FUN_00443b20(iVar2,uVar3,4);
          if ((param_2 != 0) && ((*(byte *)(iVar2 + 0x38) & 0x20) != 0)) {
            local_4 = local_4 + 1;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    FUN_0042f5d0(*(undefined4 *)(param_1 + 4),1);
    if (param_3 != (int *)0x0) {
      *param_3 = local_4;
    }
    return 0;
  }
  return 0x80004003;
}


