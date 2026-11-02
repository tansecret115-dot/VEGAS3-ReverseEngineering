/* Module: vegas30k.dll
   Function: FUN_01197ec0
   Address: 01197ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01197ec0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x480) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x484));
    iVar2 = *(int *)(param_1 + 0x45c);
    if (*(int *)(param_1 + 0x47c) != 0) {
      while (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x34);
        if ((0x7fffffff < *(uint *)(iVar1 + 0x24)) ||
           ((((int)*(uint *)(iVar1 + 0x24) < 1 && (*(uint *)(iVar1 + 0x20) < param_2)) ||
            (iVar3 = *(int *)(param_1 + 0x47c) + -1, *(int *)(param_1 + 0x47c) = iVar3,
            iVar2 = iVar1, iVar3 == 0)))) break;
      }
    }
    *(int *)(param_1 + 0x45c) = iVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x484));
  }
  return;
}


