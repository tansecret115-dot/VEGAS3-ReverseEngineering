/* Module: gifplug.dll
   Function: FUN_5f6fad50
   Address: 5f6fad50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6fad50(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


