/* Module: tokr3260.dll
   Function: FUN_68058e00
   Address: 68058e00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_68058e00(float param_1,float param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 + param_1 != (float)_DAT_6805b288) {
    if (param_2 <= param_1) {
      uVar2 = 8;
    }
    else {
      uVar2 = 0;
    }
    uVar1 = ftol();
    if ((int)uVar1 < 7) {
      *param_3 = uVar1 | uVar2;
      return;
    }
  }
  *param_3 = 0xf;
  return;
}


