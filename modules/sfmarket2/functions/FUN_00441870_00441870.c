/* Module: sfmarket2.dll
   Function: FUN_00441870
   Address: 00441870
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00441870(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


