/* Module: vegas30.exe
   Function: FUN_004351b0
   Address: 004351b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004351b0(LPCSTR param_1)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = _SfList_CreateExZ_32(&local_4,4,1,1,0x40000002,0,0,0);
  if (-1 < iVar1) {
    iVar1 = lstrlenA(param_1);
    iVar1 = _SfList_AllocAndInsertItem_20(local_4,param_1,iVar1 + 1,0xffffffff,0);
    if (-1 < iVar1) {
      iVar1 = FUN_00435120(local_4);
      return iVar1;
    }
    _SfList_DeleteList_16(local_4,0,0xffffffff,0);
    _SfList_Destroy_4(local_4);
  }
  return iVar1;
}


