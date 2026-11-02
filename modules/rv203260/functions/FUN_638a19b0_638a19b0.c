/* Module: rv203260.dll
   Function: FUN_638a19b0
   Address: 638a19b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638a19b0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x2d2) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x316);
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        free((void *)*puVar1);
        *puVar1 = 0;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x2d2));
  }
  *(undefined4 *)(param_1 + 0x2d2) = 0;
  return 0;
}


