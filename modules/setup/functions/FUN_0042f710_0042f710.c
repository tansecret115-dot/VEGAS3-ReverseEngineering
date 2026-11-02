/* Module: Setup.exe
   Function: FUN_0042f710
   Address: 0042f710
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042f710(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_00431b00(param_1,param_2,local_18,param_4);
  FUN_0042d340((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


