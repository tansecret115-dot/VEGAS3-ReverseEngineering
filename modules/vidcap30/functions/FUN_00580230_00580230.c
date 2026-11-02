/* Module: vidcap30.exe
   Function: FUN_00580230
   Address: 00580230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00580230(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    ReleaseSemaphore(*(HANDLE *)(param_1 + 0x30),*(int *)(param_1 + 0x34),(LPLONG)0x0);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


