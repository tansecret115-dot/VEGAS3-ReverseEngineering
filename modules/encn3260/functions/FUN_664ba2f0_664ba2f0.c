/* Module: encn3260.dll
   Function: FUN_664ba2f0
   Address: 664ba2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664ba2f0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_664ef5ec;
  do {
    if (*(int *)(*ppuVar2 + 4) == param_1) {
      return iVar1;
    }
    ppuVar2 = ppuVar2 + 4;
    iVar1 = iVar1 + 1;
  } while ((int)ppuVar2 < 0x664ef69c);
  return 0xb;
}


