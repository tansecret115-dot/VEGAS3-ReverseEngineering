/* Module: stl2plg.dll
   Function: FUN_0046264f
   Address: 0046264f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0046264f(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_00498b30) {
      DAT_00498b30 = DAT_00498b30 + -1;
      goto LAB_00462665;
    }
LAB_0046268d:
    uVar1 = 0;
  }
  else {
LAB_00462665:
    _DAT_00498b34 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_00498b3c = malloc(0x80);
      if (DAT_00498b3c == (undefined4 *)0x0) goto LAB_0046268d;
      *DAT_00498b3c = 0;
      DAT_00498b38 = DAT_00498b3c;
      initterm(&DAT_00471000,&DAT_00471014);
      DAT_00498b30 = DAT_00498b30 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_00498b3c, puVar2 = DAT_00498b38, DAT_00498b3c != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_00498b3c;
        }
      }
      free(_Memory);
      DAT_00498b3c = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


