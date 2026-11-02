/* Module: mpegin.dll
   Function: FUN_100054f0
   Address: 100054f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100054f0(int param_1)

{
  if ((*(int *)(param_1 + 0xb8) < 1) && (*(HANDLE *)(param_1 + 0x28) != (HANDLE)0x0)) {
    CloseHandle(*(HANDLE *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


