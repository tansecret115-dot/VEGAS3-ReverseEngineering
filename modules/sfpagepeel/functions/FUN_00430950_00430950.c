/* Module: sfpagepeel.dll
   Function: FUN_00430950
   Address: 00430950
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00430950(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


