/* Module: vegas30.exe
   Function: FUN_00595760
   Address: 00595760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00595760(undefined4 param_1,int param_2)

{
  DWORD DVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x3e4));
  DVar1 = GetCurrentThreadId();
  _SfList_SetThreadOwner_8(*(undefined4 *)(param_2 + 0x5d0),DVar1);
  return;
}


