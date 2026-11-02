/* Module: rmto3260.dll
   Function: FUN_662fa5f0
   Address: 662fa5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_662fa5f0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x10);
  uVar2 = (param_1 / *(uint *)((int)this + 0x8c)) * *(uint *)((int)this + 0x8c);
  if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


