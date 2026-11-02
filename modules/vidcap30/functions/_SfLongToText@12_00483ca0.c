/* Module: vidcap30.exe
   Function: _SfLongToText@12
   Address: 00483ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfLongToText_12(uint param_1,uchar *param_2,int param_3)

{
  int iVar1;
  uchar *_Source;
  bool bVar2;
  uchar local_2 [2];
  
                    /* 0x83ca0  535  _SfLongToText@12 */
  if (param_1 == 0) {
    *param_2 = '0';
    param_2[1] = '\0';
    return 1;
  }
  bVar2 = (int)param_1 < 0;
  if (bVar2) {
    param_1 = -param_1;
  }
  _Source = local_2 + 1;
  local_2[1] = 0;
  for (; param_1 != 0; param_1 = param_1 / 10) {
    _Source = _Source + -1;
    *_Source = (char)((ulonglong)param_1 % 10) + '0';
  }
  if (bVar2) {
    _Source = _Source + -1;
    *_Source = '-';
  }
  if (param_3 != 0) {
    iVar1 = _SfFormatNumber_12(_Source,param_2,0x40);
    return iVar1;
  }
  _mbscpy(param_2,_Source);
  iVar1 = lstrlenA((LPCSTR)param_2);
  return iVar1;
}


