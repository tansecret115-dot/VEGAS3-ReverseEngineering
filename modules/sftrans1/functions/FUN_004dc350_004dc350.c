/* Module: sftrans1.dll
   Function: FUN_004dc350
   Address: 004dc350
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004dc350(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = param_1[10];
  if ((-1 < (int)uVar1) && ((uVar1 & 0x40000000) == 0)) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != param_1[0xd]) {
      return -0x7fffbffb;
    }
  }
  if ((param_1[10] & 4U) == 0) {
    return -0x7fffbffb;
  }
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  if (*param_1 < param_2) {
    if (param_1[0xe] < param_2) {
      iVar3 = FUN_004dc040(param_1,param_2 - param_1[0xe]);
      if (iVar3 != 0) goto LAB_004dc3e5;
    }
    *param_1 = param_2;
  }
  else if ((param_2 < *param_1) && (*param_1 = param_2, param_3 != 0)) {
    FUN_004dc400(param_1,0,0,1);
  }
LAB_004dc3e5:
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return iVar3;
}


