/* Module: Setup.exe
   Function: _SfCreateTempFileAndName@16
   Address: 00412cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfCreateTempFileAndName_16(uchar *param_1,uchar *param_2,uchar *param_3,uint param_4)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HANDLE hObject;
  DWORD DVar5;
  uchar local_28 [40];
  
                    /* 0x12cc0  93  _SfCreateTempFileAndName@16 */
  if ((param_3 == (uchar *)0x0) ||
     (((param_1 == (uchar *)0x0 && (param_2 == (uchar *)0x0)) ||
      (BVar1 = IsBadWritePtr(param_3,param_4), BVar1 != 0)))) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    iVar2 = lstrlenA((LPCSTR)param_1);
    iVar3 = lstrlenA((LPCSTR)param_2);
    do {
      SfPrintF(local_28,"%d");
      iVar4 = lstrlenA((LPCSTR)local_28);
      if (param_4 < (uint)(iVar4 + 1 + iVar2 + iVar3)) {
        iVar2 = -0x7ff8ffa9;
        goto LAB_00412dd2;
      }
      _mbscpy(param_3,param_1);
      _mbscat(param_3,local_28);
      _mbscat(param_3,param_2);
      hObject = CreateFileA((LPCSTR)param_3,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,1,0x80,
                            (HANDLE)0x0);
      if (hObject != (HANDLE)0xffffffff) {
        CloseHandle(hObject);
        return 0;
      }
      DVar5 = GetLastError();
    } while ((DVar5 == 0x50) || (DVar5 == 0x20));
    iVar2 = _SfErrorHandler_TranslateWin32Error_4(DVar5);
    if (-1 < iVar2) {
      iVar2 = -0x7fffbffb;
    }
LAB_00412dd2:
    if (param_4 != 0) {
      *param_3 = '\0';
      return iVar2;
    }
  }
  return iVar2;
}


