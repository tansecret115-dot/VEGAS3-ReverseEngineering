/* Module: mpgvout.003
   Function: FUN_1001dc9c
   Address: 1001dc9c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1001dc9c(int param_1)

{
  undefined1 *puVar1;
  
  if (*(int *)(param_1 + 0x28) < 2) {
    *(undefined1 **)(param_1 + 0x4dc) = &LAB_1001d2c8;
    *(undefined1 **)(param_1 + 0x4e0) = &LAB_1001d938;
  }
  else {
    puVar1 = &LAB_1001d530;
    if (*(int *)(param_1 + 0x5cc) != 0) {
      puVar1 = &LAB_1001d740;
    }
    *(undefined1 **)(param_1 + 0x4dc) = puVar1;
    *(undefined1 **)(param_1 + 0x4e0) = &LAB_1001db10;
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    *(undefined1 **)(param_1 + 0x4d8) = &LAB_1001cd48;
    return;
  }
  *(code **)(param_1 + 0x4d8) = FUN_1001c7c8;
  return;
}


