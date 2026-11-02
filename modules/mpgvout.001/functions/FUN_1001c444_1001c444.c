/* Module: mpgvout.001
   Function: FUN_1001c444
   Address: 1001c444
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1001c444(int param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)((int)param_2 + 1);
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(int *)(param_1 + 0x24),0x1b2,param_2);
  FUN_1001137c(*(int **)(param_1 + 0x24),(uint)bVar1,param_2);
  return;
}


