/* Module: sfppack3.dll
   Function: FUN_5cc45fb0
   Address: 5cc45fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc45fb0(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cc75d2c(this,param_1,param_2,&DAT_5cc88f58);
  FUN_5cc48d90((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x22b8);
  *puVar1 = &PTR_LAB_5cc87a60;
  *(undefined ***)((int)this + 0x22bc) = &PTR_LAB_5cc87a3c;
  *(undefined ***)this = &PTR_LAB_5cc890b8;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5cc8907c;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc89068;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5cc88ff4;
  *(undefined ***)((int)this + 0x22b0) = &PTR_LAB_5cc88fe4;
  *(undefined ***)((int)this + 0x22b4) = &PTR_LAB_5cc88fc4;
  *puVar1 = &PTR_LAB_5cc88fac;
  *(undefined ***)((int)this + 0x22bc) = &PTR_LAB_5cc88f88;
  DAT_5cc97e34 = DAT_5cc97e34 + 1;
  *(int *)((int)this + 0x22c0) = DAT_5cc97e34;
  FUN_5cc46a30((int)puVar1,0);
  return this;
}


