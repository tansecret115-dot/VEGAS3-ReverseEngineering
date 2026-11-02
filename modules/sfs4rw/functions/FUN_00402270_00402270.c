/* Module: sfs4rw.dll
   Function: FUN_00402270
   Address: 00402270
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00402270(void *this,int **param_1)

{
  LPCSTR lpString;
  int **ppiVar1;
  int **ppiVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uchar *_Dest;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  int ***pppiVar9;
  int local_3c;
  int local_38;
  int **local_30 [5];
  int **local_1c;
  int **local_18;
  int local_14;
  int **local_10;
  int local_c;
  int **local_8;
  int local_4;
  
  ppiVar1 = param_1;
  local_38 = 0;
  if (param_1 == (int **)0x0) {
    return -0x7fffbffb;
  }
  piVar7 = (int *)((int)this + 0x144);
  if (*(int *)((int)this + 0x144) == 0) {
    local_38 = FUN_00425040(piVar7,4,-1,-1,0x40000002);
    if (local_38 < 0) {
      return local_38;
    }
    DAT_004a8134 = *piVar7;
  }
  iVar3 = FUN_004242c0((int *)*piVar7,param_1,(undefined4 *)0x0,-1,&LAB_00402640);
  if (-1 < iVar3) {
    iVar3 = *(int *)(*(int *)(*piVar7 + 8) + iVar3 * 4);
    if ((*(int **)(iVar3 + 0x23c) != (int *)0x0) && (param_1[0x8f] != *(int **)(iVar3 + 0x23c))) {
      if (*(void **)(iVar3 + 0x240) != (void *)0x0) {
        free(*(void **)(iVar3 + 0x240));
        *(undefined4 *)(iVar3 + 0x240) = 0;
        *(undefined4 *)(iVar3 + 0x23c) = 0;
      }
      if (param_1[0x8f] != (int *)0x0) {
        pvVar6 = calloc(1,(int)param_1[0x8f] * 4);
        *(void **)(iVar3 + 0x240) = pvVar6;
        if (pvVar6 == (void *)0x0) {
          return -0x7ff8fff2;
        }
      }
      *(int **)(iVar3 + 0x23c) = param_1[0x8f];
      piVar7 = (int *)0x0;
      if (param_1[0x8f] != (int *)0x0) {
        do {
          *(int *)(*(int *)(iVar3 + 0x240) + (int)piVar7 * 4) = param_1[0x90][(int)piVar7];
          piVar7 = (int *)((int)piVar7 + 1);
        } while (piVar7 < param_1[0x8f]);
      }
    }
    *(int **)(iVar3 + 0x20c) = param_1[0x83];
    *(int **)(iVar3 + 0x210) = param_1[0x84];
    if (param_1 + 1 != (int **)0x0) {
      _mbscpy((uchar *)(iVar3 + 4),(uchar *)(param_1 + 1));
    }
    if (param_1 + 0x88 != (int **)0x0) {
      _mbscpy((uchar *)(iVar3 + 0x220),(uchar *)(param_1 + 0x88));
    }
    if (param_1 + 0x92 != (int **)0x0) {
      _mbscpy((uchar *)(iVar3 + 0x248),(uchar *)(param_1 + 0x92));
    }
    if ((uchar *)((int)param_1 + 0x261) != (uchar *)0x0) {
      _mbscpy((uchar *)(iVar3 + 0x261),(uchar *)((int)param_1 + 0x261));
    }
    local_30[0] = param_1 + 0xdb;
    local_30[2] = param_1 + 0xda;
    local_30[1] = (int **)(iVar3 + 0x36c);
    local_30[3] = (int **)(iVar3 + 0x368);
    local_1c = (int **)(iVar3 + 0x370);
    local_30[4] = param_1 + 0xdc;
    local_18 = param_1 + 0xde;
    local_14 = iVar3 + 0x378;
    local_10 = param_1 + 0xdd;
    local_c = iVar3 + 0x374;
    local_8 = param_1 + 0xdf;
    local_4 = iVar3 + 0x37c;
    pppiVar9 = local_30 + 1;
    param_1 = (int **)0x6;
    do {
      ppiVar1 = pppiVar9[-1];
      if (*ppiVar1 != (int *)0x0) {
        ppiVar2 = *pppiVar9;
        if (*ppiVar2 != (int *)0x0) {
          free(*ppiVar2);
          *ppiVar2 = (int *)0x0;
        }
        iVar3 = lstrlenA((LPCSTR)*ppiVar1);
        piVar7 = calloc(1,iVar3 + 1);
        if (piVar7 != (int *)0x0) {
          _mbscpy((uchar *)piVar7,(uchar *)*ppiVar1);
        }
        *ppiVar2 = piVar7;
      }
      pppiVar9 = pppiVar9 + 2;
      param_1 = (int **)((int)param_1 + -1);
    } while (param_1 != (int **)0x0);
    return local_38;
  }
  iVar3 = FUN_00424510((int *)*piVar7,param_1,0,(undefined4 *)0xffffffff,&LAB_00402670);
  if ((param_1[0x8f] == (int *)0x0) || (param_1[0x90] == (int *)0x0)) {
    param_1[0x8f] = (int *)0x0;
    param_1[0x90] = (int *)0x0;
  }
  else {
    piVar4 = calloc(1,(int)param_1[0x8f] << 2);
    if (piVar4 == (int *)0x0) {
      return -0x7ff8fff2;
    }
    iVar5 = 0;
    if (0 < (int)param_1[0x8f]) {
      do {
        iVar8 = iVar5 + 1;
        piVar4[iVar5] = param_1[0x90][iVar5];
        iVar5 = iVar8;
      } while (iVar8 < (int)param_1[0x8f]);
    }
    param_1[0x90] = piVar4;
  }
  local_30[0] = param_1 + 0xdb;
  local_30[1] = param_1 + 0xda;
  local_30[2] = param_1 + 0xdc;
  local_30[3] = param_1 + 0xde;
  local_30[4] = param_1 + 0xdd;
  local_1c = param_1 + 0xdf;
  param_1 = (int **)local_30;
  local_3c = 6;
  do {
    piVar4 = *param_1;
    lpString = (LPCSTR)*piVar4;
    if ((lpString != (LPCSTR)0x0) && (*lpString != '\0')) {
      iVar5 = lstrlenA(lpString);
      _Dest = calloc(1,iVar5 + 1);
      if (_Dest != (uchar *)0x0) {
        _mbscpy(_Dest,(uchar *)*piVar4);
      }
      *piVar4 = (int)_Dest;
    }
    param_1 = param_1 + 1;
    local_3c = local_3c + -1;
  } while (local_3c != 0);
  FUN_00424d10((int *)*piVar7,(int *)ppiVar1,0x39c,iVar3,(int *)0x0);
  return local_38;
}


