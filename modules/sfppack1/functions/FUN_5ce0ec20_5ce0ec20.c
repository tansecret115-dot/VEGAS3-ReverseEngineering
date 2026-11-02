/* Module: sfppack1.dll
   Function: FUN_5ce0ec20
   Address: 5ce0ec20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Unable to track spacebase fully for stack */

void FUN_5ce0ec20(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


