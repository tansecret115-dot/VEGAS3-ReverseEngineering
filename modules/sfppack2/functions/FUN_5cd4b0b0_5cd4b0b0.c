/* Module: sfppack2.dll
   Function: FUN_5cd4b0b0
   Address: 5cd4b0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd4b0b0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_5cd4d490(param_1,param_2,local_18,param_4);
  FUN_5cd48ce0((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


