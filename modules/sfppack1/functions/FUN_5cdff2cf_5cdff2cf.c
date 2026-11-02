/* Module: sfppack1.dll
   Function: FUN_5cdff2cf
   Address: 5cdff2cf
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cdff2cf(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    ReleaseSemaphore(*(HANDLE *)(param_1 + 0x30),*(int *)(param_1 + 0x34),(LPLONG)0x0);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


