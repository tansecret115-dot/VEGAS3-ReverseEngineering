/* Module: sdpp3260.dll
   Function: FUN_100029c0
   Address: 100029c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_100029c0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_10002640(puVar1);
    *(undefined4 *)((int)this + 4) = uVar2;
    return this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}


