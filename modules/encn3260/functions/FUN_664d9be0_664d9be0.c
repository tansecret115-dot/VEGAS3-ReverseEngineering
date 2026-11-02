/* Module: encn3260.dll
   Function: FUN_664d9be0
   Address: 664d9be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664d9be0(void *this,uint param_1)

{
  int iVar1;
  void *local_8;
  
  local_8 = (void *)0x0;
  iVar1 = FUN_664bbdc0((void *)((int)this + 0xc),param_1,&local_8);
  if (iVar1 != 0) {
    FUN_664bbe60((void *)((int)this + 0xc),param_1);
    if (local_8 != (void *)0x0) {
      operator_delete(local_8);
    }
  }
  return;
}


