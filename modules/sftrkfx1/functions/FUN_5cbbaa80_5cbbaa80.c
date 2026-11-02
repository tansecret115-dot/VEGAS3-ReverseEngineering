/* Module: sftrkfx1.dll
   Function: FUN_5cbbaa80
   Address: 5cbbaa80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cbbaa80(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cbf3851(this,param_1,param_2,&DAT_5cc04d50);
  FUN_5cbbcb30((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x188);
  *puVar1 = &PTR_LAB_5cc03f04;
  *(undefined ***)((int)this + 0x18c) = &PTR_LAB_5cc03ee0;
  *(undefined ***)this = &PTR_LAB_5cc04e80;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5cc04e44;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc04e30;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5cc04dec;
  *(undefined ***)((int)this + 0x180) = &PTR_LAB_5cc04ddc;
  *(undefined ***)((int)this + 0x184) = &PTR_LAB_5cc04dbc;
  *puVar1 = &PTR_LAB_5cc04da4;
  *(undefined ***)((int)this + 0x18c) = &PTR_LAB_5cc04d80;
  DAT_5cc114c4 = DAT_5cc114c4 + 1;
  *(int *)((int)this + 400) = DAT_5cc114c4;
  FUN_5cbbb580((int)puVar1,0);
  return this;
}


