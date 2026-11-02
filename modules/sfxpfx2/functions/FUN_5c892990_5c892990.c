/* Module: sfxpfx2.dll
   Function: FUN_5c892990
   Address: 5c892990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c892990(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5c8cb6b1(this,param_1,param_2,&DAT_5c8dc498);
  FUN_5c895040((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x22b8);
  *puVar1 = &PTR_LAB_5c8dc690;
  *(undefined ***)((int)this + 0x22bc) = &PTR_LAB_5c8dc66c;
  *(undefined ***)this = &PTR_LAB_5c8dc600;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5c8dc5c4;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c8dc5b0;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5c8dc534;
  *(undefined ***)((int)this + 0x22b0) = &PTR_LAB_5c8dc524;
  *(undefined ***)((int)this + 0x22b4) = &PTR_LAB_5c8dc504;
  *puVar1 = &PTR_LAB_5c8dc4ec;
  *(undefined ***)((int)this + 0x22bc) = &PTR_LAB_5c8dc4c8;
  DAT_5c8e8ef0 = DAT_5c8e8ef0 + 1;
  *(int *)((int)this + 0x22c0) = DAT_5c8e8ef0;
  FUN_5c893410((int)puVar1,0);
  return this;
}


