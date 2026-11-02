/* Module: vidpcore.dll
   Function: FUN_5ded8540
   Address: 5ded8540
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5ded8540(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


