/* Module: erv23260.dll
   Function: FUN_637fa420
   Address: 637fa420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_637fa420(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  
  FUN_637fd160(this);
  FUN_637ff920((undefined4 *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x18) = &PTR_LAB_638293ec;
  *(undefined ***)this = &PTR_FUN_638293e0;
  *(undefined4 *)((int)this + 0x5c) = param_1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  iVar1 = FUN_637f2000(0xc);
  *(int *)((int)this + 0x98) = iVar1;
  *param_2 = (-(uint)(iVar1 != 0) & 0xfffffffe) + 2;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  return this;
}


