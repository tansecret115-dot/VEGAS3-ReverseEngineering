/* Module: rmbe3260.dll
   Function: FUN_66058400
   Address: 66058400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_66058400(undefined4 *param_1)

{
  undefined4 local_10;
  uint local_c;
  
  ftime(&local_10);
  *param_1 = local_10;
  param_1[1] = (local_c & 0xffff) * 1000;
  return 0;
}


