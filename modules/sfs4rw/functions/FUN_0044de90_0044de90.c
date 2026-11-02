/* Module: sfs4rw.dll
   Function: FUN_0044de90
   Address: 0044de90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0044de90(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x2c);
  *(uint *)((int)this + 0x18) = param_1;
  *(uint *)((int)this + 0x1c) = param_2;
  if ((uVar1 < param_2) || ((uVar1 <= param_2 && (*(uint *)((int)this + 0x28) <= param_1)))) {
    param_2 = uVar1;
    param_1 = *(uint *)((int)this + 0x28);
  }
  *(uint *)((int)this + 0x28) = param_1;
  *(uint *)((int)this + 0x2c) = param_2;
  return;
}


