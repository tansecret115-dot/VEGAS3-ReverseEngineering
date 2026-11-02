/* Module: sfxpfx2.dll
   Function: FUN_5c89f160
   Address: 5c89f160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c89f160(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5c8cb6b1(this,param_1,param_2,&DAT_5c8dd228);
  FUN_5c8a2460((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x5e0);
  *puVar1 = &PTR_LAB_5c8dc690;
  *(undefined ***)((int)this + 0x5e4) = &PTR_LAB_5c8dc66c;
  *(undefined ***)this = &PTR_LAB_5c8dd3a0;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5c8dd364;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c8dd350;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5c8dd2c4;
  *(undefined ***)((int)this + 0x5d8) = &PTR_LAB_5c8dd2b4;
  *(undefined ***)((int)this + 0x5dc) = &PTR_LAB_5c8dd294;
  *puVar1 = &PTR_LAB_5c8dd27c;
  *(undefined ***)((int)this + 0x5e4) = &PTR_LAB_5c8dd258;
  DAT_5c8e8f20 = DAT_5c8e8f20 + 1;
  *(int *)((int)this + 0x5e8) = DAT_5c8e8f20;
  FUN_5c89fbc0((int)puVar1,0);
  return this;
}


