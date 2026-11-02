/* Module: vegas30.exe
   Function: FUN_0048deb0
   Address: 0048deb0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0048deb0(uint *param_1,LPSTR param_2,uchar *param_3,undefined4 *param_4)

{
  uchar *_Str;
  int iVar1;
  uchar *puVar2;
  LPSTR lpsz;
  uchar *puVar3;
  uchar *puVar4;
  
  _Str = (uchar *)*param_1;
  iVar1 = lstrlenA((LPCSTR)_Str);
  if (iVar1 != 0) {
    puVar3 = _Str + iVar1;
    *param_4 = 0;
    puVar2 = _mbsstr(_Str,"\r\n");
    puVar4 = puVar3;
    if ((puVar2 < puVar3) && (puVar2 != (uchar *)0x0)) {
      lpsz = CharNextA((LPCSTR)puVar2);
      puVar3 = (uchar *)CharNextA(lpsz);
      puVar4 = puVar2;
    }
    puVar2 = _mbsstr(_Str,"\r");
    if ((puVar2 < puVar4) && (puVar2 != (uchar *)0x0)) {
      puVar3 = (uchar *)CharNextA((LPCSTR)puVar2);
      puVar4 = puVar2;
    }
    puVar2 = _mbsstr(_Str,"\n");
    if ((puVar2 < puVar4) && (puVar2 != (uchar *)0x0)) {
      puVar3 = (uchar *)CharNextA((LPCSTR)puVar2);
      puVar4 = puVar2;
    }
    *param_1 = (uint)puVar3;
    if ((_Str < puVar4) && (param_2 != (LPSTR)0x0)) {
      if (puVar4 + (1 - (int)_Str) < param_3) {
        param_3 = puVar4 + (1 - (int)_Str);
      }
      lstrcpynA(param_2,(LPCSTR)_Str,(int)param_3);
      param_2[(int)(param_3 + -1)] = '\0';
    }
    return _Str < puVar4;
  }
  *param_4 = 1;
  return false;
}


