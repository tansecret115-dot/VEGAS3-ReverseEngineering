/* Module: pncrt.dll
   Function: FUN_78008490
   Address: 78008490
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_78008490(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}


