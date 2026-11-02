/* Module: wmfplug2.dll
   Function: FUN_0044abe0
   Address: 0044abe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044abe0(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


