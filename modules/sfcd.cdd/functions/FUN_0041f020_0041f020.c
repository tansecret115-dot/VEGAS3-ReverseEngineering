/* Module: sfcd.cdd
   Function: FUN_0041f020
   Address: 0041f020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041f020(uint *param_1,uint param_2)

{
  uint local_c [3];
  
  if (param_1 == (uint *)0x0) {
    return 0x80004003;
  }
  FUN_0041eec0(local_c,param_2);
  FUN_0041ef70(param_1,local_c);
  return 0;
}


