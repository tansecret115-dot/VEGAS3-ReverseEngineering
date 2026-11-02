/* Module: sfxpfx1.dll
   Function: FUN_5c988490
   Address: 5c988490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5c988490(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5c99f050) {
      DAT_5c99f050 = DAT_5c99f050 + -1;
      goto LAB_5c9884a6;
    }
LAB_5c9884ce:
    uVar1 = 0;
  }
  else {
LAB_5c9884a6:
    _DAT_5c99f088 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5c99f090 = malloc(0x80);
      if (DAT_5c99f090 == (undefined4 *)0x0) goto LAB_5c9884ce;
      *DAT_5c99f090 = 0;
      DAT_5c99f08c = DAT_5c99f090;
      initterm(&DAT_5c996000,&DAT_5c996004);
      DAT_5c99f050 = DAT_5c99f050 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5c99f090, puVar2 = DAT_5c99f08c, DAT_5c99f090 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5c99f090;
        }
      }
      free(_Memory);
      DAT_5c99f090 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


