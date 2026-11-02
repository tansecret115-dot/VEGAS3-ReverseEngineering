/* Module: vegas30.exe
   Function: FUN_0048df90
   Address: 0048df90
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0048df90(uint *param_1,LPSTR param_2,uchar *param_3,undefined4 *param_4)

{
  uchar *_Str;
  int iVar1;
  uchar *lpsz;
  uchar *puVar2;
  uchar *puVar3;
  
  _Str = (uchar *)*param_1;
  iVar1 = lstrlenA((LPCSTR)_Str);
  if (iVar1 != 0) {
    puVar2 = _Str + iVar1;
    *param_4 = 0;
    lpsz = _mbsstr(_Str,"\t");
    puVar3 = puVar2;
    if ((lpsz < puVar2) && (lpsz != (uchar *)0x0)) {
      puVar2 = (uchar *)CharNextA((LPCSTR)lpsz);
      puVar3 = lpsz;
    }
    *param_1 = (uint)puVar2;
    if ((_Str < puVar3) && (param_2 != (LPSTR)0x0)) {
      if (puVar3 + (1 - (int)_Str) < param_3) {
        param_3 = puVar3 + (1 - (int)_Str);
      }
      lstrcpynA(param_2,(LPCSTR)_Str,(int)param_3);
      param_2[(int)(param_3 + -1)] = '\0';
    }
    return _Str < puVar3;
  }
  *param_4 = 1;
  return false;
}


