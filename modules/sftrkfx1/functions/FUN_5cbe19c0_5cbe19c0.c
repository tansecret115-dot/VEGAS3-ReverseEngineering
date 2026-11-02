/* Module: sftrkfx1.dll
   Function: FUN_5cbe19c0
   Address: 5cbe19c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbe19c0(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


