/* Module: vegas30.exe
   Function: FUN_00595790
   Address: 00595790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00595790(int param_1,int param_2)

{
  _SfList_SetThreadOwner_8(*(undefined4 *)(param_2 + 0x5d0),*(undefined4 *)(param_1 + 4));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x3e4));
  return;
}


