/* Module: sfppack1.dll
   Function: FUN_5cdf4d10
   Address: 5cdf4d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdf4d10(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


