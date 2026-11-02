/* Module: sfppack3.dll
   Function: FUN_5cc41560
   Address: 5cc41560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc41560(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cc75d2c(this,param_1,param_2,&DAT_5cc88a40);
  FUN_5cc44cc0((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x3910);
  *puVar1 = &PTR_LAB_5cc87a60;
  *(undefined ***)((int)this + 0x3914) = &PTR_LAB_5cc87a3c;
  *(undefined ***)this = &PTR_LAB_5cc88bb0;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5cc88b74;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc88b60;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5cc88adc;
  *(undefined ***)((int)this + 0x3908) = &PTR_LAB_5cc88acc;
  *(undefined ***)((int)this + 0x390c) = &PTR_LAB_5cc88aac;
  *puVar1 = &PTR_LAB_5cc88a94;
  *(undefined ***)((int)this + 0x3914) = &PTR_LAB_5cc88a70;
  DAT_5cc97e30 = DAT_5cc97e30 + 1;
  *(int *)((int)this + 0x3918) = DAT_5cc97e30;
  FUN_5cc42050((int)puVar1,0);
  return this;
}


