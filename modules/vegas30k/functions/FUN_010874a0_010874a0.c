/* Module: vegas30k.dll
   Function: FUN_010874a0
   Address: 010874a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010874a0(int param_1)

{
  int iVar1;
  
  iVar1 = _SfList_AllocAndInsertItem_20
                    (*(undefined4 *)(param_1 + 8),&stack0x00000008,4,0xffffffff,0);
  if (-1 < iVar1) {
    _SfList_Sort_12(*(undefined4 *)(param_1 + 8),0,&LAB_010871b0);
    iVar1 = 0;
  }
  return iVar1;
}


