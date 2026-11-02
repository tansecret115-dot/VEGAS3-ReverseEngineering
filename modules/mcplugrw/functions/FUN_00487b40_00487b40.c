/* Module: mcplugrw.dll
   Function: FUN_00487b40
   Address: 00487b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00487b40(int param_1,int param_2,int param_3,int *param_4)

{
  FUN_0047d7b0(param_3,0,(int)param_4,0,*(int *)(param_1 + 0x109),*(uint *)(param_1 + 0x55));
  FUN_00487ae0(param_4,*(int *)(param_1 + 0x109),*(int *)(param_1 + 0x55),
               *(int *)(param_2 + 0x1c) << 3);
  return;
}


