/* Module: vegas30k.dll
   Function: FUN_010c5d00
   Address: 010c5d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010c5d00(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


