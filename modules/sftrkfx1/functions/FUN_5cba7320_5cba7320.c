/* Module: sftrkfx1.dll
   Function: FUN_5cba7320
   Address: 5cba7320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cba7320(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cbf3851(this,param_1,param_2,&DAT_5cc04300);
  FUN_5cbb54a0((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x428);
  *puVar1 = &PTR_LAB_5cc03f04;
  *(undefined ***)((int)this + 0x42c) = &PTR_LAB_5cc03ee0;
  *(undefined ***)this = &PTR_LAB_5cc044ec;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cc044b0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc0449c;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5cc0439c;
  *(undefined ***)((int)this + 0x420) = &PTR_LAB_5cc0438c;
  *(undefined ***)((int)this + 0x424) = &PTR_LAB_5cc0436c;
  *puVar1 = &PTR_LAB_5cc04354;
  *(undefined ***)((int)this + 0x42c) = &PTR_LAB_5cc04330;
  DAT_5cc114a8 = DAT_5cc114a8 + 1;
  *(int *)((int)this + 0x430) = DAT_5cc114a8;
  FUN_5cba7e40((int)puVar1,0);
  return this;
}


