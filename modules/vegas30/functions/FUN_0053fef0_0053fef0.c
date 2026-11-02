/* Module: vegas30.exe
   Function: FUN_0053fef0
   Address: 0053fef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053fef0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 0x140);
  iVar2 = FUN_005b8900(param_1,3);
  if (iVar1 != iVar2) {
    return 0;
  }
  piVar3 = (int *)FUN_005b87b0(param_1);
  iVar2 = 0;
  iVar1 = *piVar3;
  if (0 < iVar1) {
    iVar5 = param_2 + 0x144;
    do {
      iVar4 = *(int *)(piVar3[2] + iVar2 * 4);
      if (*(int *)(iVar4 + 4) == 3) {
        iVar4 = FUN_0053fb00(param_1,iVar4,iVar5,*(undefined4 *)(param_2 + 0x10),
                             *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
                             *(undefined4 *)(param_2 + 0x1c));
        if (iVar4 == 0) {
          return 0;
        }
        iVar5 = iVar5 + 0xc;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 1;
}


