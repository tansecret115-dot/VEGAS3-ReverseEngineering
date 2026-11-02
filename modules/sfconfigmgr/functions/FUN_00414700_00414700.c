/* Module: sfconfigmgr.dll
   Function: FUN_00414700
   Address: 00414700
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00414700(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


