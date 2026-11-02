/* Module: pncrt.dll
   Function: FUN_78026430
   Address: 78026430
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_78026430(int param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  
  for (piVar3 = DAT_78042604; (piVar3 < DAT_78042604 + DAT_78042600 * 2 && (*piVar3 != param_1));
      piVar3 = piVar3 + 2) {
  }
  if (DAT_78042604 + DAT_78042600 * 2 <= piVar3) {
    if ((param_1 == 0) &&
       (pvVar2 = realloc(DAT_78042604,DAT_78042600 * 8 + 8), pvVar2 != (void *)0x0)) {
      DAT_78042604 = pvVar2;
      iVar1 = DAT_78042600 * 8;
      DAT_78042600 = DAT_78042600 + 1;
      return (int *)((int)pvVar2 + iVar1);
    }
    piVar3 = (int *)0x0;
  }
  return piVar3;
}


