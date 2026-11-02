/* Module: sfpagepeel.dll
   Function: FUN_0046d49c
   Address: 0046d49c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0046d49c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_004a41d8) {
      DAT_004a41d8 = DAT_004a41d8 + -1;
      goto LAB_0046d4b2;
    }
LAB_0046d4da:
    uVar1 = 0;
  }
  else {
LAB_0046d4b2:
    _DAT_004a41e0 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_004a41e8 = malloc(0x80);
      if (DAT_004a41e8 == (undefined4 *)0x0) goto LAB_0046d4da;
      *DAT_004a41e8 = 0;
      DAT_004a41e4 = DAT_004a41e8;
      initterm(&DAT_0047c000,&DAT_0047c004);
      DAT_004a41d8 = DAT_004a41d8 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_004a41e8, puVar2 = DAT_004a41e4, DAT_004a41e8 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_004a41e8;
        }
      }
      free(_Memory);
      DAT_004a41e8 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


