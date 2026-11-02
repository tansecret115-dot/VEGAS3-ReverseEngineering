/* Module: mpgvout.002
   Function: FUN_1001e104
   Address: 1001e104
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1001e104(int param_1)

{
  undefined1 *puVar1;
  
  if (*(int *)(param_1 + 0x28) < 2) {
    *(undefined1 **)(param_1 + 0x4dc) = &LAB_1001d730;
    *(undefined1 **)(param_1 + 0x4e0) = &LAB_1001dd98;
  }
  else {
    puVar1 = &LAB_1001d990;
    if (*(int *)(param_1 + 0x5cc) != 0) {
      puVar1 = &LAB_1001dba0;
    }
    *(undefined1 **)(param_1 + 0x4e0) = &LAB_1001df74;
    *(undefined1 **)(param_1 + 0x4dc) = puVar1;
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    *(undefined1 **)(param_1 + 0x4d8) = &LAB_1001d1e8;
    return;
  }
  *(undefined1 **)(param_1 + 0x4d8) = &LAB_1001cca0;
  return;
}


