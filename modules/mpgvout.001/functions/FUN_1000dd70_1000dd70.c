/* Module: mpgvout.001
   Function: FUN_1000dd70
   Address: 1000dd70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x1000de2c) */
/* WARNING: Removing unreachable block (ram,0x1000dddc) */
/* WARNING: Removing unreachable block (ram,0x1000de7c) */

void __thiscall FUN_1000dd70(void *this,int param_1)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_stack_00000030;
  undefined4 *in_stack_00000034;
  undefined4 *in_stack_00000038;
  undefined4 *in_stack_0000003c;
  undefined4 *in_stack_00000040;
  undefined4 *in_stack_00000044;
  undefined4 *in_stack_00000048;
  int *in_stack_0000004c;
  undefined4 *in_stack_00000050;
  undefined4 *in_stack_00000054;
  undefined4 *in_stack_00000058;
  undefined4 *in_stack_0000005c;
  undefined4 *in_stack_00000060;
  undefined4 *in_stack_00000064;
  
  if (*(int *)(param_1 + 0x590) == 1) {
    *in_stack_0000005c = this;
    *in_stack_00000060 = unaff_ESI;
  }
  else {
    *in_stack_0000005c = unaff_EBX;
    *in_stack_00000060 = unaff_EDI;
  }
  *in_stack_00000064 = 0xffff;
  *in_stack_00000048 = 0xffff;
  *in_stack_00000030 = this;
  *in_stack_00000034 = unaff_ESI;
  *in_stack_00000050 = 0;
  *in_stack_0000004c = 0xffff;
  *in_stack_00000038 = this;
  *in_stack_0000003c = unaff_ESI;
  *in_stack_00000054 = 0;
  *in_stack_0000004c = *in_stack_0000004c + 0xffff;
  *in_stack_00000040 = this;
  *in_stack_00000044 = unaff_ESI;
  *in_stack_00000058 = 0;
  return;
}


