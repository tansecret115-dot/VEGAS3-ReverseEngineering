/* Module: mcplugrw.dll
   Function: FUN_00427310
   Address: 00427310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00427310(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


