/* Module: vegas30k.dll
   Function: FUN_011973b0
   Address: 011973b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011973b0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x430) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x434));
    iVar2 = *(int *)(param_1 + 0x404);
    if (*(int *)(param_1 + 0x42c) != 0) {
      while (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x34);
        if ((0x7fffffff < *(uint *)(iVar1 + 0x24)) ||
           ((((int)*(uint *)(iVar1 + 0x24) < 1 && (*(uint *)(iVar1 + 0x20) < param_2)) ||
            (*(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + -1, iVar2 = iVar1,
            *(int *)(param_1 + 0x42c) == 0)))) break;
      }
    }
    *(int *)(param_1 + 0x404) = iVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x434));
  }
  return;
}


