/* Module: extmondrv.dll
   Function: FUN_0044bca8
   Address: 0044bca8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044bca8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_004808a8) {
      DAT_004808a8 = DAT_004808a8 + -1;
      goto LAB_0044bcbe;
    }
LAB_0044bce6:
    uVar1 = 0;
  }
  else {
LAB_0044bcbe:
    _DAT_004808ac = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_004808b4 = malloc(0x80);
      if (DAT_004808b4 == (undefined4 *)0x0) goto LAB_0044bce6;
      *DAT_004808b4 = 0;
      DAT_004808b0 = DAT_004808b4;
      initterm(&DAT_0045a000,&DAT_0045a004);
      DAT_004808a8 = DAT_004808a8 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_004808b4, puVar2 = DAT_004808b0, DAT_004808b4 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_004808b4;
        }
      }
      free(_Memory);
      DAT_004808b4 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


