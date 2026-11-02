/* Module: sfppack1.dll
   Function: FUN_5cdc5fd0
   Address: 5cdc5fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdc5fd0(void *this,undefined4 param_1,void *param_2)

{
  undefined4 *puVar1;
  
  FUN_5ce02202(this,param_1,param_2,&DAT_5ce13c38);
  FUN_5cdcb590((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x350);
  *puVar1 = &PTR_LAB_5ce12bc0;
  *(undefined ***)((int)this + 0x354) = &PTR_LAB_5ce13a0c;
  *(undefined ***)this = &PTR_LAB_5ce13e68;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5ce13e2c;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5ce13e18;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5ce13cd4;
  *(undefined ***)((int)this + 0x348) = &PTR_LAB_5ce13cc4;
  *(undefined ***)((int)this + 0x34c) = &PTR_LAB_5ce13ca4;
  *puVar1 = &PTR_LAB_5ce13c8c;
  *(undefined ***)((int)this + 0x354) = &PTR_LAB_5ce13c68;
  DAT_5ce23350 = DAT_5ce23350 + 1;
  *(int *)((int)this + 0x358) = DAT_5ce23350;
  FUN_5cdc6bb0((int)puVar1,0);
  return this;
}


