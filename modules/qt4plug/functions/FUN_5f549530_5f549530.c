/* Module: qt4plug.dll
   Function: FUN_5f549530
   Address: 5f549530
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f549530(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


