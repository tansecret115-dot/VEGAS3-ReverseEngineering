/* Module: mp3plug.dll
   Function: FUN_5f72a39c
   Address: 5f72a39c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f72a39c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5f75bbc4) {
      DAT_5f75bbc4 = DAT_5f75bbc4 + -1;
      goto LAB_5f72a3b2;
    }
LAB_5f72a3da:
    uVar1 = 0;
  }
  else {
LAB_5f72a3b2:
    _DAT_5f75bc24 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5f75bc2c = malloc(0x80);
      if (DAT_5f75bc2c == (undefined4 *)0x0) goto LAB_5f72a3da;
      *DAT_5f75bc2c = 0;
      DAT_5f75bc28 = DAT_5f75bc2c;
      initterm(&DAT_5f73c000,&DAT_5f73c05c);
      DAT_5f75bbc4 = DAT_5f75bbc4 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5f75bc2c, puVar2 = DAT_5f75bc28, DAT_5f75bc2c != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5f75bc2c;
        }
      }
      free(_Memory);
      DAT_5f75bc2c = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


