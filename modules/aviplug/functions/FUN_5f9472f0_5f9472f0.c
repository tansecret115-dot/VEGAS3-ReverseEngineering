/* Module: aviplug.dll
   Function: FUN_5f9472f0
   Address: 5f9472f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f9473dd) */
/* WARNING: Removing unreachable block (ram,0x5f9473e7) */
/* WARNING: Removing unreachable block (ram,0x5f94740d) */
/* WARNING: Removing unreachable block (ram,0x5f947417) */

undefined4 * __thiscall FUN_5f9472f0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_5f943660(this,param_1);
  *(undefined ***)((int)this + 0x198) = &PTR_LAB_5f9d805c;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined ***)this = &PTR_FUN_5f9d7fdc;
  *(undefined ***)((int)this + 0x198) = &PTR_LAB_5f9d7f94;
  puVar2 = (undefined4 *)((int)this + 0x24c);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x1a8);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x1a8) = 0x20;
  *(uint *)((int)this + 0x1ac) = *(uint *)((int)this + 0x1ac) & 0xfffffffe;
  puVar2 = (undefined4 *)((int)this + 0x1d0);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x1d0) = 0x20;
  *(uint *)((int)this + 0x1d4) = *(uint *)((int)this + 0x1d4) & 0xfffffffe;
  return this;
}


