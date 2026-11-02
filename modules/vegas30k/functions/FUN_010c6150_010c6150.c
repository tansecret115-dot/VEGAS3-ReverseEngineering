/* Module: vegas30k.dll
   Function: FUN_010c6150
   Address: 010c6150
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010c6150(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


