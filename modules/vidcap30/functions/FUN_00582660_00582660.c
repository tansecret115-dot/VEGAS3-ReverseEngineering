/* Module: vidcap30.exe
   Function: FUN_00582660
   Address: 00582660
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00582660(int param_1)

{
  FUN_005825b0(1);
  FUN_005825b0(0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}


