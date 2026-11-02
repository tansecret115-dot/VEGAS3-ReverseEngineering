/* Module: sfppack3.dll
   Function: FUN_5cc74c5f
   Address: 5cc74c5f
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cc74c5f(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    ReleaseSemaphore(*(HANDLE *)(param_1 + 0x30),*(int *)(param_1 + 0x34),(LPLONG)0x0);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


