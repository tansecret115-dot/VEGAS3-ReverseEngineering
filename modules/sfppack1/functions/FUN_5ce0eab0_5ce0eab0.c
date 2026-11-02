/* Module: sfppack1.dll
   Function: FUN_5ce0eab0
   Address: 5ce0eab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5ce0eab0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5ce2a0d8) {
      DAT_5ce2a0d8 = DAT_5ce2a0d8 + -1;
      goto LAB_5ce0eac6;
    }
LAB_5ce0eaee:
    uVar1 = 0;
  }
  else {
LAB_5ce0eac6:
    _DAT_5ce2a110 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5ce2a118 = malloc(0x80);
      if (DAT_5ce2a118 == (undefined4 *)0x0) goto LAB_5ce0eaee;
      *DAT_5ce2a118 = 0;
      DAT_5ce2a114 = DAT_5ce2a118;
      initterm(&DAT_5ce1f000,&DAT_5ce1f004);
      DAT_5ce2a0d8 = DAT_5ce2a0d8 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5ce2a118, puVar2 = DAT_5ce2a114, DAT_5ce2a118 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5ce2a118;
        }
      }
      free(_Memory);
      DAT_5ce2a118 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


