/* Module: rmbe3260.dll
   Function: FUN_6602eba0
   Address: 6602eba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6602eba0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *puVar1 = *(undefined4 *)(param_1 + 0x1c);
  FUN_66054560(*(void **)(param_1 + 0xc),puVar1);
  return;
}


