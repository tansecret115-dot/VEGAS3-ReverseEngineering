/* Module: erv23260.dll
   Function: FUN_63812500
   Address: 63812500
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_63812500(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = 0xf;
  if (param_1 % uVar1 == 0) {
    uVar2 = 0xe;
  }
  if ((param_1 + 1) % uVar1 == 0) {
    uVar2 = uVar2 & 0xfd;
  }
  if (param_1 < uVar1) {
    uVar2 = uVar2 & 0xfb;
  }
  if (*(int *)((int)this + 0x18) * uVar1 <= param_1 + uVar1) {
    uVar2 = uVar2 & 0xf7;
  }
  return uVar2 << 4 | uVar2;
}


