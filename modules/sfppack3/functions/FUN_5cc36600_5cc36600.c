/* Module: sfppack3.dll
   Function: FUN_5cc36600
   Address: 5cc36600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc36600(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cc751ba(this,param_1,param_2,&DAT_5cc87df8);
  FUN_5cc39080((undefined4 *)((int)this + 0x98));
  puVar1 = (undefined4 *)((int)this + 0x150);
  *puVar1 = &PTR_LAB_5cc87a60;
  *(undefined ***)this = &PTR_LAB_5cc87f1c;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5cc87ee0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc87ecc;
  *(undefined4 *)((int)this + 0x98) = &PTR_LAB_5cc87e80;
  *(undefined ***)((int)this + 0x148) = &PTR_LAB_5cc87e70;
  *(undefined ***)((int)this + 0x14c) = &PTR_LAB_5cc87e50;
  *puVar1 = &PTR_LAB_5cc87e38;
  DAT_5cc97e24 = DAT_5cc97e24 + 1;
  *(int *)((int)this + 0x154) = DAT_5cc97e24;
  FUN_5cc374d0((int)puVar1,0);
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  return this;
}


