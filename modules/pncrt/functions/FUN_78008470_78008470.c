/* Module: pncrt.dll
   Function: FUN_78008470
   Address: 78008470
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_78008470(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}


