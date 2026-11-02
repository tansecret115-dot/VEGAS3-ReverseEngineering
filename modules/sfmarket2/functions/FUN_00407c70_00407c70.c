/* Module: sfmarket2.dll
   Function: FUN_00407c70
   Address: 00407c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00407c70(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = this;
  }
  FUN_00408b30((int)this + 8);
  *(undefined ***)((int)this + 8) = &PTR_LAB_00495c40;
  *(undefined ***)((int)this + 0x28) = &PTR_LAB_00495c1c;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_00495bf8;
  *(undefined ***)((int)this + 0x30) = &PTR_LAB_00495b80;
  *(undefined ***)((int)this + 0x34) = &PTR_LAB_00495b58;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_00495b40;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_00495b2c;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_00495b1c;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_00495afc;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_00495ab4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00495a28;
  *(undefined4 **)((int)this + 0x54) = param_1;
  *(undefined ***)this = &PTR_LAB_00495a1c;
  InterlockedIncrement(&DAT_004a9c1c);
  return this;
}


