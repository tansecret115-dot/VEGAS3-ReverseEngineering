/* Module: vegas30k.dll
   Function: SfErrorHandler_DetailsAddString
   Address: 010383d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 SfErrorHandler_DetailsAddString(int param_1,uchar *param_2)

{
  uchar uVar1;
  DWORD DVar2;
  uchar *lpsz;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x383d0  916  SfErrorHandler_DetailsAddString */
  if (DAT_0120c31c == 0) {
    DAT_0120c31c = GetCurrentThreadId();
  }
  DVar2 = GetCurrentThreadId();
  if ((DVar2 == DAT_0120c31c) || (DAT_0120bb18 == param_1)) {
    if (param_2 == (uchar *)0x0) {
      return 0x80004003;
    }
    uVar1 = *param_2;
    lpsz = param_2;
    while (uVar1 != '\0') {
      if ((uVar1 == '%') || (uVar1 == '$')) {
        _SfVPrintF_12(&DAT_01209b18,param_2,&stack0x0000000c);
        param_2 = &DAT_01209b18;
        break;
      }
      lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
      uVar1 = *lpsz;
    }
    iVar3 = lstrlenA(&DAT_0120c324);
    iVar4 = lstrlenA((LPCSTR)param_2);
    iVar5 = lstrlenA("\r\n");
    if (iVar5 + iVar3 + iVar4 < 0x2000) {
      _mbscat(&DAT_0120c324,param_2);
      _mbscat(&DAT_0120c324,"\r\n");
      DAT_0120bb18 = param_1;
      DAT_0120c320 = DAT_0120c320 + 1;
      return 0;
    }
  }
  return 0x80004005;
}


