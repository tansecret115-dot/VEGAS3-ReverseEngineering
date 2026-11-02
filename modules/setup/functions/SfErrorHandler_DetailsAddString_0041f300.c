/* Module: Setup.exe
   Function: SfErrorHandler_DetailsAddString
   Address: 0041f300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl SfErrorHandler_DetailsAddString(int param_1,uchar *param_2)

{
  uchar uVar1;
  DWORD DVar2;
  uchar *lpsz;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x1f300  117  SfErrorHandler_DetailsAddString */
  if (DAT_0044c344 == 0) {
    DAT_0044c344 = GetCurrentThreadId();
  }
  DVar2 = GetCurrentThreadId();
  if ((DVar2 == DAT_0044c344) || (DAT_0044bb40 == param_1)) {
    if (param_2 == (uchar *)0x0) {
      return 0x80004003;
    }
    uVar1 = *param_2;
    lpsz = param_2;
    while (uVar1 != '\0') {
      if ((uVar1 == '%') || (uVar1 == '$')) {
        _SfVPrintF_12(&DAT_00449b40,param_2,(uint *)&stack0x0000000c);
        param_2 = &DAT_00449b40;
        break;
      }
      lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
      uVar1 = *lpsz;
    }
    iVar3 = lstrlenA(&DAT_0044c34c);
    iVar4 = lstrlenA((LPCSTR)param_2);
    iVar5 = lstrlenA("\r\n");
    if (iVar5 + iVar3 + iVar4 < 0x2000) {
      _mbscat(&DAT_0044c34c,param_2);
      _mbscat(&DAT_0044c34c,"\r\n");
      DAT_0044bb40 = param_1;
      DAT_0044c348 = DAT_0044c348 + 1;
      return 0;
    }
  }
  return 0x80004005;
}


