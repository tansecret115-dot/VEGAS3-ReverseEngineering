/* Module: sfxpfx2.dll
   Function: FUN_5c896c80
   Address: 5c896c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c896c80(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5c8cb6b1(this,param_1,param_2,&DAT_5c8dc9e8);
  FUN_5c898f70((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x318);
  *puVar1 = &PTR_LAB_5c8dc690;
  *(undefined ***)((int)this + 0x31c) = &PTR_LAB_5c8dc66c;
  *(undefined ***)this = &PTR_LAB_5c8dcb20;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5c8dcae4;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c8dcad0;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5c8dca84;
  *(undefined ***)((int)this + 0x310) = &PTR_LAB_5c8dca74;
  *(undefined ***)((int)this + 0x314) = &PTR_LAB_5c8dca54;
  *puVar1 = &PTR_LAB_5c8dca3c;
  *(undefined ***)((int)this + 0x31c) = &PTR_LAB_5c8dca18;
  DAT_5c8e8f00 = DAT_5c8e8f00 + 1;
  *(int *)((int)this + 800) = DAT_5c8e8f00;
  FUN_5c8976f0((int)puVar1,0);
  return this;
}


