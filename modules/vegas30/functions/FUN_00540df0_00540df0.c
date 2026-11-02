/* Module: vegas30.exe
   Function: FUN_00540df0
   Address: 00540df0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00540df0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x228);
  iVar3 = _SfList_FindSortedItemRange_20(iVar1,&stack0x00000008,0,0xffffffff,&LAB_00540e40);
  if (iVar3 < 0) {
    return 0;
  }
  uVar2 = *(uint *)(*(int *)(iVar1 + 8) + iVar3 * 4);
  return -(uint)(*(int *)(uVar2 + 0x30) != 0) & uVar2;
}


