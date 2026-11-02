/* Module: sfppack2.dll
   Function: FUN_5cd29270
   Address: 5cd29270
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd29270(uint param_1,int param_2,uchar *param_3,int param_4)

{
  int iVar1;
  uchar *_Source;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uchar local_2 [2];
  
  if (param_2 == 0) {
    iVar1 = FUN_5cd291e0(param_1,param_3,param_4);
    return iVar1;
  }
  lVar3 = CONCAT44(param_2,param_1);
  if ((param_1 == 0) && (param_2 == 0)) {
    *param_3 = '0';
    param_3[1] = '\0';
    return 1;
  }
  _Source = local_2 + 1;
  local_2[1] = 0;
  do {
    _Source = _Source + -1;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar2 = __aullrem((uint)lVar3,uVar4,10,0);
    *_Source = (char)uVar2 + '0';
    lVar3 = __aulldiv((uint)lVar3,uVar4,10,0);
  } while (lVar3 != 0);
  if (param_4 == 0) {
    _mbscpy(param_3,_Source);
    iVar1 = lstrlenA((LPCSTR)param_3);
    return iVar1;
  }
  iVar1 = FUN_5cd28c10((LPCSTR)_Source,(LPCSTR)param_3,0x40);
  return iVar1;
}


