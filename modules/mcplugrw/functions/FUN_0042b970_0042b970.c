/* Module: mcplugrw.dll
   Function: FUN_0042b970
   Address: 0042b970
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042b970(uint param_1,int param_2,uchar *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uchar *_Source;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uchar local_2 [2];
  
  if (param_2 == 0) {
    iVar2 = FUN_0042ba70(param_1,param_3,param_4);
    return iVar2;
  }
  if ((param_1 == 0) && (param_2 == 0)) {
    *param_3 = '0';
    param_3[1] = '\0';
    return 1;
  }
  if ((param_2 < 1) && (param_2 < 0)) {
    bVar3 = param_1 != 0;
    param_1 = -param_1;
    bVar1 = true;
    param_2 = -(param_2 + (uint)bVar3);
  }
  else {
    bVar1 = false;
  }
  _Source = local_2 + 1;
  local_2[1] = 0;
  lVar5 = CONCAT44(param_2,param_1);
  if ((param_1 != 0) || (lVar5 = CONCAT44(param_2,param_1), param_2 != 0)) {
    do {
      _Source = _Source + -1;
      uVar6 = (uint)((ulonglong)lVar5 >> 0x20);
      uVar4 = __aullrem((uint)lVar5,uVar6,10,0);
      *_Source = (char)uVar4 + '0';
      lVar5 = __aulldiv((uint)lVar5,uVar6,10,0);
    } while (lVar5 != 0);
  }
  if (bVar1) {
    _Source = _Source + -1;
    *_Source = '-';
  }
  if (param_4 != 0) {
    iVar2 = FUN_0042b4a0((LPCSTR)_Source,(LPCSTR)param_3,0x40);
    return iVar2;
  }
  _mbscpy(param_3,_Source);
  iVar2 = lstrlenA((LPCSTR)param_3);
  return iVar2;
}


