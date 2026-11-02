/* Module: mcplug.dll
   Function: FUN_00473772
   Address: 00473772
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00473772(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_004ae474) {
      DAT_004ae474 = DAT_004ae474 + -1;
      goto LAB_00473788;
    }
LAB_004737b0:
    uVar1 = 0;
  }
  else {
LAB_00473788:
    _DAT_004ae478 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_004ae480 = malloc(0x80);
      if (DAT_004ae480 == (undefined4 *)0x0) goto LAB_004737b0;
      *DAT_004ae480 = 0;
      DAT_004ae47c = DAT_004ae480;
      initterm(&DAT_00486000,&DAT_0048604c);
      DAT_004ae474 = DAT_004ae474 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_004ae480, puVar2 = DAT_004ae47c, DAT_004ae480 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_004ae480;
        }
      }
      free(_Memory);
      DAT_004ae480 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


