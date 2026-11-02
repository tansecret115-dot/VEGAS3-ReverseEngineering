/* Module: pncrt.dll
   Function: FUN_78006fc0
   Address: 78006fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_78006fc0(void *this,int param_1)

{
  uint uVar1;
  
  FUN_78006e00(this);
  *(undefined ***)this = &PTR_LAB_780369c8;
  if ((param_1 != 0) && ((uVar1 = *(uint *)(param_1 + 4) & 0xf, uVar1 == 1 || (uVar1 == 3)))) {
    param_1 = 0;
  }
  *(int *)((int)this + 8) = param_1;
  return this;
}


