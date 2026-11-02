/* Module: sfxpfx1.dll
   Function: FUN_5c94c250
   Address: 5c94c250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c94c250(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5c979d81(this,param_1,param_2,&DAT_5c98bf68);
  FUN_5c94e4a0((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x20b8);
  *puVar1 = &PTR_LAB_5c98b708;
  *(undefined ***)((int)this + 0x20bc) = &PTR_LAB_5c98b6e4;
  *(undefined ***)this = &PTR_LAB_5c98c0a0;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5c98c064;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c98c050;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5c98c004;
  *(undefined ***)((int)this + 0x20b0) = &PTR_LAB_5c98bff4;
  *(undefined ***)((int)this + 0x20b4) = &PTR_LAB_5c98bfd4;
  *puVar1 = &PTR_LAB_5c98bfbc;
  *(undefined ***)((int)this + 0x20bc) = &PTR_LAB_5c98bf98;
  DAT_5c9982c4 = DAT_5c9982c4 + 1;
  *(int *)((int)this + 0x20c0) = DAT_5c9982c4;
  FUN_5c94ccc0((int)puVar1,0);
  return this;
}


