/* Module: sfppack2.dll
   Function: FUN_5cce9460
   Address: 5cce9460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cce9460(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_5cd3e6aa(this,param_1,param_2,&DAT_5cd52bf0);
  FUN_5ccf2560((undefined4 *)((int)this + 0x98));
  puVar1 = (undefined4 *)((int)this + 0x570);
  *puVar1 = &PTR_LAB_5cd513e8;
  *(undefined ***)this = &PTR_LAB_5cd52e8c;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5cd52e50;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cd52e3c;
  *(undefined4 *)((int)this + 0x98) = &PTR_LAB_5cd52c78;
  *(undefined ***)((int)this + 0x568) = &PTR_LAB_5cd52c68;
  *(undefined ***)((int)this + 0x56c) = &PTR_LAB_5cd52c48;
  *puVar1 = &PTR_LAB_5cd52c30;
  DAT_5cd67560 = DAT_5cd67560 + 1;
  *(int *)((int)this + 0x574) = DAT_5cd67560;
  FUN_5ccea4c0((int)puVar1,0);
  *(undefined4 *)((int)this + 0x5b8) = 0;
  *(undefined4 *)((int)this + 0x5b0) = 0;
  *(undefined4 *)((int)this + 0x5c8) = 0;
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5a4) = 0;
  *(undefined4 *)((int)this + 0x5a8) = 0;
  *(undefined4 *)((int)this + 0x5bc) = 0;
  *(undefined4 *)((int)this + 0x5b4) = 0;
  *(undefined4 *)((int)this + 0x5cc) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0;
  *(undefined4 *)((int)this + 0x550) = 0;
  return this;
}


