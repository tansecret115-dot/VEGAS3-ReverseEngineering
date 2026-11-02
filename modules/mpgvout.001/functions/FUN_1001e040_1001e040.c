/* Module: mpgvout.001
   Function: FUN_1001e040
   Address: 1001e040
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1001e040(int param_1)

{
  undefined1 *puVar1;
  
  if (*(int *)(param_1 + 0x28) < 2) {
    *(undefined1 **)(param_1 + 0x4dc) = &LAB_1001d640;
    *(undefined1 **)(param_1 + 0x4e0) = &LAB_1001dcc8;
  }
  else {
    puVar1 = &LAB_1001d8b8;
    if (*(int *)(param_1 + 0x5cc) != 0) {
      puVar1 = &LAB_1001dacc;
    }
    *(undefined1 **)(param_1 + 0x4dc) = puVar1;
    *(undefined1 **)(param_1 + 0x4e0) = &LAB_1001deac;
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    *(undefined1 **)(param_1 + 0x4d8) = &LAB_1001d0c0;
    return;
  }
  *(undefined1 **)(param_1 + 0x4d8) = &LAB_1001cb40;
  return;
}


