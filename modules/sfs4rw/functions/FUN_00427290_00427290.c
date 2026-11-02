/* Module: sfs4rw.dll
   Function: FUN_00427290
   Address: 00427290
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00427290(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


