/* Module: sftrans1.dll
   Function: FUN_00508740
   Address: 00508740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00508740(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


