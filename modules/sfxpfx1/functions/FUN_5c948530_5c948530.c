/* Module: sfxpfx1.dll
   Function: FUN_5c948530
   Address: 5c948530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c948530(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5c97a7cc(this,0,param_1,*(undefined4 *)(&DAT_5c98bc58 + param_3 * 8),
               *(undefined4 *)(&DAT_5c98bc5c + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5c98bce0;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5c98bcd0;
  return this;
}


