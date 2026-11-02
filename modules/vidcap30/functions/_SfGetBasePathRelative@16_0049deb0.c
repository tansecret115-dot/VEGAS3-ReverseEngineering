/* Module: vidcap30.exe
   Function: _SfGetBasePathRelative@16
   Address: 0049deb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfGetBasePathRelative_16(undefined4 param_1,uchar *param_2,LPSTR param_3,uint param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uchar local_104 [260];
  
                    /* 0x9deb0  388  _SfGetBasePathRelative@16 */
  _mbscpy(local_104,param_2);
  puVar1 = (undefined1 *)_SfGetFileNamePtrRelative_8(param_1,local_104);
  *puVar1 = 0;
  _SfAddSlashToPathName_8(local_104,0x104);
  lstrcpynA(param_3,(LPCSTR)local_104,param_4);
  param_3[param_4 - 1] = '\0';
  iVar2 = lstrlenA((LPCSTR)local_104);
  return -(uint)(param_4 < iVar2 + 1U) & 0x80004005;
}


