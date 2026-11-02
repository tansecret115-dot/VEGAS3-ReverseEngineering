/* Module: sfnetmedia.dll
   Function: FUN_00405bb0
   Address: 00405bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00405bb0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = this;
  }
  FUN_00406a70((int)this + 8);
  *(undefined ***)((int)this + 8) = &PTR_LAB_0043599c;
  *(undefined ***)((int)this + 0x28) = &PTR_LAB_00435978;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_00435954;
  *(undefined ***)((int)this + 0x30) = &PTR_LAB_004358dc;
  *(undefined ***)((int)this + 0x34) = &PTR_LAB_004358b4;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_0043589c;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_00435888;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_00435878;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_00435858;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_00435810;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00435784;
  *(undefined4 **)((int)this + 0x54) = param_1;
  *(undefined ***)this = &PTR_LAB_00435778;
  InterlockedIncrement(&DAT_0044184c);
  return this;
}


