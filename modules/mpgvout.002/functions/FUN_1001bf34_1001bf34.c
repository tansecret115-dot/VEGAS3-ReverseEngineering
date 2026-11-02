/* Module: mpgvout.002
   Function: FUN_1001bf34
   Address: 1001bf34
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1001bf34(int param_1)

{
  if (*(int *)(param_1 + 0x2c4) != 0) {
    (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(int *)(param_1 + 0x24),0x1b5,0);
    FUN_100117cc(*(int **)(param_1 + 0x24),2,4);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x2ac),3);
    FUN_100117cc(*(int **)(param_1 + 0x24),1,1);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x2b0),8);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x2b4),8);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x2b8),8);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 700) & 0x3fff,0xe);
    FUN_100117cc(*(int **)(param_1 + 0x24),1,1);
    FUN_100117cc(*(int **)(param_1 + 0x24),*(uint *)(param_1 + 0x2c0) & 0x3fff,0xe);
  }
  return;
}


