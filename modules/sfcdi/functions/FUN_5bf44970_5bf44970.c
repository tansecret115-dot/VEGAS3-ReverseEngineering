/* Module: sfcdi.dll
   Function: FUN_5bf44970
   Address: 5bf44970
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf44970(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


