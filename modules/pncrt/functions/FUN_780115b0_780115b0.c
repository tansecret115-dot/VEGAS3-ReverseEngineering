/* Module: pncrt.dll
   Function: FUN_780115b0
   Address: 780115b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_780115b0(uint param_1)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = _get_osfhandle(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = _get_osfhandle(1);
      iVar2 = _get_osfhandle(2);
      if (iVar1 == iVar2) goto LAB_78011606;
    }
    hObject = (HANDLE)_get_osfhandle(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_78011608;
    }
  }
LAB_78011606:
  DVar4 = 0;
LAB_78011608:
  FUN_78011960(param_1);
  *(undefined1 *)((&__pioinfo)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_7800a870(DVar4);
    return 0xffffffff;
  }
  return 0;
}


