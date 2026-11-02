/* Module: qt4plug.dll
   Function: FUN_5f5945bf
   Address: 5f5945bf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f5945bf(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5f5c9688) {
      DAT_5f5c9688 = DAT_5f5c9688 + -1;
      goto LAB_5f5945d5;
    }
LAB_5f5945fd:
    uVar1 = 0;
  }
  else {
LAB_5f5945d5:
    _DAT_5f5c968c = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5f5c9694 = malloc(0x80);
      if (DAT_5f5c9694 == (undefined4 *)0x0) goto LAB_5f5945fd;
      *DAT_5f5c9694 = 0;
      DAT_5f5c9690 = DAT_5f5c9694;
      initterm(&DAT_5f5a0000,&DAT_5f5a0014);
      DAT_5f5c9688 = DAT_5f5c9688 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5f5c9694, puVar2 = DAT_5f5c9690, DAT_5f5c9694 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5f5c9694;
        }
      }
      free(_Memory);
      DAT_5f5c9694 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


