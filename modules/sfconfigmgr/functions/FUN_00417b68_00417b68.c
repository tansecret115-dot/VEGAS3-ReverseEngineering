/* Module: sfconfigmgr.dll
   Function: FUN_00417b68
   Address: 00417b68
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00417b68(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_004285a0) {
      DAT_004285a0 = DAT_004285a0 + -1;
      goto LAB_00417b7e;
    }
LAB_00417ba6:
    uVar1 = 0;
  }
  else {
LAB_00417b7e:
    _DAT_004285a4 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_004285ac = malloc(0x80);
      if (DAT_004285ac == (undefined4 *)0x0) goto LAB_00417ba6;
      *DAT_004285ac = 0;
      DAT_004285a8 = DAT_004285ac;
      initterm(&DAT_00422000,&DAT_00422004);
      DAT_004285a0 = DAT_004285a0 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_004285ac, puVar2 = DAT_004285a8, DAT_004285ac != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_004285ac;
        }
      }
      free(_Memory);
      DAT_004285ac = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


