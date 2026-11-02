/* Module: sfcd.cdd
   Function: FUN_00424930
   Address: 00424930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00424930(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


