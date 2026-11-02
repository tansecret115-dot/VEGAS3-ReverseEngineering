/* Module: sfxpfx2.dll
   Function: FUN_5c8bff90
   Address: 5c8bff90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c8bff90(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


