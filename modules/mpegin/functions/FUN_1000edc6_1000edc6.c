/* Module: mpegin.dll
   Function: FUN_1000edc6
   Address: 1000edc6
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl FUN_1000edc6(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}


