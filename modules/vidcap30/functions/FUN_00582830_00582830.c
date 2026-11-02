/* Module: vidcap30.exe
   Function: FUN_00582830
   Address: 00582830
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00582830(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  ResetEvent(*(HANDLE *)(param_1 + 4));
  SetEvent(*(HANDLE *)(param_1 + 8));
  return;
}


