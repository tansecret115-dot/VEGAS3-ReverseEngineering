/* Module: mp3plug.dll
   Function: FUN_5f6bf810
   Address: 5f6bf810
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6bf810(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


