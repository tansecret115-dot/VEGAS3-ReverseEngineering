/* Module: vegas30k.dll
   Function: FUN_010f6400
   Address: 010f6400
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_010f6400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  double dVar1;
  
  dVar1 = _hypot((double)CONCAT44(param_4,param_3),(double)CONCAT44(param_2,param_1));
  return (float10)dVar1;
}


