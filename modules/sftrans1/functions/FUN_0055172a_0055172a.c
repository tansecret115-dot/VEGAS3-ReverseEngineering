/* Module: sftrans1.dll
   Function: FUN_0055172a
   Address: 0055172a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0055172a(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_00622484) {
      DAT_00622484 = DAT_00622484 + -1;
      goto LAB_00551740;
    }
LAB_00551768:
    uVar1 = 0;
  }
  else {
LAB_00551740:
    _DAT_0062248c = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_00622498 = malloc(0x80);
      if (DAT_00622498 == (undefined4 *)0x0) goto LAB_00551768;
      *DAT_00622498 = 0;
      DAT_00622494 = DAT_00622498;
      initterm(&DAT_00573000,&DAT_00573010);
      DAT_00622484 = DAT_00622484 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_00622498, puVar2 = DAT_00622494, DAT_00622498 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_00622498;
        }
      }
      free(_Memory);
      DAT_00622498 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


