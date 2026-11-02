/* Module: mpgvout.004
   Function: FUN_1001e1f8
   Address: 1001e1f8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1001e1f8(int param_1)

{
  undefined1 *puVar1;
  
  if (*(int *)(param_1 + 0x28) < 2) {
    *(undefined1 **)(param_1 + 0x4dc) = &LAB_1001d824;
    *(undefined1 **)(param_1 + 0x4e0) = &LAB_1001de8c;
  }
  else {
    puVar1 = &LAB_1001da84;
    if (*(int *)(param_1 + 0x5cc) != 0) {
      puVar1 = &LAB_1001dc94;
    }
    *(undefined1 **)(param_1 + 0x4e0) = &LAB_1001e068;
    *(undefined1 **)(param_1 + 0x4dc) = puVar1;
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    *(undefined1 **)(param_1 + 0x4d8) = &LAB_1001d2dc;
    return;
  }
  *(undefined1 **)(param_1 + 0x4d8) = &LAB_1001cd94;
  return;
}


