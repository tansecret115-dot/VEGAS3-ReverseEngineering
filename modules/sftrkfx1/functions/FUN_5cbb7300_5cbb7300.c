/* Module: sftrkfx1.dll
   Function: FUN_5cbb7300
   Address: 5cbb7300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cbb7300(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cbf3851(this,param_1,param_2,&DAT_5cc04960);
  FUN_5cbb8300((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x1b0);
  *puVar1 = &PTR_LAB_5cc03f04;
  *(undefined ***)((int)this + 0x1b4) = &PTR_LAB_5cc03ee0;
  *(undefined ***)this = &PTR_LAB_5cc04a84;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cc04a48;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc04a34;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5cc049fc;
  *(undefined ***)((int)this + 0x1a8) = &PTR_LAB_5cc049ec;
  *(undefined ***)((int)this + 0x1ac) = &PTR_LAB_5cc049cc;
  *puVar1 = &PTR_LAB_5cc049b4;
  *(undefined ***)((int)this + 0x1b4) = &PTR_LAB_5cc04990;
  DAT_5cc114c0 = DAT_5cc114c0 + 1;
  *(int *)((int)this + 0x1b8) = DAT_5cc114c0;
  FUN_5cbb7dd0((int)puVar1,0);
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  return this;
}


