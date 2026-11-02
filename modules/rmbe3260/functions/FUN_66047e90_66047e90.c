/* Module: rmbe3260.dll
   Function: FUN_66047e90
   Address: 66047e90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_66047e90(void *this,uint param_1)

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


