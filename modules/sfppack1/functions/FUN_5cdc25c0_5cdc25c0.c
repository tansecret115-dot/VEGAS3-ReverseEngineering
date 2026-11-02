/* Module: sfppack1.dll
   Function: FUN_5cdc25c0
   Address: 5cdc25c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdc25c0(void *this,undefined4 param_1,void *param_2)

{
  undefined4 *puVar1;
  
  FUN_5ce02202(this,param_1,param_2,&DAT_5ce13860);
  FUN_5cdc4ae0((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x160);
  *puVar1 = &PTR_LAB_5ce12bc0;
  *(undefined ***)((int)this + 0x164) = &PTR_LAB_5ce13a0c;
  *(undefined ***)this = &PTR_LAB_5ce139a0;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5ce13964;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5ce13950;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5ce138fc;
  *(undefined ***)((int)this + 0x158) = &PTR_LAB_5ce138ec;
  *(undefined ***)((int)this + 0x15c) = &PTR_LAB_5ce138cc;
  *puVar1 = &PTR_LAB_5ce138b4;
  *(undefined ***)((int)this + 0x164) = &PTR_LAB_5ce13890;
  DAT_5ce2334c = DAT_5ce2334c + 1;
  *(int *)((int)this + 0x168) = DAT_5ce2334c;
  FUN_5cdc3180((int)puVar1,0);
  return this;
}


