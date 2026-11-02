/* Module: gifplug.dll
   Function: FUN_5f70014f
   Address: 5f70014f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f70014f(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5f7313f8) {
      DAT_5f7313f8 = DAT_5f7313f8 + -1;
      goto LAB_5f700165;
    }
LAB_5f70018d:
    uVar1 = 0;
  }
  else {
LAB_5f700165:
    _DAT_5f7313fc = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5f731404 = malloc(0x80);
      if (DAT_5f731404 == (undefined4 *)0x0) goto LAB_5f70018d;
      *DAT_5f731404 = 0;
      DAT_5f731400 = DAT_5f731404;
      initterm(&DAT_5f70b000,&DAT_5f70b004);
      DAT_5f7313f8 = DAT_5f7313f8 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5f731404, puVar2 = DAT_5f731400, DAT_5f731404 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5f731404;
        }
      }
      free(_Memory);
      DAT_5f731404 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


