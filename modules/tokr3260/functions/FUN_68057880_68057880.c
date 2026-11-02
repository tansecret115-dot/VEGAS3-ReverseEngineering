/* Module: tokr3260.dll
   Function: FUN_68057880
   Address: 68057880
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_68057880(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000030;
  int *in_stack_00000034;
  
  piVar2 = in_stack_00000034;
  FUN_68058ad0(in_stack_0000001c,in_stack_00000030,in_stack_00000034,(uint *)&stack0x00000034);
  iVar1 = *(int *)(in_stack_00000024 + (int)in_stack_00000034 * 4);
  if (-1 < iVar1) {
    *piVar2 = *piVar2 + (*(int *)(in_stack_00000020 + 4 + iVar1 * 8) - in_stack_0000001c);
  }
  return;
}


