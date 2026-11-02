/* Module: mp3rw.dll
   Function: FUN_004195f0
   Address: 004195f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004195f0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_0041b9e0(param_1,param_2,local_18,param_4);
  FUN_00417220((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


