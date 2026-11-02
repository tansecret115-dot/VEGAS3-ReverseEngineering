/* Module: sfppack1.dll
   Function: FUN_5cdb2180
   Address: 5cdb2180
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdb2180(void *this,undefined4 param_1,void *param_2)

{
  undefined4 *puVar1;
  
  FUN_5cdff82a(this,param_1,param_2,(undefined4 *)&DAT_5ce12a28);
  FUN_5cdb5b00((undefined4 *)((int)this + 0x98));
  puVar1 = (undefined4 *)((int)this + 0x1d0);
  *puVar1 = &PTR_LAB_5ce12bc0;
  *(undefined ***)this = &PTR_LAB_5ce12b58;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5ce12b1c;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5ce12b08;
  *(undefined4 *)((int)this + 0x98) = &PTR_LAB_5ce12ab0;
  *(undefined ***)((int)this + 0x1c8) = &PTR_LAB_5ce12aa0;
  *(undefined ***)((int)this + 0x1cc) = &PTR_LAB_5ce12a80;
  *puVar1 = &PTR_LAB_5ce12a68;
  DAT_5ce23340 = DAT_5ce23340 + 1;
  *(int *)((int)this + 0x1d4) = DAT_5ce23340;
  FUN_5cdb3280((int)puVar1,0);
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  return this;
}


