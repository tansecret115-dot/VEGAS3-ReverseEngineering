/* Module: wmfplug2.dll
   Function: FUN_0047937a
   Address: 0047937a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047937a(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_004af360) {
      DAT_004af360 = DAT_004af360 + -1;
      goto LAB_00479390;
    }
LAB_004793b8:
    uVar1 = 0;
  }
  else {
LAB_00479390:
    _DAT_004af364 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_004af36c = malloc(0x80);
      if (DAT_004af36c == (undefined4 *)0x0) goto LAB_004793b8;
      *DAT_004af36c = 0;
      DAT_004af368 = DAT_004af36c;
      initterm(&DAT_00488000,&DAT_00488008);
      DAT_004af360 = DAT_004af360 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_004af36c, puVar2 = DAT_004af368, DAT_004af36c != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_004af36c;
        }
      }
      free(_Memory);
      DAT_004af36c = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


