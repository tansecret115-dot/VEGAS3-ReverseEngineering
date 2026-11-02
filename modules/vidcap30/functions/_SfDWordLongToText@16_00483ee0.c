/* Module: vidcap30.exe
   Function: _SfDWordLongToText@16
   Address: 00483ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDWordLongToText_16(int param_1,int param_2,uchar *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uchar *_Source;
  longlong lVar3;
  uchar local_2 [2];
  
                    /* 0x83ee0  280  _SfDWordLongToText@16 */
  lVar3 = CONCAT44(param_2,param_1);
  if (param_2 == 0) {
    iVar2 = _SfDWordToText_12(param_1,param_3,param_4);
    return iVar2;
  }
  if ((param_1 == 0) && (param_2 == 0)) {
    *param_3 = '0';
    param_3[1] = '\0';
    return 1;
  }
  _Source = local_2 + 1;
  local_2[1] = 0;
  do {
    _Source = _Source + -1;
    cVar1 = __aullrem(lVar3,10,0);
    *_Source = cVar1 + '0';
    lVar3 = __aulldiv(lVar3,10,0);
  } while (lVar3 != 0);
  if (param_4 == 0) {
    _mbscpy(param_3,_Source);
    iVar2 = lstrlenA((LPCSTR)param_3);
    return iVar2;
  }
  iVar2 = _SfFormatNumber_12(_Source,param_3,0x40);
  return iVar2;
}


