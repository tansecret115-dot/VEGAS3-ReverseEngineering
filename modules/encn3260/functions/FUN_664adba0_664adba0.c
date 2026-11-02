/* Module: encn3260.dll
   Function: FUN_664adba0
   Address: 664adba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664adba0(int param_1)

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
  FUN_664d3d90(*(void **)(param_1 + 0xc),puVar1);
  return;
}


