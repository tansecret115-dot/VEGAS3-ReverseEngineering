/* Module: Setup.exe
   Function: _SfList_ReAllocItem@12
   Address: 0041ac40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_ReAllocItem_12(int param_1,int param_2,size_t param_3)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  
                    /* 0x1ac40  244  _SfList_ReAllocItem@12 */
  uVar4 = 0;
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((-1 < (int)uVar1) && ((uVar1 & 0x40000000) == 0)) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != *(DWORD *)(param_1 + 0x34)) {
      return 0x80004005;
    }
  }
  if ((*(uint *)(param_1 + 0x28) & 2) == 0) {
    return 0x80004005;
  }
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  }
  iVar3 = FUN_00419470(param_1,*(void **)(*(int *)(param_1 + 8) + param_2 * 4),param_3);
  if (iVar3 == 0) {
    uVar4 = 0x8007000e;
  }
  else {
    *(int *)(*(int *)(param_1 + 8) + param_2 * 4) = iVar3;
  }
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  }
  return uVar4;
}


