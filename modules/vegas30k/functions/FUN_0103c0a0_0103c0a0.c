/* Module: vegas30k.dll
   Function: FUN_0103c0a0
   Address: 0103c0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0103c0a0(uchar *param_1,LPCSTR param_2,uint param_3,uchar *param_4)

{
  int iVar1;
  uchar *_Source;
  int local_310;
  uchar local_30c [260];
  uchar local_208 [260];
  undefined1 local_104 [260];
  
  *param_2 = '\0';
  local_310 = lstrlenA((LPCSTR)param_1);
  iVar1 = lstrlenA((LPCSTR)param_4);
  if ((((uint)(local_310 + 1 + iVar1) <= param_3) && (param_4 != (uchar *)0x0)) &&
     (*param_4 != '\0')) {
    iVar1 = lstrcmpiA((LPCSTR)param_4,"enu");
    if (iVar1 != 0) {
      _mbscpy(local_30c,param_1);
      _Source = (uchar *)_SfGetFileNameExtensionPtrA_4(local_30c);
      _mbscpy(local_208,_Source);
      *_Source = '\0';
      SfPrintF(param_2,"%s%s%s",local_30c,param_4,local_208);
      iVar1 = _SfDoesFileExist_4(param_2);
      if (iVar1 == 0) {
        _mbscpy((uchar *)&local_310,param_4);
        iVar1 = lstrlenA((LPCSTR)&local_310);
        local_30c[iVar1 + -5] = '\0';
        SfPrintF(local_104,"%s%s%s%s",local_30c,&local_310,&DAT_011dcf48,local_208);
        iVar1 = FUN_0103c1f0(local_104,param_2,param_3);
        if (iVar1 == 0) {
          *param_2 = '\0';
        }
      }
      iVar1 = lstrlenA(param_2);
      return iVar1;
    }
  }
  return 0;
}


