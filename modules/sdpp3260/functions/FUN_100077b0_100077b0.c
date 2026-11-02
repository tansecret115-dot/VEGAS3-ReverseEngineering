/* Module: sdpp3260.dll
   Function: FUN_100077b0
   Address: 100077b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_100077b0(undefined4 *param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_100065e0(param_1 + 2);
  FUN_10007d70(&local_c);
  *param_1 = local_c;
  param_1[1] = local_8;
  return param_1;
}


