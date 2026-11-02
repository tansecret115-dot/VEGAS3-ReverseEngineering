/* Module: sfxpfx2.dll
   Function: FUN_5c8cbd1f
   Address: 5c8cbd1f
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5c8cbd1f(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5c8cb322(this,param_1,param_2,param_3,param_4);
  *(int *)((int)this + 0xa8) = param_2;
  *(undefined ***)this = &PTR_FUN_5c8e3358;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5c8e3310;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c8e32f8;
  return this;
}


