/* Module: sfpagepeel.dll
   Function: FUN_00406720
   Address: 00406720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00406720(void *this,undefined4 param_1)

{
  FUN_00409800((int)this);
  *(undefined ***)this = &PTR_LAB_004704fc;
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined ***)((int)this + 8) = &PTR_LAB_004704c0;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_004704b0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_0047049c;
  *(undefined ***)((int)this + 0xbc) = &PTR_LAB_00470468;
  *(undefined ***)((int)this + 0xc0) = &PTR_LAB_00470454;
  *(undefined ***)((int)this + 0xe4) = &PTR_LAB_0047042c;
  *(undefined ***)((int)this + 0xe8) = &PTR_LAB_0047041c;
  *(undefined ***)((int)this + 0xec) = &PTR_LAB_00470400;
  *(undefined ***)((int)this + 0xf0) = &PTR_LAB_004703d4;
  *(undefined ***)((int)this + 0xf4) = &PTR_LAB_004703c0;
  *(undefined ***)((int)this + 0xf8) = &PTR_LAB_00470398;
  *(undefined ***)((int)this + 0xfc) = &PTR_LAB_00470380;
  *(undefined ***)((int)this + 0x100) = &PTR_LAB_0047035c;
  return this;
}


