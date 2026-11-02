/* Module: pncrt.dll
   Function: FUN_780061f0
   Address: 780061f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_780061f0(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = ((int)(param_1[1] << 0x1c) >> 0x1c ^ *(uint *)((int)this + 4)) & 0xf ^
          *(uint *)((int)this + 4);
  *(uint *)((int)this + 4) = uVar1;
  uVar1 = (param_1[1] ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)((int)this + 4) = uVar1;
  uVar1 = (param_1[1] ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)((int)this + 4) = (param_1[1] ^ uVar1) & 0x40 ^ uVar1;
  *(undefined4 *)this = *param_1;
  return;
}


