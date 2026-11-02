/* Module: sfppack2.dll
   Function: FUN_5ccf96b0
   Address: 5ccf96b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5ccf96b0(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cd3e6aa(this,param_1,param_2,&DAT_5cd53b60);
  FUN_5ccfcee0((undefined4 *)((int)this + 0x98));
  puVar1 = (undefined4 *)((int)this + 0x228);
  *puVar1 = &PTR_LAB_5cd513e8;
  *(undefined ***)this = &PTR_LAB_5cd53c9c;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cd53c60;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cd53c4c;
  *(undefined4 *)((int)this + 0x98) = &PTR_LAB_5cd53bd8;
  *(undefined ***)((int)this + 0x220) = &PTR_LAB_5cd53bc8;
  *(undefined ***)((int)this + 0x224) = &PTR_LAB_5cd53ba8;
  *puVar1 = &PTR_LAB_5cd53b90;
  DAT_5cd67564 = DAT_5cd67564 + 1;
  *(int *)((int)this + 0x22c) = DAT_5cd67564;
  FUN_5ccfa690((int)puVar1,0);
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  return this;
}


