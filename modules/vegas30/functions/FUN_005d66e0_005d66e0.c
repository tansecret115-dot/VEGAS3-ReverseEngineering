/* Module: vegas30.exe
   Function: FUN_005d66e0
   Address: 005d66e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005d66e0(double param_1)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  pdVar1 = (double *)&DAT_00646990;
  do {
    iVar4 = 0;
    if (0x646990 < (int)pdVar1) {
      pdVar2 = (double *)&DAT_00646990;
      do {
        if ((*pdVar2 - _DAT_0062a1a0 <= *pdVar1) && (*pdVar1 <= _DAT_0062a1a0 + *pdVar2))
        goto LAB_005d6758;
        iVar4 = iVar4 + 1;
        pdVar2 = pdVar2 + 5;
      } while (iVar4 < iVar5);
    }
    if ((param_1 - _DAT_0062a1a0 <= *pdVar1) && (*pdVar1 <= _DAT_0062a1a0 + param_1)) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
LAB_005d6758:
    pdVar1 = pdVar1 + 5;
    iVar5 = iVar5 + 1;
    if (0x646b6f < (int)pdVar1) {
      return -1;
    }
  } while( true );
}


