/* Module: Setup.exe
   Function: _SfList_IsValidIndexSlow@8
   Address: 004195d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_IsValidIndexSlow_8(int *param_1,int param_2)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  
                    /* 0x195d0  241  _SfList_IsValidIndexSlow@8 */
  uVar1 = param_1[10];
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if ((uVar1 & 0x40000000) == 0) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != param_1[0xd]) {
      return 0;
    }
  }
  if (param_1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_1;
  }
  if ((param_2 < 0) || (iVar3 + -1 < param_2)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return uVar4;
}


