/* Module: rmme3260.dll
   Function: FUN_662633a0
   Address: 662633a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662633a0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_1;
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_662509f0(puVar1);
    *(undefined4 *)this = uVar2;
    return this;
  }
  *(undefined4 *)this = 0;
  return this;
}


