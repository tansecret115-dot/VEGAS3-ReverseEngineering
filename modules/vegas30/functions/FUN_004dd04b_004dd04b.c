/* Module: vegas30.exe
   Function: FUN_004dd04b
   Address: 004dd04b
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dd04b(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_EAX;
  undefined8 uVar1;
  undefined8 uVar2;
  int unaff_retaddr;
  int in_stack_00000020;
  
  uVar1 = 0;
  uVar2 = 0xffffffffffffffff;
  FUN_004582a0(in_EAX,&stack0x00000014,&param_1);
  if (param_1 != 0 || param_2 != 0) {
    param_4 = 0;
    param_3 = *(undefined4 *)(in_stack_00000020 + 0xdac);
    uVar1 = ftol();
    uVar2 = ftol();
  }
  FUN_00405170(unaff_retaddr + 0x170,uVar1,uVar2,0);
  return;
}


