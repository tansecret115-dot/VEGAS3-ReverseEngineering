/* Module: sfppack1.dll
   Function: FUN_5ce0c230
   Address: 5ce0c230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ce0c230(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_5ce0e610(param_1,param_2,local_18,param_4);
  FUN_5ce09e60((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


