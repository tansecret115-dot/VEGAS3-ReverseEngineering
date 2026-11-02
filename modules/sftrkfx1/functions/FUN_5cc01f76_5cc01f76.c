/* Module: sftrkfx1.dll
   Function: FUN_5cc01f76
   Address: 5cc01f76
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cc01f76(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5cc17db0) {
      DAT_5cc17db0 = DAT_5cc17db0 + -1;
      goto LAB_5cc01f8c;
    }
LAB_5cc01fb4:
    uVar1 = 0;
  }
  else {
LAB_5cc01f8c:
    _DAT_5cc17de8 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5cc17df0 = malloc(0x80);
      if (DAT_5cc17df0 == (undefined4 *)0x0) goto LAB_5cc01fb4;
      *DAT_5cc17df0 = 0;
      DAT_5cc17dec = DAT_5cc17df0;
      initterm(&DAT_5cc0f000,&DAT_5cc0f00c);
      DAT_5cc17db0 = DAT_5cc17db0 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5cc17df0, puVar2 = DAT_5cc17dec, DAT_5cc17df0 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5cc17df0;
        }
      }
      free(_Memory);
      DAT_5cc17df0 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


