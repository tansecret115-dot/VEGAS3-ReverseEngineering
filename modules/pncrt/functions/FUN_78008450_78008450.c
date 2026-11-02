/* Module: pncrt.dll
   Function: FUN_78008450
   Address: 78008450
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_78008450(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}


