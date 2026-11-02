/* Module: rmbe3260.dll
   Function: FUN_6602ec10
   Address: 6602ec10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6602ec10(int param_1,int param_2)

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
  FUN_66054620(*(void **)(param_1 + 0xc),param_2,puVar1);
  return;
}


