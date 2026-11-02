/* Module: rmbe3260.dll
   Function: FUN_66047d60
   Address: 66047d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_66047d60(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)this + 8);
  uVar2 = ftol();
  uVar1 = *(uint *)((int)this + 0x10);
  uVar4 = (uVar2 / uVar4) * uVar4;
  if (uVar1 <= uVar4 && uVar4 - uVar1 != 0) {
    uVar4 = uVar1;
  }
  uVar3 = ftol();
  *param_3 = uVar3;
  return uVar4;
}


