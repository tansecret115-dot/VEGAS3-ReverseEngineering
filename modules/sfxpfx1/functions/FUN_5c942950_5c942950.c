/* Module: sfxpfx1.dll
   Function: FUN_5c942950
   Address: 5c942950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c942950(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5c979d81(this,param_1,param_2,&DAT_5c98b520);
  FUN_5c944ee0((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x4c8);
  *puVar1 = &PTR_LAB_5c98b708;
  *(undefined ***)((int)this + 0x4cc) = &PTR_LAB_5c98b6e4;
  *(undefined ***)this = &PTR_LAB_5c98b678;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5c98b63c;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c98b628;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5c98b5bc;
  *(undefined ***)((int)this + 0x4c0) = &PTR_LAB_5c98b5ac;
  *(undefined ***)((int)this + 0x4c4) = &PTR_LAB_5c98b58c;
  *puVar1 = &PTR_LAB_5c98b574;
  *(undefined ***)((int)this + 0x4cc) = &PTR_LAB_5c98b550;
  DAT_5c9982b0 = DAT_5c9982b0 + 1;
  *(int *)((int)this + 0x4d0) = DAT_5c9982b0;
  FUN_5c9433b0((int)puVar1,0);
  return this;
}


