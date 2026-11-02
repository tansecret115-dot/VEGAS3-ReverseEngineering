/* Module: mpgvout.004
   Function: FUN_1001c028
   Address: 1001c028
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1001c028(int param_1)

{
  if (*(int *)(param_1 + 0x2c4) != 0) {
    (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(int *)(param_1 + 0x24),0x1b5,0);
    FUN_100118c0(*(int **)(param_1 + 0x24),2,4);
    FUN_100118c0(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x2ac),3);
    FUN_100118c0(*(int **)(param_1 + 0x24),1,1);
    FUN_100118c0(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x2b0),8);
    FUN_100118c0(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x2b4),8);
    FUN_100118c0(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x2b8),8);
    FUN_100118c0(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 700) & 0x3fff,0xe);
    FUN_100118c0(*(int **)(param_1 + 0x24),1,1);
    FUN_100118c0(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x2c0) & 0x3fff,0xe);
  }
  return;
}


