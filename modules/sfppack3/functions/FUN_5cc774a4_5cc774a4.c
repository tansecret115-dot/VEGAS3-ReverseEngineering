/* Module: sfppack3.dll
   Function: FUN_5cc774a4
   Address: 5cc774a4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc774a4(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  return *(undefined4 *)(param_1 + 0xc);
}


