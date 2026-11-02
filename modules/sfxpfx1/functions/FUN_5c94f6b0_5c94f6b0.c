/* Module: sfxpfx1.dll
   Function: FUN_5c94f6b0
   Address: 5c94f6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c94f6b0(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5c979d81(this,param_1,param_2,&DAT_5c98c320);
  FUN_5c951910((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x170);
  *puVar1 = &PTR_LAB_5c98b708;
  *(undefined ***)((int)this + 0x174) = &PTR_LAB_5c98b6e4;
  *(undefined ***)this = &PTR_LAB_5c98c458;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5c98c41c;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c98c408;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5c98c3bc;
  *(undefined ***)((int)this + 0x168) = &PTR_LAB_5c98c3ac;
  *(undefined ***)((int)this + 0x16c) = &PTR_LAB_5c98c38c;
  *puVar1 = &PTR_LAB_5c98c374;
  *(undefined ***)((int)this + 0x174) = &PTR_LAB_5c98c350;
  DAT_5c9982c8 = DAT_5c9982c8 + 1;
  *(int *)((int)this + 0x178) = DAT_5c9982c8;
  FUN_5c950120((int)puVar1,0);
  return this;
}


