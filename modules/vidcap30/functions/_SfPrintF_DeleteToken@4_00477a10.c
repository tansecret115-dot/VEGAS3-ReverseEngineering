/* Module: vidcap30.exe
   Function: _SfPrintF_DeleteToken@4
   Address: 00477a10
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfPrintF_DeleteToken_4(undefined4 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  undefined1 local_10 [4];
  undefined4 local_c;
  
                    /* 0x77a10  585  _SfPrintF_DeleteToken@4 */
  iVar1 = DAT_005c1938;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_005c1938 + 0xc);
  EnterCriticalSection(lpCriticalSection);
  local_c = param_1;
  iVar2 = _SfList_FindSortedItemRange_20(iVar1,local_10,0,0xffffffff,&LAB_004778d0);
  if (-1 < iVar2) {
    _SfList_DeleteList_16(iVar1,iVar2,1,1);
  }
  LeaveCriticalSection(lpCriticalSection);
  return -1 < iVar2;
}


