/* Module: wavplug.dll
   Function: FUN_5f386c90
   Address: 5f386c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f386c90(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined ***)this = &PTR_LAB_5f3ca974;
  *(undefined2 *)((int)this + 8) = 0;
  puVar2 = (undefined4 *)((int)this + 0x230);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x214) = 0xffffffff;
  *(undefined4 *)((int)this + 0x218) = 0xffffffff;
  *(undefined4 *)((int)this + 0x220) = 0;
  return this;
}


