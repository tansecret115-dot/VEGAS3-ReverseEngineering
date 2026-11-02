/* Module: sfppack3.dll
   Function: FUN_5cc32010
   Address: 5cc32010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc32010(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cc75d2c(this,param_1,param_2,&DAT_5cc87880);
  FUN_5cc347f0((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x4c0);
  *puVar1 = &PTR_LAB_5cc87a60;
  *(undefined ***)((int)this + 0x4c4) = &PTR_LAB_5cc87a3c;
  *(undefined ***)this = &PTR_LAB_5cc879d0;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5cc87994;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc87980;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5cc8791c;
  *(undefined ***)((int)this + 0x4b8) = &PTR_LAB_5cc8790c;
  *(undefined ***)((int)this + 0x4bc) = &PTR_LAB_5cc878ec;
  *puVar1 = &PTR_LAB_5cc878d4;
  *(undefined ***)((int)this + 0x4c4) = &PTR_LAB_5cc878b0;
  DAT_5cc97e20 = DAT_5cc97e20 + 1;
  *(int *)((int)this + 0x4c8) = DAT_5cc97e20;
  FUN_5cc32a70((int)puVar1,0);
  return this;
}


