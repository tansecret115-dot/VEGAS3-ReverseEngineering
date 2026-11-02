/* Module: vidcap30.exe
   Function: _SfList_AllocItem@12
   Address: 00483050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_AllocItem_12(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  
                    /* 0x83050  492  _SfList_AllocItem@12 */
  uVar1 = *(uint *)(param_1 + 0x28);
  *param_3 = 0;
  if ((-1 < (int)uVar1) && ((uVar1 >> 0x1e & 1) == 0)) {
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
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar3 = FUN_00481b00(param_1,param_2);
    if (iVar3 == 0) {
      uVar4 = 0x8007000e;
    }
    else {
      *param_3 = iVar3;
      uVar4 = 0;
    }
    *(int *)(param_1 + 0x4c) = iVar3;
  }
  else {
    uVar4 = 0x80004005;
  }
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  }
  return uVar4;
}


