/* Module: sfxpfx2.dll
   Function: FUN_5c8cbb24
   Address: 5c8cbb24
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5c8cbb24(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5c8cb059(this,param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(int *)((int)this + 0xe0) = param_2;
  *(undefined ***)this = &PTR_FUN_5c8e32b8;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5c8e3270;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c8e3258;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_5c8e3230;
  return this;
}


