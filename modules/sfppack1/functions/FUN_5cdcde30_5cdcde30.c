/* Module: sfppack1.dll
   Function: FUN_5cdcde30
   Address: 5cdcde30
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdcde30(void *this,undefined4 param_1,void *param_2)

{
  undefined4 *puVar1;
  
  FUN_5ce02202(this,param_1,param_2,&DAT_5ce144a8);
  FUN_5cdd0e20((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x558);
  *puVar1 = &PTR_LAB_5ce12bc0;
  *(undefined ***)((int)this + 0x55c) = &PTR_LAB_5ce13a0c;
  *(undefined ***)this = &PTR_LAB_5ce14618;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5ce145dc;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5ce145c8;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5ce14544;
  *(undefined ***)((int)this + 0x550) = &PTR_LAB_5ce14534;
  *(undefined ***)((int)this + 0x554) = &PTR_LAB_5ce14514;
  *puVar1 = &PTR_LAB_5ce144fc;
  *(undefined ***)((int)this + 0x55c) = &PTR_LAB_5ce144d8;
  DAT_5ce23358 = DAT_5ce23358 + 1;
  *(int *)((int)this + 0x560) = DAT_5ce23358;
  FUN_5cdce9f0((int)puVar1,0);
  return this;
}


