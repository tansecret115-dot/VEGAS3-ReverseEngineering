/* Module: sfconfigmgr.dll
   Function: FUN_0040dfe0
   Address: 0040dfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040dfe0(void)

{
  undefined4 uVar1;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  int in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined4 *in_stack_00000018;
  
  uStack00000004 = ftol();
  uStack00000008 = 0;
  *in_stack_00000010 = uStack00000004;
  uVar1 = ftol();
  *in_stack_00000014 = uVar1;
  uStack00000004 = *(undefined4 *)(in_stack_0000000c + 0x24);
  uStack00000008 = 0;
  uVar1 = ftol();
  *in_stack_00000018 = uVar1;
  return;
}


