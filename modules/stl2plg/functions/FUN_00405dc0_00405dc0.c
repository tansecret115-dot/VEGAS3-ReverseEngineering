/* Module: stl2plg.dll
   Function: FUN_00405dc0
   Address: 00405dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00405dc0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00401280(this,param_1);
  *(undefined ***)this = &PTR_LAB_004649c8;
  puVar2 = (undefined4 *)((int)this + 0x3b8);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}


