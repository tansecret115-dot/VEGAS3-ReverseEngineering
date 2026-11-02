/* Module: vegas30.exe
   Function: FUN_00562540
   Address: 00562540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00562540(int *param_1,int param_2)

{
  if (param_2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0xc));
  }
  return;
}


