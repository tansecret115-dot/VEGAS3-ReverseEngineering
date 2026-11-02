/* Module: vegas30.exe
   Function: FUN_00499d20
   Address: 00499d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00499d20(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0xcec);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(iVar1 + 8) + 8);
      if (iVar6 != 0) {
        FUN_005b83b0(iVar6,1);
      }
    }
    piVar2 = (int *)FUN_005d9be0(iVar6,0,iVar1);
    if (piVar2 == (int *)0x0) {
      FUN_00499a50(iVar1,param_2);
    }
    else {
      iVar5 = 0;
      iVar1 = *(int *)*piVar2;
      if (0 < iVar1) {
        do {
          iVar4 = *(int *)(*piVar2 + 8);
          iVar3 = *(int *)(*piVar2 + 4) * iVar5;
          iVar4 = FUN_005d9aa0(iVar6,0,*(undefined4 *)(iVar3 + iVar4),
                               *(undefined4 *)(iVar3 + 4 + iVar4));
          if (iVar4 != 0) {
            FUN_00499a50(iVar4,param_2);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
    }
    if (iVar6 != 0) {
      FUN_005b84d0(iVar6,1);
    }
  }
  return;
}


