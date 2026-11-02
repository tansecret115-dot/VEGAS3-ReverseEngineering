/* Module: vegas30.exe
   Function: FUN_0040b850
   Address: 0040b850
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0040b850(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return param_1;
}


