/* Module: Setup.exe
   Function: _SfPrintF_DeleteToken@4
   Address: 00406c10
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfPrintF_DeleteToken_4(undefined4 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined1 local_10 [4];
  undefined4 local_c;
  
                    /* 0x6c10  311  _SfPrintF_DeleteToken@4 */
  piVar1 = DAT_00449060;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00449060 + 3);
  EnterCriticalSection(lpCriticalSection);
  local_c = param_1;
  iVar2 = _SfList_FindSortedItemRange_20(piVar1,local_10,(undefined4 *)0x0,-1,&LAB_00406ad0);
  if (-1 < iVar2) {
    _SfList_DeleteList_16(piVar1,iVar2,1,1);
  }
  LeaveCriticalSection(lpCriticalSection);
  return -1 < iVar2;
}


