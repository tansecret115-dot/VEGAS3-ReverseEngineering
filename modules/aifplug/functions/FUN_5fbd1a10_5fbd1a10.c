/* Module: aifplug.dll
   Function: FUN_5fbd1a10
   Address: 5fbd1a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5fbd1a10(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined ***)this = &PTR_LAB_5fbff3b0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  puVar2 = (undefined4 *)((int)this + 0x220);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x214) = 0xffffffff;
  return this;
}


