/* Module: mp3rw.dll
   Function: FUN_0048b396
   Address: 0048b396
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048b396(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_004cee28) {
      DAT_004cee28 = DAT_004cee28 + -1;
      goto LAB_0048b3ac;
    }
LAB_0048b3d4:
    uVar1 = 0;
  }
  else {
LAB_0048b3ac:
    _DAT_004cee2c = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_004cee34 = malloc(0x80);
      if (DAT_004cee34 == (undefined4 *)0x0) goto LAB_0048b3d4;
      *DAT_004cee34 = 0;
      DAT_004cee30 = DAT_004cee34;
      initterm(&DAT_004a4000,&DAT_004a4004);
      DAT_004cee28 = DAT_004cee28 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_004cee34, puVar2 = DAT_004cee30, DAT_004cee34 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_004cee34;
        }
      }
      free(_Memory);
      DAT_004cee34 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


