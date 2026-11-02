/* Module: sfxpfx1.dll
   Function: FUN_5c96e660
   Address: 5c96e660
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c96e660(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


