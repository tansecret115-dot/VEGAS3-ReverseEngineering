/* Module: vegas30k.dll
   Function: _SfPrintF_DeleteToken@4
   Address: 010580f0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfPrintF_DeleteToken_4(undefined4 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  undefined1 local_10 [4];
  undefined4 local_c;
  
                    /* 0x580f0  1166  _SfPrintF_DeleteToken@4 */
  iVar1 = DAT_0120e828;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_0120e828 + 0xc);
  EnterCriticalSection(lpCriticalSection);
  local_c = param_1;
  iVar2 = _SfList_FindSortedItemRange_20(iVar1,local_10,0,0xffffffff,&LAB_01057fb0);
  if (-1 < iVar2) {
    _SfList_DeleteList_16(iVar1,iVar2,1,1);
  }
  LeaveCriticalSection(lpCriticalSection);
  return -1 < iVar2;
}


