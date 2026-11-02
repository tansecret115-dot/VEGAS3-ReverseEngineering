/* Module: enlv3260.dll
   Function: FUN_661d2980
   Address: 661d2980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_661d2980(int param_1)

{
  ReleaseSemaphore(*(HANDLE *)(param_1 + 0x48),1,(LPLONG)0x0);
  return;
}


