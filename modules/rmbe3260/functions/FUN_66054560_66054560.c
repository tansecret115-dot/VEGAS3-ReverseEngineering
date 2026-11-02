/* Module: rmbe3260.dll
   Function: FUN_66054560
   Address: 66054560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66054560(void *this,undefined4 param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = operator_new(0xc);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_660576d0((int)pvVar1);
  }
  puVar2[2] = param_1;
  FUN_66057750(*(void **)((int)this + 0x10),puVar2);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  return 1;
}


