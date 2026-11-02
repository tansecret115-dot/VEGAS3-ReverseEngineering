/* Module: encn3260.dll
   Function: FUN_664d9ab0
   Address: 664d9ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_664d9ab0(void *this,uint param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_8;
  
  local_8 = (void *)0x0;
  iVar1 = FUN_664bbdc0((void *)((int)this + 0x24),param_1,&local_8);
  if (iVar1 == 0) {
    pvVar2 = operator_new(4);
    if (pvVar2 == (void *)0x0) {
      return (void *)0x0;
    }
    local_8 = pvVar2;
    puVar3 = FUN_664bbe00((void *)((int)this + 0x24),param_1);
    *puVar3 = pvVar2;
  }
  return local_8;
}


