/* Module: mcplug.dll
   Function: FUN_00439b60
   Address: 00439b60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00439b60(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


