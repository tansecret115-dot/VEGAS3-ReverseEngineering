/* Module: vegas30k.dll
   Function: SfOem_Init
   Address: 01003c00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_Init(void * *,char *,char *) */

long SfOem_Init(void **param_1,char *param_2,char *param_3)

{
  uchar *_Dest;
  DWORD DVar1;
  uchar *_Source;
  undefined1 *puVar2;
  int iVar3;
  uchar *_Dest_00;
  int iVar4;
  char *_Source_00;
  uchar local_208 [260];
  uchar local_104 [260];
  
                    /* 0x3c00  469  ?SfOem_Init@@YGJPAPAXPAD1@Z */
  if (param_1 == (void **)0x0) {
    return -0x7ff8ffa9;
  }
  *param_1 = (void *)0x0;
  _Dest = calloc(1,0x410);
  if (_Dest == (uchar *)0x0) {
    return -0x7ff8fff2;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    *_Dest = '\0';
  }
  else {
    lstrcpynA((LPSTR)_Dest,param_2,0x104);
    _Dest[0x103] = '\0';
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    _Dest[0x104] = '\0';
  }
  else {
    lstrcpynA((LPSTR)(_Dest + 0x104),param_3,0x104);
    _Dest[0x207] = '\0';
  }
  _Dest_00 = _Dest + 0x104;
  DVar1 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_208,0x104);
  if (DVar1 == 0) {
    return -0x7fffbffb;
  }
  _Source = (uchar *)_SfGetFileNamePtrA_4(local_208);
  puVar2 = (undefined1 *)_SfGetFileNameExtensionPtrA_4(local_208);
  *puVar2 = 0;
  _mbscpy(local_104,_Source);
  *_Source = '\0';
  if (*_Dest == '\0') {
    iVar3 = lstrlenA((LPCSTR)local_208);
    _mbsncat(local_208,local_104,0x103 - iVar3);
    iVar3 = lstrlenA((LPCSTR)local_208);
    _Source_00 = ".oemdat";
  }
  else {
    iVar3 = lstrlenA((LPCSTR)local_208);
    _Source_00 = (char *)_Dest;
  }
  _mbsncat(local_208,(uchar *)_Source_00,0x103 - iVar3);
  _mbscpy(_Dest,local_208);
  if (*_Dest_00 == '\0') {
    _mbscpy(_Dest_00,local_104);
    _mbscat(_Dest_00,".ini");
  }
  _Dest[0x208] = '\0';
  iVar4 = -0x7fffbffb;
  iVar3 = _SfDoesFileExist_4(_Dest);
  if (iVar3 != 0) {
    iVar4 = FUN_01003df0(_Dest);
    if (-1 < iVar4) goto LAB_01003dd3;
    iVar4 = FUN_01003f20(_Dest);
    if (-1 < iVar4) goto LAB_01003dd3;
  }
  free(_Dest);
  _Dest = (uchar *)0x0;
LAB_01003dd3:
  *param_1 = _Dest;
  return iVar4;
}


