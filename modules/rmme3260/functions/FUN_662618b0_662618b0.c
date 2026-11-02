/* Module: rmme3260.dll
   Function: FUN_662618b0
   Address: 662618b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662618b0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_662509f0(puVar1);
  }
  *(undefined4 *)((int)this + 0xc) = uVar2;
  pvVar3 = operator_new(0x1c);
  if (pvVar3 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_66252680(pvVar3,10);
  }
  *(undefined4 *)((int)this + 4) = uVar2;
  pvVar3 = operator_new(0x1c);
  if (pvVar3 != (void *)0x0) {
    uVar2 = FUN_66252680(pvVar3,10);
    *(undefined4 *)((int)this + 8) = uVar2;
    return this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}


