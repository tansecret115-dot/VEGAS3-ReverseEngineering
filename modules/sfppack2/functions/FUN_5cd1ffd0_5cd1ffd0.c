/* Module: sfppack2.dll
   Function: FUN_5cd1ffd0
   Address: 5cd1ffd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd1ffd0(HDC param_1,uchar *param_2,uint param_3,int param_4)

{
  uchar *_Dest;
  int c;
  BOOL BVar1;
  int iVar2;
  int iVar3;
  uchar *_Source;
  tagSIZE *psizl;
  undefined4 local_244;
  undefined4 local_23c;
  tagSIZE local_238;
  tagSIZE local_230;
  uchar *local_228;
  uchar local_224 [520];
  undefined1 *local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_5cd58760;
  puStack_10 = &DAT_5cd4daf2;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xfffffdac;
  local_23c = DAT_5cd58748;
  iVar3 = 0;
  local_244 = 0;
  if ((int)param_3 < 0) {
    param_3 = 0;
  }
  local_8 = 0;
  if (param_3 < 0x209) {
    _Dest = local_224;
    ExceptionList = &pvStack_14;
    local_1c = &stack0xfffffdac;
  }
  else {
    ExceptionList = &pvStack_14;
    _Dest = calloc(1,param_3);
    local_228 = _Dest;
    if (_Dest == (uchar *)0x0) goto LAB_5cd20145;
  }
  local_228 = _Dest;
  _mbscpy(_Dest,param_2);
  c = lstrlenA((LPCSTR)_Dest);
  BVar1 = GetTextExtentPoint32A(param_1,(LPCSTR)_Dest,c,&local_238);
  if (BVar1 != 0) {
    if (param_4 - 2U < (uint)local_238.cx) {
      psizl = &local_230;
      iVar2 = lstrlenA((LPCSTR)&local_23c);
      BVar1 = GetTextExtentPoint32A(param_1,(LPCSTR)&local_23c,iVar2,psizl);
      if (BVar1 == 0) goto LAB_5cd20145;
      do {
        if (c < 1) goto LAB_5cd20145;
        iVar3 = iVar3 + 1;
        c = c + -1;
        _Source = _Dest + iVar3;
        BVar1 = GetTextExtentPoint32A(param_1,(LPCSTR)_Source,c,&local_238);
        if (BVar1 == 0) goto LAB_5cd20145;
      } while ((param_4 - 2U < (uint)(local_230.cx + local_238.cx)) ||
              (iVar2 = lstrlenA((LPCSTR)&local_23c), (int)param_3 < iVar2 + c));
      _mbscpy(param_2,(uchar *)&local_23c);
      _mbscat(param_2,_Source);
    }
    local_244 = 1;
  }
LAB_5cd20145:
  local_8 = 0xffffffff;
  FUN_5cd20157();
  if (local_228 != local_224) {
    free(local_228);
  }
  ExceptionList = pvStack_14;
  return local_244;
}


