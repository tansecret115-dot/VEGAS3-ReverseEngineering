/* Module: vidcap30.exe
   Function: SfErrorHandler_DetailsAddString
   Address: 0047dd20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 SfErrorHandler_DetailsAddString(int param_1,uchar *param_2)

{
  uchar uVar1;
  DWORD DVar2;
  uchar *lpsz;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x7dd20  368  SfErrorHandler_DetailsAddString */
  if (DAT_005bf494 == 0) {
    DAT_005bf494 = GetCurrentThreadId();
  }
  DVar2 = GetCurrentThreadId();
  if ((DVar2 == DAT_005bf494) || (DAT_005bec90 == param_1)) {
    if (param_2 == (uchar *)0x0) {
      return 0x80004003;
    }
    uVar1 = *param_2;
    lpsz = param_2;
    while (uVar1 != '\0') {
      if ((uVar1 == '%') || (uVar1 == '$')) {
        _SfVPrintF_12(&DAT_005bcc90,param_2,&stack0x0000000c);
        param_2 = &DAT_005bcc90;
        break;
      }
      lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
      uVar1 = *lpsz;
    }
    iVar3 = lstrlenA(&DAT_005bf49c);
    iVar4 = lstrlenA((LPCSTR)param_2);
    iVar5 = lstrlenA("\r\n");
    if (iVar5 + iVar3 + iVar4 < 0x2000) {
      _mbscat(&DAT_005bf49c,param_2);
      _mbscat(&DAT_005bf49c,"\r\n");
      DAT_005bec90 = param_1;
      DAT_005bf498 = DAT_005bf498 + 1;
      return 0;
    }
  }
  return 0x80004005;
}


