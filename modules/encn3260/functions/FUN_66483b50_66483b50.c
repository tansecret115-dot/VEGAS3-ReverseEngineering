/* Module: encn3260.dll
   Function: FUN_66483b50
   Address: 66483b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66483b50(int param_1)

{
  LONG LVar1;
  undefined4 *puVar2;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 0x24));
  if (0 < LVar1) {
    return *(undefined4 *)(param_1 + 0x24);
  }
  puVar2 = (undefined4 *)(param_1 + -0x30);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_66483de0(puVar2);
    operator_delete(puVar2);
  }
  return 0;
}


