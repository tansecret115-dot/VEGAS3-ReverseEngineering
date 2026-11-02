/* Module: mp3rw.dll
   Function: FUN_0042e410
   Address: 0042e410
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042e410(undefined4 *param_1,LPCSTR param_2,LPCSTR param_3)

{
  bool bVar1;
  uchar *_Dest;
  DWORD DVar2;
  uchar *_Source;
  LPCSTR pCVar3;
  int iVar4;
  undefined3 extraout_var;
  uchar *_Dest_00;
  uint uVar5;
  char *_Source_00;
  uchar local_208 [260];
  uchar local_104 [260];
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  *param_1 = 0;
  _Dest = calloc(1,0x410);
  if (_Dest == (uchar *)0x0) {
    return 0x8007000e;
  }
  if ((param_2 == (LPCSTR)0x0) || (*param_2 == '\0')) {
    *_Dest = '\0';
  }
  else {
    lstrcpynA((LPSTR)_Dest,param_2,0x104);
    _Dest[0x103] = '\0';
  }
  if ((param_3 == (LPCSTR)0x0) || (*param_3 == '\0')) {
    _Dest[0x104] = '\0';
  }
  else {
    lstrcpynA((LPSTR)(_Dest + 0x104),param_3,0x104);
    _Dest[0x207] = '\0';
  }
  _Dest_00 = _Dest + 0x104;
  DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_208,0x104);
  if (DVar2 == 0) {
    return 0x80004005;
  }
  _Source = (uchar *)FUN_0041c730((LPCSTR)local_208);
  pCVar3 = FUN_0041c7a0((LPCSTR)local_208);
  *pCVar3 = '\0';
  _mbscpy(local_104,_Source);
  *_Source = '\0';
  if (*_Dest == '\0') {
    iVar4 = lstrlenA((LPCSTR)local_208);
    _mbsncat(local_208,local_104,0x103 - iVar4);
    iVar4 = lstrlenA((LPCSTR)local_208);
    _Source_00 = ".oemdat";
  }
  else {
    iVar4 = lstrlenA((LPCSTR)local_208);
    _Source_00 = (char *)_Dest;
  }
  _mbsncat(local_208,(uchar *)_Source_00,0x103 - iVar4);
  _mbscpy(_Dest,local_208);
  if (*_Dest_00 == '\0') {
    _mbscpy(_Dest_00,local_104);
    _mbscat(_Dest_00,".ini");
  }
  _Dest[0x208] = '\0';
  uVar5 = 0x80004005;
  bVar1 = FUN_0041d0f0((LPCSTR)_Dest);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar5 = FUN_0042e600((LPCSTR)_Dest);
    if (-1 < (int)uVar5) goto LAB_0042e5e3;
    uVar5 = FUN_0042e730((LPCSTR)_Dest);
    if (-1 < (int)uVar5) goto LAB_0042e5e3;
  }
  free(_Dest);
  _Dest = (uchar *)0x0;
LAB_0042e5e3:
  *param_1 = _Dest;
  return uVar5;
}


