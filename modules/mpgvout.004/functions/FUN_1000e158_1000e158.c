/* Module: mpgvout.004
   Function: FUN_1000e158
   Address: 1000e158
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_1000e158(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 unaff_EBP;
  int in_stack_0000002c;
  undefined4 *in_stack_00000030;
  undefined4 *in_stack_00000034;
  undefined4 *in_stack_00000038;
  undefined4 *in_stack_0000003c;
  undefined4 *in_stack_00000040;
  undefined4 *in_stack_00000044;
  int *in_stack_00000048;
  int *in_stack_0000004c;
  undefined4 *in_stack_00000050;
  undefined4 *in_stack_00000054;
  undefined4 *in_stack_00000058;
  undefined4 *in_stack_0000005c;
  undefined4 *in_stack_00000060;
  int *in_stack_00000064;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  bVar1 = false;
  if ((in_stack_0000002c != 0) && (*(int *)(param_3 + 0x590) == 1)) {
    bVar1 = true;
  }
  bVar2 = false;
  if ((in_stack_0000002c != 0) && (*(int *)(param_3 + 0x590) == 2)) {
    bVar2 = true;
  }
  if (bVar1) {
    param_2 = 0xffff;
  }
  if (bVar2) {
    param_1 = 0xffff;
  }
  if (*(int *)(param_3 + 0x590) == 1) {
    *in_stack_0000005c = unaff_EBP;
    *in_stack_00000060 = local_10;
    *in_stack_00000064 = param_2;
  }
  else {
    *in_stack_0000005c = local_14;
    *in_stack_00000060 = local_18;
    *in_stack_00000064 = param_1;
  }
  if (param_1 < param_2) {
    *in_stack_00000048 = param_1;
    *in_stack_00000030 = local_14;
    *in_stack_00000034 = local_18;
    *in_stack_00000050 = 1;
  }
  else {
    *in_stack_00000048 = param_2;
    *in_stack_00000030 = unaff_EBP;
    *in_stack_00000034 = local_10;
    *in_stack_00000050 = 0;
  }
  if (bVar1) {
    param_2 = 0xffff;
  }
  if (bVar2) {
    param_1 = 0xffff;
  }
  if (param_1 < param_2) {
    *in_stack_0000004c = param_1;
    *in_stack_00000038 = local_14;
    *in_stack_0000003c = local_18;
    *in_stack_00000054 = 1;
  }
  else {
    *in_stack_0000004c = param_2;
    *in_stack_00000038 = unaff_EBP;
    *in_stack_0000003c = local_10;
    *in_stack_00000054 = 0;
  }
  if (bVar1) {
    param_2 = 0xffff;
  }
  if (bVar2) {
    param_1 = 0xffff;
  }
  if (param_1 < param_2) {
    *in_stack_0000004c = *in_stack_0000004c + param_1;
    *in_stack_00000040 = local_14;
    *in_stack_00000044 = local_18;
    *in_stack_00000058 = 1;
  }
  else {
    *in_stack_0000004c = *in_stack_0000004c + param_2;
    *in_stack_00000040 = unaff_EBP;
    *in_stack_00000044 = local_10;
    *in_stack_00000058 = 0;
  }
  return;
}


