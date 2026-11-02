/* Module: sfcdi.dll
   Function: FUN_5bf04110
   Address: 5bf04110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf04110(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),20000);
  return;
}


