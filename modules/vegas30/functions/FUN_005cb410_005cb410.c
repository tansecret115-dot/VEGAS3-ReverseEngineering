/* Module: vegas30.exe
   Function: FUN_005cb410
   Address: 005cb410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cb410(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_005b83b0(param_1,1);
  piVar2 = (int *)FUN_005b8950(param_1);
  iVar1 = *piVar2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_005cb460(param_1,*(undefined4 *)(piVar2[2] + iVar1 * 4));
    _SfList_DeleteList_16(piVar2,iVar1,1,0);
  }
  FUN_005b84d0(param_1,1);
  return 0;
}


