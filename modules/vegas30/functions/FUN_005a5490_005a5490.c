/* Module: vegas30.exe
   Function: FUN_005a5490
   Address: 005a5490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a5490(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((int *)param_1[1] != (int *)0x0) {
    iVar3 = *(int *)param_1[1];
  }
  if (((int)param_1[3] < 1) || ((int)param_1[4] < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    if ((bVar1) && (iVar2 = **(int **)(*(int *)(param_1[1] + 8) + iVar3 * 4), iVar2 != 0)) {
      _SfDibFree_8(iVar2,0);
      iVar2 = FUN_005a5270(param_1[3],param_1[4],param_1[2]);
      param_1[7] = param_1[7] - iVar2;
    }
    _SfList_DeleteList_16(param_1[1],iVar3,1,0);
  }
  if (param_1[1] != 0) {
    _SfList_Destroy_4(param_1[1]);
  }
  for (iVar3 = 0x36; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


