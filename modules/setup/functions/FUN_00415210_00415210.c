/* Module: Setup.exe
   Function: FUN_00415210
   Address: 00415210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00415210(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


