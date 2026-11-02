/* Module: vegas30.exe
   Function: FUN_004efb70
   Address: 004efb70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004efb70(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _SfList_FindSortedItemRange_20(param_1,param_2,0,0xffffffff,&LAB_004efbc0);
  if (iVar1 < 0) {
    uVar2 = _SfList_FindSortedInsertIndexRange_20(param_1,param_2,0,0xffffffff,&LAB_004efbe0);
    iVar1 = lstrlenA(param_2);
    _SfList_AllocAndInsertItem_20(param_1,param_2,iVar1 + 1,uVar2,0);
  }
  return;
}


