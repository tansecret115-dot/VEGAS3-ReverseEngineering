/* Module: vegas30.exe
   Function: FUN_005d99b0
   Address: 005d99b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d99b0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  FUN_005b83b0(param_1,1);
  iVar5 = 0;
  iVar1 = **(int **)(param_1 + 0x218);
  if (0 < iVar1) {
    piVar4 = (int *)(*(int **)(param_1 + 0x218))[2];
    do {
      if (param_2 == (int *)*piVar4) {
        if ((int *)*param_2 != (int *)0x0) {
          iVar1 = *(int *)*param_2;
          iVar6 = 0;
          if (0 < iVar1) {
            do {
              iVar3 = *(int *)(*param_2 + 8);
              iVar2 = *(int *)(*param_2 + 4) * iVar6;
              iVar3 = FUN_005d9aa0(param_1,0,*(undefined4 *)(iVar2 + iVar3),
                                   *(undefined4 *)(iVar2 + 4 + iVar3));
              if (iVar3 != 0) {
                *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + -1;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar1);
          }
          _SfList_Destroy_4(*param_2);
        }
        _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x218),iVar5,1,0);
        FUN_005b84d0(param_1,1);
        return 1;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < iVar1);
  }
  FUN_005b84d0(param_1,1);
  return 0;
}


