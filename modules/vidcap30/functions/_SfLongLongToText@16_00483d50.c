/* Module: vidcap30.exe
   Function: _SfLongLongToText@16
   Address: 00483d50
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfLongLongToText_16(int param_1,int param_2,uchar *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uchar *_Source;
  bool bVar4;
  undefined8 uVar5;
  uchar local_2 [2];
  
                    /* 0x83d50  534  _SfLongLongToText@16 */
  if (param_2 == 0) {
    iVar3 = _SfDWordToText_12(param_1,param_3,param_4);
    return iVar3;
  }
  if ((param_1 == 0) && (param_2 == 0)) {
    *param_3 = '0';
    param_3[1] = '\0';
    return 1;
  }
  if ((param_2 < 1) && (param_2 < 0)) {
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    bVar1 = true;
    param_2 = -(param_2 + (uint)bVar4);
  }
  else {
    bVar1 = false;
  }
  uVar5 = CONCAT44(param_2,param_1);
  _Source = local_2 + 1;
  local_2[1] = 0;
  while ((param_1 != 0 || ((int)((ulonglong)uVar5 >> 0x20) != 0))) {
    _Source = _Source + -1;
    cVar2 = __aullrem(uVar5,10,0);
    *_Source = cVar2 + '0';
    uVar5 = __aulldiv(uVar5,10,0);
    param_1 = (int)uVar5;
  }
  if (bVar1) {
    _Source = _Source + -1;
    *_Source = '-';
  }
  if (param_4 != 0) {
    iVar3 = _SfFormatNumber_12(_Source,param_3,0x40);
    return iVar3;
  }
  _mbscpy(param_3,_Source);
  iVar3 = lstrlenA((LPCSTR)param_3);
  return iVar3;
}


