/* Module: encn3260.dll
   Function: FUN_6648bbf0
   Address: 6648bbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648bbf0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  (**(code **)(**(int **)((int)this + 0x6e) + 4))();
  puVar1 = operator_new(0x30);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_664ba900(puVar1 + 1);
    FUN_664db520(puVar1 + 6,10);
  }
  *puVar1 = param_1;
  FUN_664baab0((void *)((int)this + 0x40),puVar1);
  (**(code **)(**(int **)((int)this + 0x6e) + 8))();
  return 0;
}


