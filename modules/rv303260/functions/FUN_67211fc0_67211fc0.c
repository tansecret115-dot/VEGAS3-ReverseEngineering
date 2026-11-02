/* Module: rv303260.dll
   Function: FUN_67211fc0
   Address: 67211fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_67211fc0(undefined4 param_1,int param_2)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    if (DAT_672168a4 < 1) {
      return 0;
    }
    DAT_672168a4 = DAT_672168a4 + -1;
  }
  _DAT_672168a8 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == 1) {
    DAT_672168b4 = malloc(0x80);
    if (DAT_672168b4 == (undefined4 *)0x0) {
      return 0;
    }
    *DAT_672168b4 = 0;
    DAT_672168b0 = DAT_672168b4;
    initterm(&DAT_67214000,&DAT_6721400c);
    DAT_672168a4 = DAT_672168a4 + 1;
    return 1;
  }
  if ((param_2 == 0) && (DAT_672168b4 != (undefined4 *)0x0)) {
    puVar1 = DAT_672168b0 + -1;
    _Memory = DAT_672168b4;
    if (DAT_672168b4 <= puVar1) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          _Memory = DAT_672168b4;
        }
        puVar1 = puVar1 + -1;
      } while (_Memory <= puVar1);
    }
    free(_Memory);
    DAT_672168b4 = (undefined4 *)0x0;
  }
  return 1;
}


