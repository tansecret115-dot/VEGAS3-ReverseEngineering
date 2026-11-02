/* Module: sfxpfx2.dll
   Function: FUN_5c8d9dc0
   Address: 5c8d9dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5c8d9dc0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5c8efca8) {
      DAT_5c8efca8 = DAT_5c8efca8 + -1;
      goto LAB_5c8d9dd6;
    }
LAB_5c8d9dfe:
    uVar1 = 0;
  }
  else {
LAB_5c8d9dd6:
    _DAT_5c8efce0 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5c8efce8 = malloc(0x80);
      if (DAT_5c8efce8 == (undefined4 *)0x0) goto LAB_5c8d9dfe;
      *DAT_5c8efce8 = 0;
      DAT_5c8efce4 = DAT_5c8efce8;
      initterm(&DAT_5c8e7000,&DAT_5c8e7004);
      DAT_5c8efca8 = DAT_5c8efca8 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5c8efce8, puVar2 = DAT_5c8efce4, DAT_5c8efce8 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5c8efce8;
        }
      }
      free(_Memory);
      DAT_5c8efce8 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


