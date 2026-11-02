/* Module: vegas30k.dll
   Function: FUN_011a2130
   Address: 011a2130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011a2130(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 1;
  }
  *param_2 = 0xffffffff;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x414));
  piVar3 = *(int **)(param_1 + 0x438);
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  iVar1 = 0;
  if (0 < iVar4) {
    piVar3 = (int *)piVar3[2];
    do {
      if (*(int *)(*piVar3 + 0xc) == 0) {
        if (*piVar3 != 0) goto LAB_011a21aa;
        break;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < iVar4);
  }
  iVar1 = -0x7ff8fff2;
  iVar4 = FUN_011a0e40();
  if (iVar4 != 0) {
LAB_011a21aa:
    uVar2 = FUN_011a2050();
    FUN_011b2390(uVar2);
    *param_2 = uVar2;
    iVar1 = 0;
    if ((((((*(byte *)(param_1 + 0xc) & 2) != 0) &&
          (iVar1 = FUN_011b3c10(*(int *)(param_1 + 0x228) + 0x4be,*(undefined4 *)(param_1 + 0x430),
                                *(undefined4 *)(param_1 + 0x434),*(undefined4 *)(param_1 + 0x14),
                                *(undefined4 *)(param_1 + 0x18)), -1 < iVar1)) &&
         ((*(byte *)(param_1 + 0xc) & 4) != 0)) &&
        ((iVar1 = FUN_011b3fc0(*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c)),
         -1 < iVar1 && ((*(byte *)(param_1 + 0xc) & 8) != 0)))) &&
       ((iVar1 = FUN_011b4180(*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c)),
        -1 < iVar1 &&
        ((iVar1 = FUN_011b41e0(*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c)),
         -1 < iVar1 && ((*(byte *)(param_1 + 0xc) & 0x20) != 0)))))) {
      FUN_011b41e0(*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c));
      iVar1 = FUN_011b41c0(*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x414));
  return iVar1;
}


