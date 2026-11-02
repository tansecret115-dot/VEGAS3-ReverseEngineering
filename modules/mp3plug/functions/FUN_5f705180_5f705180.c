/* Module: mp3plug.dll
   Function: FUN_5f705180
   Address: 5f705180
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_5f705180(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_5f6d9720(1,0x10);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
    iVar2 = FUN_5f6d9760(param_1 * 4);
    piVar1[3] = iVar2;
    if (iVar2 != 0) {
      piVar1[2] = 0;
      piVar1[1] = 0;
      return piVar1;
    }
    FUN_5f705204();
  }
  return (int *)0x0;
}


