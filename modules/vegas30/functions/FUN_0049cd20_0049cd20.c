/* Module: vegas30.exe
   Function: FUN_0049cd20
   Address: 0049cd20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049cd20(int param_1)

{
  int in_stack_00000014;
  
  FUN_00454f40(param_1);
  if (in_stack_00000014 != 0) {
    FUN_00453e90(param_1);
    return;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffbfff;
  FUN_00453340(param_1,*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb74),
               *(undefined4 *)(param_1 + 0xb78),*(undefined4 *)(param_1 + 0xb7c),0x61);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff7fff;
  return;
}


