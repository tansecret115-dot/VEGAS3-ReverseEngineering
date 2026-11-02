/* Module: vegas30.exe
   Function: FUN_005917e0
   Address: 005917e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005917e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  piVar3 = (int *)FUN_005b87b0(param_2);
  FUN_005b83b0(param_2,0);
  iVar1 = *piVar3;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      if (iVar4 < 0) break;
      iVar4 = FUN_00591460(param_2,*(undefined4 *)(piVar3[2] + iVar5 * 4),param_3,param_4,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  if (param_4 == 0) {
    piVar3 = (int *)FUN_005b8950(param_2);
    iVar5 = 0;
    iVar1 = *piVar3;
    if (0 < iVar1) {
      do {
        if (iVar4 < 0) break;
        iVar2 = *(int *)(piVar3[2] + iVar5 * 4);
        if ((*(int *)(iVar2 + 4) == 2) && (*(int *)(iVar2 + 0x244) != 0)) {
          iVar4 = FUN_00591460(param_2,iVar2,param_3,0,0);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
  }
  FUN_005b84d0(param_2,0);
  return iVar4;
}


