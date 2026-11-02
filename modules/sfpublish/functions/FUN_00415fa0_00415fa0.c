/* Module: sfpublish.dll
   Function: FUN_00415fa0
   Address: 00415fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00415fa0(uchar *param_1,uchar *param_2,uint param_3,uchar *param_4)

{
  bool bVar1;
  int iVar2;
  uchar *_Source;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int local_310;
  uchar local_30c [260];
  uchar local_208 [260];
  uchar local_104 [260];
  
  *param_2 = '\0';
  local_310 = lstrlenA((LPCSTR)param_1);
  iVar2 = lstrlenA((LPCSTR)param_4);
  if ((((uint)(local_310 + 1 + iVar2) <= param_3) && (param_4 != (uchar *)0x0)) &&
     (*param_4 != '\0')) {
    iVar2 = lstrcmpiA((LPCSTR)param_4,"enu");
    if (iVar2 != 0) {
      _mbscpy(local_30c,param_1);
      _Source = (uchar *)FUN_00416730((LPCSTR)local_30c);
      _mbscpy(local_208,_Source);
      *_Source = '\0';
      FUN_00418d60(param_2,(BYTE *)"%s%s%s");
      bVar1 = FUN_00417080((LPCSTR)param_2);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        _mbscpy((uchar *)&local_310,param_4);
        iVar2 = lstrlenA((LPCSTR)&local_310);
        local_30c[iVar2 + -5] = '\0';
        FUN_00418d60(local_104,(BYTE *)"%s%s%s%s");
        bVar1 = FUN_004160f0((LPCSTR)local_104,param_2,param_3);
        if (CONCAT31(extraout_var_00,bVar1) == 0) {
          *param_2 = bVar1;
        }
      }
      iVar2 = lstrlenA((LPCSTR)param_2);
      return iVar2;
    }
  }
  return 0;
}


