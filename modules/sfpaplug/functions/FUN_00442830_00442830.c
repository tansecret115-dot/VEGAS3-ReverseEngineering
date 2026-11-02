/* Module: sfpaplug.dll
   Function: FUN_00442830
   Address: 00442830
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00442830(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


