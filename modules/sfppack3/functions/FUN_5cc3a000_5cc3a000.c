/* Module: sfppack3.dll
   Function: FUN_5cc3a000
   Address: 5cc3a000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc3a000(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cc751ba(this,param_1,param_2,&DAT_5cc88268);
  FUN_5cc3ccf0((undefined4 *)((int)this + 0x98));
  puVar1 = (undefined4 *)((int)this + 0x23a8);
  *puVar1 = &PTR_LAB_5cc87a60;
  *(undefined ***)this = &PTR_LAB_5cc88384;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5cc88348;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc88334;
  *(undefined4 *)((int)this + 0x98) = &PTR_LAB_5cc882e0;
  *(undefined ***)((int)this + 0x23a0) = &PTR_LAB_5cc882d0;
  *(undefined ***)((int)this + 0x23a4) = &PTR_LAB_5cc882b0;
  *puVar1 = &PTR_LAB_5cc88298;
  DAT_5cc97e28 = DAT_5cc97e28 + 1;
  *(int *)((int)this + 0x23ac) = DAT_5cc97e28;
  FUN_5cc3aff0((int)puVar1,0);
  *(undefined4 *)((int)this + 0x23f0) = 0;
  *(undefined4 *)((int)this + 0x23e8) = 0;
  *(undefined4 *)((int)this + 0x2400) = 0;
  *(undefined4 *)((int)this + 0x23f8) = 0;
  *(undefined4 *)((int)this + 0x23dc) = 0;
  *(undefined4 *)((int)this + 0x23e0) = 0;
  *(undefined4 *)((int)this + 0x23f4) = 0;
  *(undefined4 *)((int)this + 0x23ec) = 0;
  *(undefined4 *)((int)this + 0x2404) = 0;
  *(undefined4 *)((int)this + 0x23fc) = 0;
  return this;
}


