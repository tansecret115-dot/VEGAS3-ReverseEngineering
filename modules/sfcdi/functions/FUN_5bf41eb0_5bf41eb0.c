/* Module: sfcdi.dll
   Function: FUN_5bf41eb0
   Address: 5bf41eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf41eb0(LPCSTR param_1,int param_2,uint param_3,uchar *param_4)

{
  char cVar1;
  LPCSTR lpString;
  uint uVar2;
  uint uVar3;
  int local_150;
  uchar local_14c [8];
  uchar local_144 [31];
  uchar local_125 [33];
  uchar local_104 [260];
  
  uVar3 = 0;
  local_150 = 0;
  if ((param_2 == 0) && ((short)param_3 != 0)) {
    local_150 = wsprintfA((LPSTR)local_14c,";%u",param_3 & 0x7fff);
  }
  lpString = FUN_5bf23120(param_1);
  if (*lpString == '.') {
    *lpString = '\0';
    uVar2 = lstrlenA(param_1);
    *lpString = '.';
    uVar3 = lstrlenA(lpString);
  }
  else {
    uVar2 = lstrlenA(param_1);
  }
  if (param_2 == 0) {
    if (0x1e < uVar2) {
      uVar2 = 0x1e;
    }
  }
  else if (0x1f < uVar2) {
    uVar2 = 0x1f;
  }
  lstrcpynA((LPSTR)local_144,param_1,uVar2 + 1);
  local_144[uVar2] = '\0';
  if (*lpString == '.') {
    if (0x1e < uVar3) {
      uVar3 = 0x1e;
    }
    lstrcpynA((LPSTR)(local_125 + 1),lpString,uVar3 + 1);
    local_125[uVar3 + 1] = '\0';
  }
  if (0x1f < uVar3 + uVar2) {
    local_125[-uVar3] = '\0';
  }
  _mbscpy(local_104,local_144);
  if (uVar3 != 0) {
    _mbscat(local_104,local_125 + 1);
  }
  if (local_150 != 0) {
    _mbscat(local_104,local_14c);
  }
  uVar3 = FUN_5bf3d670(param_4,0x25,local_104);
  cVar1 = (char)uVar3;
  if (cVar1 != '\0') {
    uVar2 = uVar3 & 0xff;
    do {
      uVar3 = _mbctoupper((int)(char)*param_4);
      *param_4 = (uchar)uVar3;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return CONCAT31((int3)(uVar3 >> 8),cVar1);
}


