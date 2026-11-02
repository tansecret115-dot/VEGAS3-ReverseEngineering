/* Module: aviplug.dll
   Function: FUN_5f9c4b90
   Address: 5f9c4b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9c4b90(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


