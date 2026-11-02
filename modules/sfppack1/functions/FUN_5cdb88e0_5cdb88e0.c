/* Module: sfppack1.dll
   Function: FUN_5cdb88e0
   Address: 5cdb88e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdb88e0(void *this,undefined4 param_1,void *param_2)

{
  undefined4 *puVar1;
  
  FUN_5cdff82a(this,param_1,param_2,&DAT_5ce132d0);
  FUN_5cdbc6c0((undefined4 *)((int)this + 0x98));
  puVar1 = (undefined4 *)((int)this + 0x400);
  *puVar1 = &PTR_LAB_5ce12bc0;
  *(undefined ***)this = &PTR_LAB_5ce13408;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5ce133cc;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5ce133b8;
  *(undefined4 *)((int)this + 0x98) = &PTR_LAB_5ce13348;
  *(undefined ***)((int)this + 0x3f8) = &PTR_LAB_5ce13338;
  *(undefined ***)((int)this + 0x3fc) = &PTR_LAB_5ce13318;
  *puVar1 = &PTR_LAB_5ce13300;
  DAT_5ce23344 = DAT_5ce23344 + 1;
  *(int *)((int)this + 0x404) = DAT_5ce23344;
  FUN_5cdb99b0((int)puVar1,0);
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x45c) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  return this;
}


