/* Module: Setup.exe
   Function: FUN_00415250
   Address: 00415250
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00415250(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 * 1000 + *param_1 * -1000;
}


