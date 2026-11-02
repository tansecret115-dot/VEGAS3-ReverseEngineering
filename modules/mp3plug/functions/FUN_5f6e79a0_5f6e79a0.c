/* Module: mp3plug.dll
   Function: FUN_5f6e79a0
   Address: 5f6e79a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e79a0(int param_1)

{
  int in_stack_0000002c;
  int *in_stack_00000030;
  uint in_stack_0000003c;
  uint in_stack_0000004c;
  uint in_stack_00000060;
  uint in_stack_00000074;
  uint in_stack_00000088;
  uint in_stack_0000009c;
  uint in_stack_000000ac;
  uint in_stack_000000bc;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    FUN_5f6e62d0(in_stack_00000030,0xfff,0xc);
  }
  else if (param_1 == 2) {
    FUN_5f6e62d0(in_stack_00000030,0xffe,0xc);
  }
  FUN_5f6e62d0(in_stack_00000030,(uint)(param_1 == 0),1);
  FUN_5f6e62d0(in_stack_00000030,1,2);
  FUN_5f6e62d0(in_stack_00000030,(uint)(in_stack_0000002c == 0),1);
  FUN_5f6e62d0(in_stack_00000030,in_stack_0000003c,4);
  FUN_5f6e62d0(in_stack_00000030,in_stack_0000004c,2);
  FUN_5f6e62d0(in_stack_00000030,in_stack_00000060,1);
  FUN_5f6e62d0(in_stack_00000030,in_stack_00000074,1);
  FUN_5f6e62d0(in_stack_00000030,in_stack_00000074,2);
  FUN_5f6e62d0(in_stack_00000030,in_stack_00000088,2);
  FUN_5f6e62d0(in_stack_00000030,in_stack_0000009c,1);
  FUN_5f6e62d0(in_stack_00000030,in_stack_000000ac,1);
  FUN_5f6e62d0(in_stack_00000030,in_stack_000000bc,2);
  if (in_stack_0000002c != 0) {
    FUN_5f6e62d0(in_stack_00000030,0,0x10);
  }
  return;
}


