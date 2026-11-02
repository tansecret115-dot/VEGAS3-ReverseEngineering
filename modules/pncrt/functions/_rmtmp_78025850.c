/* Module: pncrt.dll
   Function: _rmtmp
   Address: 78025850
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _rmtmp(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x25850  420  _rmtmp */
  iVar4 = 0;
  _lock(2);
  iVar3 = 0;
  if (0 < DAT_7803fa78) {
    do {
      iVar1 = *(int *)(DAT_78042850 + iVar3 * 4);
      if (iVar1 != 0) {
        FUN_780094e0(iVar3,iVar1);
        piVar2 = *(int **)(DAT_78042850 + iVar3 * 4);
        if (((*(byte *)(piVar2 + 3) & 0x83) != 0) && (piVar2[7] != 0)) {
          FUN_7800f490(piVar2);
          iVar4 = iVar4 + 1;
        }
        FUN_78009550(iVar3,*(int *)(DAT_78042850 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_7803fa78);
  }
  _unlock(2);
  return iVar4;
}


