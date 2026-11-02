/* Module: vegas30k.dll
   Function: FUN_011779a0
   Address: 011779a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __fastcall FUN_011779a0(int param_1)

{
  undefined8 uVar1;
  
  if (((*(byte *)(param_1 + 0x5c) & 2) != 0) && ((*(uint *)(param_1 + 0x50) & 4) == 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    uVar1 = FUN_01177b20();
    if (((*(int *)(param_1 + 0xac) != 0) && (*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0xa0)))
       && (*(int *)(param_1 + 0x94) == *(int *)(param_1 + 0xa4))) {
      ResetEvent(*(HANDLE *)(param_1 + 0xa8));
      SetEvent(*(HANDLE *)(param_1 + 0x40));
      WaitForSingleObject(*(HANDLE *)(param_1 + 0xa8),0xffffffff);
      uVar1 = FUN_01177b20();
    }
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xa0);
    *(int *)(param_1 + 0x98) = (int)uVar1;
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xa4);
    *(int *)(param_1 + 0x9c) = (int)((ulonglong)uVar1 >> 0x20);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return uVar1;
  }
  return *(undefined8 *)(param_1 + 0x188);
}


