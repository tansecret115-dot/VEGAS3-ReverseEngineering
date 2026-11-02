/* Module: mp3rw.dll
   Function: FUN_0040e1e0
   Address: 0040e1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040e1e0(uchar *param_1,uint param_2)

{
  uchar local_208 [260];
  uchar local_104 [260];
  
  FUN_00420fe0(local_208,(BYTE *)"FamilyID=%d");
  _mbscpy(local_104,local_208);
  FUN_00420fe0(local_208,(BYTE *)"&Build=%d");
  _mbscat(local_104,local_208);
  FUN_00420fe0(local_208,(BYTE *)"&SIVersion=%d");
  _mbscat(local_104,local_208);
  FUN_00420fe0(local_208,(BYTE *)"&Language=%s");
  _mbscat(local_104,local_208);
  if (0x104 < param_2) {
    _mbscpy(param_1,local_104);
    return 0;
  }
  lstrcpynA((LPSTR)param_1,(LPCSTR)local_104,param_2 - 1);
  param_1[param_2 - 2] = '\0';
  return 0x80004005;
}


