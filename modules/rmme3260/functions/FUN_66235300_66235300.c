/* Module: rmme3260.dll
   Function: FUN_66235300
   Address: 66235300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66235300(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    operator_delete(*(void **)((int)this + 0x66));
    *(undefined4 *)((int)this + 0x66) = 0;
    return;
  }
  if (*(void **)((int)this + 0x66) == (void *)0x0) {
    pvVar1 = operator_new(0x34);
    *(void **)((int)this + 0x66) = pvVar1;
  }
  puVar3 = *(undefined4 **)((int)this + 0x66);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


