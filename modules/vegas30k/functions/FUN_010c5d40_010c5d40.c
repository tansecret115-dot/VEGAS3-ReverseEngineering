/* Module: vegas30k.dll
   Function: FUN_010c5d40
   Address: 010c5d40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010c5d40(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 * 1000 + *param_1 * -1000;
}


