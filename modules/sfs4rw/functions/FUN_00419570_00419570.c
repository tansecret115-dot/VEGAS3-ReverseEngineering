/* Module: sfs4rw.dll
   Function: FUN_00419570
   Address: 00419570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419570(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_0041b960(param_1,param_2,local_18,param_4);
  FUN_004171a0((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


