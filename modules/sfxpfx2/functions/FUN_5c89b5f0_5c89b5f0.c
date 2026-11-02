/* Module: sfxpfx2.dll
   Function: FUN_5c89b5f0
   Address: 5c89b5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c89b5f0(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5c8cb6b1(this,param_1,param_2,&DAT_5c8dcea0);
  FUN_5c89d810((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x3b0);
  *puVar1 = &PTR_LAB_5c8dc690;
  *(undefined ***)((int)this + 0x3b4) = &PTR_LAB_5c8dc66c;
  *(undefined ***)this = &PTR_LAB_5c8dcfd0;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5c8dcf94;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c8dcf80;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5c8dcf3c;
  *(undefined ***)((int)this + 0x3a8) = &PTR_LAB_5c8dcf2c;
  *(undefined ***)((int)this + 0x3ac) = &PTR_LAB_5c8dcf0c;
  *puVar1 = &PTR_LAB_5c8dcef4;
  *(undefined ***)((int)this + 0x3b4) = &PTR_LAB_5c8dced0;
  DAT_5c8e8f10 = DAT_5c8e8f10 + 1;
  *(int *)((int)this + 0x3b8) = DAT_5c8e8f10;
  FUN_5c89c1b0((int)puVar1,0);
  return this;
}


