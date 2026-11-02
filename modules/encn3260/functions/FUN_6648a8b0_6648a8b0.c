/* Module: encn3260.dll
   Function: FUN_6648a8b0
   Address: 6648a8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648a8b0(void *this,undefined4 param_1,uint param_2)

{
  void *this_00;
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 0x13e) == 0) {
    this_00 = operator_new(0x18);
    if (this_00 == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_664db520(this_00,10);
    }
    *(undefined4 *)((int)this + 0x13e) = uVar1;
  }
  puVar2 = FUN_664bbe00(*(void **)((int)this + 0x13e),param_2 & 0xffff);
  *puVar2 = param_1;
  return;
}


