/* Module: encn3260.dll
   Function: FUN_664d8940
   Address: 664d8940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664d8940(void *this,char *param_1,char *param_2,char *param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_664d6390(this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_FUN_664e00f8;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  pvVar1 = operator_new(0x104);
  *(void **)((int)this + 0x24) = pvVar1;
  pvVar1 = operator_new(0x104);
  *(void **)((int)this + 0x28) = pvVar1;
  puVar3 = *(undefined4 **)((int)this + 0x24);
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = *(undefined4 **)((int)this + 0x28);
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return this;
}


