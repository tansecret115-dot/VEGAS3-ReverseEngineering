/* Module: sfxpfx1.dll
   Function: FUN_5c985c10
   Address: 5c985c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c985c10(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_18 [6];
  
  FUN_5c987ff0(param_1,param_2,local_18,param_4);
  FUN_5c983840((int)local_18,param_3);
  *param_3 = *param_3 & 0xfffff;
  return;
}


