/* Module: vegas30k.dll
   Function: _SfVideoFilterCache_CreateNewCookie@4
   Address: 01027d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfVideoFilterCache_CreateNewCookie_4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0x27d00  1251  _SfVideoFilterCache_CreateNewCookie@4 */
  iVar3 = 0x10;
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1;
  }
  if (0 < iVar1) {
    piVar2 = (int *)param_1[2];
    do {
      if (iVar3 < *(int *)(*piVar2 + 0x70)) {
        iVar3 = *(int *)(*piVar2 + 0x70);
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return iVar3 + 1;
  }
  return 0x11;
}


