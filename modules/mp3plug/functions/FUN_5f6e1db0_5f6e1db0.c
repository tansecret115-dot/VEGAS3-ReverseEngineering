/* Module: mp3plug.dll
   Function: FUN_5f6e1db0
   Address: 5f6e1db0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f6e1db0(uint param_1,int param_2)

{
  int in_EAX;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint in_stack_00000024;
  uint in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  if ((in_EAX == 0) || (in_EAX == 1)) {
    FUN_5f6f89f0(in_stack_0000002c,0xfff,0xc);
  }
  else if (in_EAX == 2) {
    FUN_5f6f89f0(in_stack_0000002c,0xffe,0xc);
  }
  FUN_5f6f89f0(in_stack_0000002c,(uint)(in_EAX == 0),1);
  FUN_5f6f89f0(in_stack_0000002c,1,2);
  FUN_5f6f89f0(in_stack_0000002c,(uint)(param_2 == 0),1);
  FUN_5f6f89f0(in_stack_0000002c,param_1,4);
  FUN_5f6f89f0(in_stack_0000002c,in_stack_00000010,2);
  FUN_5f6f89f0(in_stack_0000002c,in_stack_00000018,1);
  FUN_5f6f89f0(in_stack_0000002c,in_stack_00000020,1);
  FUN_5f6f89f0(in_stack_0000002c,in_stack_00000014,2);
  FUN_5f6f89f0(in_stack_0000002c,in_stack_0000001c,2);
  FUN_5f6f89f0(in_stack_0000002c,in_stack_00000024,1);
  FUN_5f6f89f0(in_stack_0000002c,in_stack_00000028,1);
  FUN_5f6f89f0(in_stack_0000002c,0,2);
  if (param_2 != 0) {
    FUN_5f6f89f0(in_stack_0000002c,0,0x10);
  }
  return;
}


