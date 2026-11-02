/* Module: Setup.exe
   Function: _SfGetBasePathRelative@16
   Address: 004122d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfGetBasePathRelative_16(LPCSTR param_1,uchar *param_2,LPSTR param_3,uint param_4)

{
  char *pcVar1;
  int iVar2;
  uchar local_104 [260];
  
                    /* 0x122d0  136  _SfGetBasePathRelative@16 */
  _mbscpy(local_104,param_2);
  pcVar1 = _SfGetFileNamePtrRelative_8(param_1,(LPCSTR)local_104);
  *pcVar1 = '\0';
  _SfAddSlashToPathName_8(local_104,0x104);
  lstrcpynA(param_3,(LPCSTR)local_104,param_4);
  param_3[param_4 - 1] = '\0';
  iVar2 = lstrlenA((LPCSTR)local_104);
  return -(uint)(param_4 < iVar2 + 1U) & 0x80004005;
}


