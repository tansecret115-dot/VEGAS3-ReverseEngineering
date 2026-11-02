/* Module: oggplug.dll
   Function: FUN_0041efb0
   Address: 0041efb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041efb0(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


