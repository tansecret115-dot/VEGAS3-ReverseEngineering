/* Module: mpgvout.004
   Function: FUN_1001c6b4
   Address: 1001c6b4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1001c6b4(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(int *)(param_1 + 0x24),0x1b8,0);
  uVar1 = FUN_1001c734(param_1,param_2 + *(int *)(param_1 + 0x44));
  FUN_100118c0(*(int **)(param_1 + 0x24),uVar1,0x19);
  FUN_100118c0(*(int **)(param_1 + 0x24),param_3,1);
  FUN_100118c0(*(int **)(param_1 + 0x24),0,1);
  *(byte *)(param_1 + 0x5ec) = *(byte *)(param_1 + 0x5ec) | 2;
  return;
}


