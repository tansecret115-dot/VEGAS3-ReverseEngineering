/* Module: rmme3260.dll
   Function: FUN_6624f770
   Address: 6624f770
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6624f770(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_6627c0d4;
  do {
    if (*(int *)(*ppuVar2 + 4) == param_1) {
      return iVar1;
    }
    ppuVar2 = ppuVar2 + 4;
    iVar1 = iVar1 + 1;
  } while ((int)ppuVar2 < 0x6627c184);
  return 0xb;
}


