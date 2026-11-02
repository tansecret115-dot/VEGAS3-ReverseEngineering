/* Module: g2plug.dll
   Function: FUN_5f83f220
   Address: 5f83f220
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f83f220(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


