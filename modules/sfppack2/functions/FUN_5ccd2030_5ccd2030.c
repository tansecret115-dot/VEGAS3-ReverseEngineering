/* Module: sfppack2.dll
   Function: FUN_5ccd2030
   Address: 5ccd2030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5ccd2030(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cd3e6aa(this,param_1,param_2,&DAT_5cd511a8);
  FUN_5ccd4bf0((undefined4 *)((int)this + 0x98));
  puVar1 = (undefined4 *)((int)this + 0xb58);
  *puVar1 = &PTR_LAB_5cd513e8;
  *(undefined ***)this = &PTR_LAB_5cd51380;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cd51344;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cd51330;
  *(undefined4 *)((int)this + 0x98) = &PTR_LAB_5cd51240;
  *(undefined ***)((int)this + 0xb50) = &PTR_LAB_5cd51230;
  *(undefined ***)((int)this + 0xb54) = &PTR_LAB_5cd51210;
  *puVar1 = &PTR_LAB_5cd511f8;
  DAT_5cd67550 = DAT_5cd67550 + 1;
  *(int *)((int)this + 0xb5c) = DAT_5cd67550;
  FUN_5ccd30f0((int)puVar1,0);
  *(undefined4 *)((int)this + 0xba0) = 0;
  *(undefined4 *)((int)this + 0xb98) = 0;
  *(undefined4 *)((int)this + 0xbb0) = 0;
  *(undefined4 *)((int)this + 0xba8) = 0;
  *(undefined4 *)((int)this + 0xb8c) = 0;
  *(undefined4 *)((int)this + 0xb90) = 0;
  *(undefined4 *)((int)this + 0xba4) = 0;
  *(undefined4 *)((int)this + 0xb9c) = 0;
  *(undefined4 *)((int)this + 0xbb4) = 0;
  *(undefined4 *)((int)this + 0xbac) = 0;
  return this;
}


