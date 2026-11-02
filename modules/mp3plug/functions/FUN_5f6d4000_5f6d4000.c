/* Module: mp3plug.dll
   Function: FUN_5f6d4000
   Address: 5f6d4000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6d4000(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
  iVar4 = 1;
  dVar3 = _DAT_5f75c6b8;
  dVar2 = _DAT_5f75c6b0;
  do {
    dVar1 = (_DAT_5f75c6c0 * param_1) / (double)iVar4;
    dVar2 = dVar1 * dVar1 * dVar2;
    dVar3 = dVar3 + dVar2;
    iVar4 = iVar4 + 1;
  } while (_DAT_5f75c6c8 * dVar3 <= dVar2);
  return;
}


