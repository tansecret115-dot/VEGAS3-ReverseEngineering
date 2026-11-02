/* Module: sfpublish.dll
   Function: FUN_0042e160
   Address: 0042e160
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042e160(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


