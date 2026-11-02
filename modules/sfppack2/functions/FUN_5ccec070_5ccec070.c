/* Module: sfppack2.dll
   Function: FUN_5ccec070
   Address: 5ccec070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5ccec070(void *param_1,int param_2)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 4));
  pdVar3 = (double *)((int)param_1 + 0x140);
  iVar4 = 4;
  pdVar2 = (double *)(param_2 + 0x10);
  do {
    *(undefined4 *)(pdVar3 + -1) = *(undefined4 *)(pdVar2 + -2);
    dVar1 = _DAT_5cd52ef8;
    if ((_DAT_5cd52ef8 <= pdVar2[-1]) && (dVar1 = _DAT_5cd51510, pdVar2[-1] <= _DAT_5cd51510)) {
      dVar1 = pdVar2[-1];
    }
    *pdVar3 = dVar1;
    dVar1 = _DAT_5cd52ef8;
    if ((_DAT_5cd52ef8 <= *pdVar2) && (dVar1 = _DAT_5cd51510, *pdVar2 <= _DAT_5cd51510)) {
      dVar1 = *pdVar2;
    }
    pdVar3[1] = dVar1;
    dVar1 = _DAT_5cd52ef8;
    if ((_DAT_5cd52ef8 <= pdVar2[1]) && (dVar1 = _DAT_5cd51510, pdVar2[1] <= _DAT_5cd51510)) {
      dVar1 = pdVar2[1];
    }
    pdVar3[2] = dVar1;
    dVar1 = _DAT_5cd52ef8;
    if ((_DAT_5cd52ef8 <= pdVar2[2]) && (dVar1 = _DAT_5cd51510, pdVar2[2] <= _DAT_5cd51510)) {
      dVar1 = pdVar2[2];
    }
    pdVar3[3] = dVar1;
    dVar1 = _DAT_5cd52ef8;
    if ((_DAT_5cd52ef8 <= pdVar2[3]) && (dVar1 = _DAT_5cd51510, pdVar2[3] <= _DAT_5cd51510)) {
      dVar1 = pdVar2[3];
    }
    pdVar3[4] = dVar1;
    pdVar2 = pdVar2 + 6;
    pdVar3 = pdVar3 + 6;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((*(int *)((int)param_1 + 0x4b8) != 0) && (*(int *)((int)param_1 + 0x4bc) != 0)) {
    FUN_5ccf4540(param_1,(undefined4 *)((int)param_1 + 0x138));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 4));
  return 0;
}


