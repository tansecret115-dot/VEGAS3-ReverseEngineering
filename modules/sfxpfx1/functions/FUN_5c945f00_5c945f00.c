/* Module: sfxpfx1.dll
   Function: FUN_5c945f00
   Address: 5c945f00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c945f00(void *this,short *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_5c945830((int)this,(double)(int)*param_1 * _DAT_5c98b9e8,param_4);
    iVar1 = ftol();
    if (iVar1 < -0x8000) {
      iVar1 = -0x8000;
    }
    else if (0x7fff < iVar1) {
      iVar1 = 0x7fff;
    }
    *param_1 = (short)iVar1;
    param_1 = param_1 + param_2;
  }
  return 0;
}


