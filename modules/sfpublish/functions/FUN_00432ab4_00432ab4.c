/* Module: sfpublish.dll
   Function: FUN_00432ab4
   Address: 00432ab4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00432ab4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_00447144) {
      DAT_00447144 = DAT_00447144 + -1;
      goto LAB_00432aca;
    }
LAB_00432af2:
    uVar1 = 0;
  }
  else {
LAB_00432aca:
    _DAT_0044714c = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_00447158 = malloc(0x80);
      if (DAT_00447158 == (undefined4 *)0x0) goto LAB_00432af2;
      *DAT_00447158 = 0;
      DAT_00447154 = DAT_00447158;
      initterm(&DAT_0043f000,&DAT_0043f008);
      DAT_00447144 = DAT_00447144 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_00447158, puVar2 = DAT_00447154, DAT_00447158 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_00447158;
        }
      }
      free(_Memory);
      DAT_00447158 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


