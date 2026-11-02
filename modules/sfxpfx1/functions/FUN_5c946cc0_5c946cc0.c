/* Module: sfxpfx1.dll
   Function: FUN_5c946cc0
   Address: 5c946cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c946cc0(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5c979d81(this,param_1,param_2,&DAT_5c98ba70);
  FUN_5c949720((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x550);
  *puVar1 = &PTR_LAB_5c98b708;
  *(undefined ***)((int)this + 0x554) = &PTR_LAB_5c98b6e4;
  *(undefined ***)this = &PTR_LAB_5c98bbe8;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5c98bbac;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c98bb98;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5c98bb0c;
  *(undefined ***)((int)this + 0x548) = &PTR_LAB_5c98bafc;
  *(undefined ***)((int)this + 0x54c) = &PTR_LAB_5c98badc;
  *puVar1 = &PTR_LAB_5c98bac4;
  *(undefined ***)((int)this + 0x554) = &PTR_LAB_5c98baa0;
  DAT_5c9982b4 = DAT_5c9982b4 + 1;
  *(int *)((int)this + 0x558) = DAT_5c9982b4;
  FUN_5c947880((int)puVar1,0);
  return this;
}


