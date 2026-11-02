/* Module: tokr3260.dll
   Function: FUN_68053830
   Address: 68053830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_68053830(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (DAT_6805f050 != 0) {
      free((void *)DAT_6805f050);
      DAT_6805f050 = 0;
    }
    return (float10)_DAT_6805b080;
  }
  if (DAT_6805f050 == 0) {
    DAT_6805f050 = (int)calloc(0x40,4);
    if ((void *)DAT_6805f050 == (void *)0x0) goto LAB_680538ad;
    iVar1 = 0;
    do {
      *(undefined4 *)(DAT_6805f050 + iVar1) = *(undefined4 *)((int)&DAT_6805c090 + iVar1);
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x100);
  }
  if ((-1 < param_1) && (param_1 < 0x40)) {
    return (float10)*(float *)(DAT_6805f050 + param_1 * 4);
  }
LAB_680538ad:
  return (float10)_DAT_6805b084;
}


