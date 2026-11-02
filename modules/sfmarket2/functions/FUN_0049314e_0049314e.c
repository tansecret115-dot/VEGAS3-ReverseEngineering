/* Module: sfmarket2.dll
   Function: FUN_0049314e
   Address: 0049314e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0049314e(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_004d0430) {
      DAT_004d0430 = DAT_004d0430 + -1;
      goto LAB_00493164;
    }
LAB_0049318c:
    uVar1 = 0;
  }
  else {
LAB_00493164:
    _DAT_004d0438 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_004d0444 = malloc(0x80);
      if (DAT_004d0444 == (undefined4 *)0x0) goto LAB_0049318c;
      *DAT_004d0444 = 0;
      DAT_004d0440 = DAT_004d0444;
      initterm(&DAT_004a7000,&DAT_004a7008);
      DAT_004d0430 = DAT_004d0430 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_004d0444, puVar2 = DAT_004d0440, DAT_004d0444 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_004d0444;
        }
      }
      free(_Memory);
      DAT_004d0444 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


