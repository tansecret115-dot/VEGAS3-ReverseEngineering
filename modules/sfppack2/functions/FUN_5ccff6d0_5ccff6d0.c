/* Module: sfppack2.dll
   Function: FUN_5ccff6d0
   Address: 5ccff6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5ccff6d0(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cd3e6aa(this,param_1,param_2,&DAT_5cd54050);
  FUN_5cd01d90((undefined4 *)((int)this + 0x98));
  puVar1 = (undefined4 *)((int)this + 0x200);
  *puVar1 = &PTR_LAB_5cd513e8;
  *(undefined ***)this = &PTR_LAB_5cd5416c;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5cd54130;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cd5411c;
  *(undefined4 *)((int)this + 0x98) = &PTR_LAB_5cd540d8;
  *(undefined ***)((int)this + 0x1f8) = &PTR_LAB_5cd540c8;
  *(undefined ***)((int)this + 0x1fc) = &PTR_LAB_5cd540a8;
  *puVar1 = &PTR_LAB_5cd54090;
  DAT_5cd67568 = DAT_5cd67568 + 1;
  *(int *)((int)this + 0x204) = DAT_5cd67568;
  FUN_5cd006a0((int)puVar1,0);
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  return this;
}


