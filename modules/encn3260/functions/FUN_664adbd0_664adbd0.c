/* Module: encn3260.dll
   Function: FUN_664adbd0
   Address: 664adbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664adbd0(int param_1,undefined4 param_2)

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
  FUN_664d3dd0(*(void **)(param_1 + 0xc),param_2,puVar1);
  return;
}


