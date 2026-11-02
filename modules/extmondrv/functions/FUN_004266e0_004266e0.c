/* Module: extmondrv.dll
   Function: FUN_004266e0
   Address: 004266e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004266e0(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


