/* Module: sfppack2.dll
   Function: FUN_5ccdc570
   Address: 5ccdc570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5ccdc570(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cd3e6aa(this,param_1,param_2,&DAT_5cd51d48);
  FUN_5ccdf9d0((undefined4 *)((int)this + 0x98));
  puVar1 = (undefined4 *)((int)this + 0x1f8);
  *puVar1 = &PTR_LAB_5cd513e8;
  *(undefined ***)this = &PTR_LAB_5cd51e6c;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5cd51e30;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cd51e1c;
  *(undefined4 *)((int)this + 0x98) = &PTR_LAB_5cd51dc0;
  *(undefined ***)((int)this + 0x1f0) = &PTR_LAB_5cd51db0;
  *(undefined ***)((int)this + 500) = &PTR_LAB_5cd51d90;
  *puVar1 = &PTR_LAB_5cd51d78;
  DAT_5cd67554 = DAT_5cd67554 + 1;
  *(int *)((int)this + 0x1fc) = DAT_5cd67554;
  FUN_5ccdd620((int)puVar1,0);
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  return this;
}


