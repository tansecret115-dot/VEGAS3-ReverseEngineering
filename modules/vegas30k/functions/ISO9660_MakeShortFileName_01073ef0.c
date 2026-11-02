/* Module: vegas30k.dll
   Function: ISO9660_MakeShortFileName
   Address: 01073ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned char __stdcall ISO9660_MakeShortFileName(char *,int,unsigned short,char * const) */

uchar ISO9660_MakeShortFileName(char *param_1,int param_2,ushort param_3,char *param_4)

{
  LPCSTR lpString;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_150;
  uchar local_14c [8];
  uchar local_144 [31];
  uchar local_125 [33];
  uchar local_104 [260];
  
                    /* 0x73ef0  114  ?ISO9660_MakeShortFileName@@YGEPADHGQAD@Z */
  uVar3 = 0;
  local_150 = 0;
  if ((param_2 == 0) && (param_3 != 0)) {
    local_150 = wsprintfA((LPSTR)local_14c,";%u",param_3 & 0x7fff);
  }
  lpString = (LPCSTR)_SfGetFileNameExtensionPtrA_4(param_1);
  if (*lpString == '.') {
    *lpString = '\0';
    uVar1 = lstrlenA(param_1);
    *lpString = '.';
    uVar3 = lstrlenA(lpString);
  }
  else {
    uVar1 = lstrlenA(param_1);
  }
  if (param_2 == 0) {
    if (0x1e < uVar1) {
      uVar1 = 0x1e;
    }
  }
  else if (0x1f < uVar1) {
    uVar1 = 0x1f;
  }
  lstrcpynA((LPSTR)local_144,param_1,uVar1 + 1);
  local_144[uVar1] = '\0';
  if (*lpString == '.') {
    if (0x1e < uVar3) {
      uVar3 = 0x1e;
    }
    lstrcpynA((LPSTR)(local_125 + 1),lpString,uVar3 + 1);
    local_125[uVar3 + 1] = '\0';
  }
  if (0x1f < uVar3 + uVar1) {
    local_125[-uVar3] = '\0';
  }
  _mbscpy(local_104,local_144);
  if (uVar3 != 0) {
    _mbscat(local_104,local_125 + 1);
  }
  if (local_150 != 0) {
    _mbscat(local_104,local_14c);
  }
  uVar3 = DtGetMultiByteFromTstring(param_4,0x25,(char *)local_104);
  if ((uchar)uVar3 != '\0') {
    uVar1 = uVar3 & 0xff;
    do {
      uVar2 = _mbctoupper((int)*param_4);
      *param_4 = (char)uVar2;
      param_4 = param_4 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return (uchar)uVar3;
}


