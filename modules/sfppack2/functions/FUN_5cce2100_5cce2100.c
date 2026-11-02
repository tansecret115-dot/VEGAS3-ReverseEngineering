/* Module: sfppack2.dll
   Function: FUN_5cce2100
   Address: 5cce2100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cce2100(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cd41082(this,param_1,param_2,&DAT_5cd521d0);
  FUN_5cce72a0((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x758);
  *puVar1 = &PTR_LAB_5cd513e8;
  *(undefined ***)((int)this + 0x75c) = &PTR_LAB_5cd52408;
  *(undefined ***)this = &PTR_LAB_5cd5239c;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5cd52360;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cd5234c;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5cd5226c;
  *(undefined ***)((int)this + 0x750) = &PTR_LAB_5cd5225c;
  *(undefined ***)((int)this + 0x754) = &PTR_LAB_5cd5223c;
  *puVar1 = &PTR_LAB_5cd52224;
  *(undefined ***)((int)this + 0x75c) = &PTR_LAB_5cd52200;
  DAT_5cd67558 = DAT_5cd67558 + 1;
  *(int *)((int)this + 0x760) = DAT_5cd67558;
  FUN_5cce2b60((int)puVar1,0);
  return this;
}


