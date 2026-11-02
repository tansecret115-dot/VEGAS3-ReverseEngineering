/* Module: aviplug.dll
   Function: FUN_5f9d5bf4
   Address: 5f9d5bf4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f9d5bf4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5fa1aec0) {
      DAT_5fa1aec0 = DAT_5fa1aec0 + -1;
      goto LAB_5f9d5c0a;
    }
LAB_5f9d5c32:
    uVar1 = 0;
  }
  else {
LAB_5f9d5c0a:
    _DAT_5fa1aec4 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5fa1aecc = malloc(0x80);
      if (DAT_5fa1aecc == (undefined4 *)0x0) goto LAB_5f9d5c32;
      *DAT_5fa1aecc = 0;
      DAT_5fa1aec8 = DAT_5fa1aecc;
      initterm(&DAT_5f9f1000,&DAT_5f9f1014);
      DAT_5fa1aec0 = DAT_5fa1aec0 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5fa1aecc, puVar2 = DAT_5fa1aec8, DAT_5fa1aecc != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5fa1aecc;
        }
      }
      free(_Memory);
      DAT_5fa1aecc = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


