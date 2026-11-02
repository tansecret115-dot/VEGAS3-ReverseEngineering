/* Module: mp3plug.dll
   Function: FUN_5f6e1f60
   Address: 5f6e1f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f6e1f60(uint param_1,int param_2)

{
  int in_EAX;
  uint uVar1;
  undefined4 in_stack_00000010;
  
  if (in_EAX == 0) {
    FUN_5f6f89f0(in_stack_00000010,param_1,9);
    if (param_2 == 3) {
      uVar1 = 5;
    }
    else {
      uVar1 = 3;
    }
    FUN_5f6f89f0(in_stack_00000010,0,uVar1);
    return;
  }
  if ((in_EAX == 1) || (in_EAX == 2)) {
    FUN_5f6f89f0(in_stack_00000010,param_1,8);
    if (param_2 == 3) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    FUN_5f6f89f0(in_stack_00000010,0,uVar1);
  }
  return;
}


