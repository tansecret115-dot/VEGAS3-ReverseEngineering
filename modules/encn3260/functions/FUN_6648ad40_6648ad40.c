/* Module: encn3260.dll
   Function: FUN_6648ad40
   Address: 6648ad40
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_6648ad40(void)

{
  undefined4 *puVar1;
  
  if (DAT_664f05c0 == (int *)0x0) {
    puVar1 = operator_new(0x24);
    if (puVar1 != (undefined4 *)0x0) {
      DAT_664f05c0 = FUN_6648abb0(puVar1);
      (**(code **)(*DAT_664f05c0 + 4))(DAT_664f05c0);
      return DAT_664f05c0;
    }
    DAT_664f05c0 = (int *)0x0;
  }
  (**(code **)(*DAT_664f05c0 + 4))(DAT_664f05c0);
  return DAT_664f05c0;
}


