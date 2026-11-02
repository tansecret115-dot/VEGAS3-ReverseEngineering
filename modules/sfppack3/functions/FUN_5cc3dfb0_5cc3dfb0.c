/* Module: sfppack3.dll
   Function: FUN_5cc3dfb0
   Address: 5cc3dfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc3dfb0(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cc75d2c(this,param_1,param_2,&DAT_5cc886f0);
  FUN_5cc3fd50((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x148);
  *puVar1 = &PTR_LAB_5cc87a60;
  *(undefined ***)((int)this + 0x14c) = &PTR_LAB_5cc87a3c;
  *(undefined ***)this = &PTR_LAB_5cc88810;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5cc887d4;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc887c0;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5cc8878c;
  *(undefined ***)((int)this + 0x140) = &PTR_LAB_5cc8877c;
  *(undefined ***)((int)this + 0x144) = &PTR_LAB_5cc8875c;
  *puVar1 = &PTR_LAB_5cc88744;
  *(undefined ***)((int)this + 0x14c) = &PTR_LAB_5cc88720;
  DAT_5cc97e2c = DAT_5cc97e2c + 1;
  *(int *)((int)this + 0x150) = DAT_5cc97e2c;
  FUN_5cc3ea00((int)puVar1,0);
  return this;
}


