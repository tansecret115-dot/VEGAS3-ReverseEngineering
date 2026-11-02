/* Module: sfcdi.dll
   Function: FUN_5bf52f8a
   Address: 5bf52f8a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5bf52f8a(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5bf7b7bc) {
      DAT_5bf7b7bc = DAT_5bf7b7bc + -1;
      goto LAB_5bf52fa0;
    }
LAB_5bf52fc8:
    uVar1 = 0;
  }
  else {
LAB_5bf52fa0:
    _DAT_5bf7b7c0 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5bf7b7c8 = malloc(0x80);
      if (DAT_5bf7b7c8 == (undefined4 *)0x0) goto LAB_5bf52fc8;
      *DAT_5bf7b7c8 = 0;
      DAT_5bf7b7c4 = DAT_5bf7b7c8;
      initterm(&DAT_5bf62000,&DAT_5bf62004);
      DAT_5bf7b7bc = DAT_5bf7b7bc + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5bf7b7c8, puVar2 = DAT_5bf7b7c4, DAT_5bf7b7c8 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5bf7b7c8;
        }
      }
      free(_Memory);
      DAT_5bf7b7c8 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


