/* Module: sftrkfx1.dll
   Function: FUN_5cba1ae0
   Address: 5cba1ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cba1ae0(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cbf3851(this,param_1,param_2,&DAT_5cc03d18);
  FUN_5cba5050((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 800);
  *puVar1 = &PTR_LAB_5cc03f04;
  *(undefined ***)((int)this + 0x324) = &PTR_LAB_5cc03ee0;
  *(undefined ***)this = &PTR_LAB_5cc03e74;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5cc03e38;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc03e24;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5cc03db4;
  *(undefined ***)((int)this + 0x318) = &PTR_LAB_5cc03da4;
  *(undefined ***)((int)this + 0x31c) = &PTR_LAB_5cc03d84;
  *puVar1 = &PTR_LAB_5cc03d6c;
  *(undefined ***)((int)this + 0x324) = &PTR_LAB_5cc03d48;
  DAT_5cc1148c = DAT_5cc1148c + 1;
  *(int *)((int)this + 0x328) = DAT_5cc1148c;
  FUN_5cba2810((int)puVar1,0);
  *(undefined4 *)((int)this + 0x300) = 0;
  return this;
}


