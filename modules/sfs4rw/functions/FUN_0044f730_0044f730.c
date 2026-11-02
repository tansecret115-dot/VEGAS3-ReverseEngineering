/* Module: sfs4rw.dll
   Function: FUN_0044f730
   Address: 0044f730
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f730(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_retaddr;
  int in_stack_00000014;
  
  puVar1 = (undefined4 *)
           (**(code **)(in_stack_00000014 + 0x20))(*(undefined4 *)(in_stack_00000014 + 0x28));
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 4) = 1;
    *(undefined1 *)((int)puVar1 + 0x11) = 0x1a;
    *puVar1 = 0;
    *(undefined4 *)((int)puVar1 + 0x12) = unaff_retaddr;
    *(undefined4 *)((int)puVar1 + 0x16) = param_1;
  }
  return;
}


