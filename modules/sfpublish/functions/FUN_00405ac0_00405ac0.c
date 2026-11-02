/* Module: sfpublish.dll
   Function: FUN_00405ac0
   Address: 00405ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00405ac0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = this;
  }
  FUN_00406c90((int)this + 8);
  *(undefined ***)((int)this + 8) = &PTR_LAB_00435b04;
  *(undefined ***)((int)this + 0x28) = &PTR_LAB_00435ae0;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_00435abc;
  *(undefined ***)((int)this + 0x30) = &PTR_LAB_00435a44;
  *(undefined ***)((int)this + 0x34) = &PTR_LAB_00435a1c;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_00435a04;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_004359f0;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_004359e0;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_004359c0;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_00435978;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_004358ec;
  *(undefined4 **)((int)this + 0x54) = param_1;
  *(undefined ***)this = &PTR_LAB_004358e0;
  InterlockedIncrement(&DAT_0044176c);
  return this;
}


