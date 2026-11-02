/* Module: vidcap30.exe
   Function: FUN_005441f0
   Address: 005441f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005441f0(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_0059dd30;
  do {
    if (param_1 < *puVar1) break;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (puVar1 < &DAT_0059dd54);
  return iVar2 + 1;
}


