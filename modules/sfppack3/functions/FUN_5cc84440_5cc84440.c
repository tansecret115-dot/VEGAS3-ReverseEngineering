/* Module: sfppack3.dll
   Function: FUN_5cc84440
   Address: 5cc84440
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cc84440(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5cc9ebb0) {
      DAT_5cc9ebb0 = DAT_5cc9ebb0 + -1;
      goto LAB_5cc84456;
    }
LAB_5cc8447e:
    uVar1 = 0;
  }
  else {
LAB_5cc84456:
    _DAT_5cc9ebe8 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5cc9ebf0 = malloc(0x80);
      if (DAT_5cc9ebf0 == (undefined4 *)0x0) goto LAB_5cc8447e;
      *DAT_5cc9ebf0 = 0;
      DAT_5cc9ebec = DAT_5cc9ebf0;
      initterm(&DAT_5cc93000,&DAT_5cc93004);
      DAT_5cc9ebb0 = DAT_5cc9ebb0 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5cc9ebf0, puVar2 = DAT_5cc9ebec, DAT_5cc9ebf0 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5cc9ebf0;
        }
      }
      free(_Memory);
      DAT_5cc9ebf0 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


