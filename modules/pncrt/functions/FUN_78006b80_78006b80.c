/* Module: pncrt.dll
   Function: FUN_78006b80
   Address: 78006b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_78006b80(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (((uVar1 & 0xf) == 0) || ((uVar1 & 0xf) == 2)) {
    uVar1 = ((int)(param_1[1] << 0x1c) >> 0x1c ^ uVar1) & 0xf ^ uVar1;
    *(uint *)((int)this + 4) = uVar1;
    uVar1 = (param_1[1] ^ uVar1) & 0x10 ^ uVar1;
    *(uint *)((int)this + 4) = uVar1;
    uVar1 = (param_1[1] ^ uVar1) & 0x20 ^ uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 4) = (param_1[1] ^ uVar1) & 0x40 ^ uVar1;
    *(undefined4 *)this = *param_1;
  }
  return;
}


