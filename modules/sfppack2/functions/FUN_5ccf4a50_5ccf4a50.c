/* Module: sfppack2.dll
   Function: FUN_5ccf4a50
   Address: 5ccf4a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_5ccf4a50(void *this,int param_1,int *param_2,int param_3)

{
  SIZE_T dwBytes;
  short sVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  HGLOBAL pvVar5;
  int iVar6;
  LPVOID pvVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  float10 fVar11;
  LPCVOID pMem;
  int iStack_4c;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  
  if (param_2 == (int *)0x0) {
    pvVar5 = GlobalAlloc(0x42,0x720);
    param_2 = GlobalLock(pvVar5);
    if (param_2 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  if (param_3 == 0) goto LAB_5ccf4bf3;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  iVar6 = ftol();
  param_2[5] = iVar6;
  dwBytes = iVar6 * 8;
  sVar1 = (*(short **)((int)this + 0x118))[7];
  if ((sVar1 == 0x40) || ((**(short **)((int)this + 0x118) == 1 && (sVar1 == 0x20)))) {
    if ((LPCVOID)param_2[6] != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle((LPCVOID)param_2[6]);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle((LPCVOID)param_2[6]);
      GlobalFree(pvVar5);
    }
    pvVar5 = GlobalAlloc(0x42,dwBytes);
    pvVar7 = GlobalLock(pvVar5);
    param_2[6] = (int)pvVar7;
    if (pvVar7 == (LPVOID)0x0) {
      return (int *)0x0;
    }
    if ((LPCVOID)param_2[7] != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle((LPCVOID)param_2[7]);
      GlobalUnlock(pvVar5);
      pMem = (LPCVOID)param_2[7];
      goto LAB_5ccf4b4b;
    }
  }
  else {
    if ((LPCVOID)param_2[6] != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle((LPCVOID)param_2[6]);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle((LPCVOID)param_2[6]);
      GlobalFree(pvVar5);
    }
    pvVar5 = GlobalAlloc(0x42,dwBytes);
    pvVar7 = GlobalLock(pvVar5);
    param_2[6] = (int)pvVar7;
    if (pvVar7 == (LPVOID)0x0) {
      return (int *)0x0;
    }
    if ((LPCVOID)param_2[7] != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle((LPCVOID)param_2[7]);
      GlobalUnlock(pvVar5);
      pMem = (LPCVOID)param_2[7];
LAB_5ccf4b4b:
      pvVar5 = GlobalHandle(pMem);
      GlobalFree(pvVar5);
    }
  }
  pvVar5 = GlobalAlloc(0x42,dwBytes);
  pvVar7 = GlobalLock(pvVar5);
  param_2[7] = (int)pvVar7;
  if (pvVar7 == (LPVOID)0x0) {
    return (int *)0x0;
  }
  iVar6 = 4;
  piVar10 = param_2 + 0x32;
  do {
    piVar9 = piVar10 + -0x1c;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    }
    iVar6 = iVar6 + -1;
    piVar9 = piVar10;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    }
    piVar10 = piVar10 + 0x70;
  } while (iVar6 != 0);
LAB_5ccf4bf3:
  *param_2 = 4;
  iVar6 = 0;
  piVar10 = param_2 + 8;
  piVar9 = (int *)(param_1 + 0x88);
  do {
    iVar6 = iVar6 + 1;
    *piVar10 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 0x70;
  } while (iVar6 < *param_2);
  fVar11 = (float10)_CIpow();
  *(double *)(param_2 + 2) = (double)fVar11;
  iStack_4c = 0;
  param_2[4] = *(int *)(param_1 + 0x84);
  if (0 < *param_2) {
    piVar10 = (int *)(param_1 + 0x24);
    piVar9 = param_2 + 0x6e;
    do {
      if (piVar9[-0x66] == 0) {
        dVar3 = (double)piVar10[4] * _DAT_5cd53ad8;
        dVar4 = (double)piVar10[8] * _DAT_5cd53ad8;
        iVar6 = ftol();
        *piVar9 = iVar6;
        iVar6 = ftol();
        piVar9[8] = iVar6;
        *(double *)(piVar9 + -8) = (double)*piVar10 * _DAT_5cd514c8;
        fVar11 = (float10)_CIpow();
        *(double *)(piVar9 + -6) = (double)fVar11;
        if (piVar10[4] == -600) {
          piVar9[-6] = 0x107e1fe9;
          piVar9[-5] = 0x3f000000;
        }
        *(double *)(piVar9 + 2) = *(double *)(piVar9 + -6) * _DAT_5cd52950;
        if (dVar4 <= _DAT_5cd53ae0) {
          piVar9[4] = 0;
          piVar9[5] = 0x3ff00000;
        }
        else {
          fVar11 = (float10)_CIpow();
          *(double *)(piVar9 + 4) = (double)((float10)_DAT_5cd51510 - fVar11);
        }
        if (dVar3 <= _DAT_5cd53ae0) {
          piVar9[-4] = 0;
          piVar9[-3] = 0x3ff00000;
        }
        else {
          fVar11 = (float10)_CIpow();
          *(double *)(piVar9 + -4) = (double)((float10)_DAT_5cd51510 - fVar11);
        }
        *(double *)(piVar9 + 6) = _DAT_5cd51510 - *(double *)(piVar9 + 4);
        *(double *)(piVar9 + -2) = _DAT_5cd51510 - *(double *)(piVar9 + -4);
        if (param_3 != 0) {
          piVar9[-0xe] = 0;
          piVar9[-10] = 0;
          piVar9[-9] = 0x3ff00000;
        }
        piVar9[-0xc] = 0;
        piVar9[-0xb] = 0;
        piVar9[-0xd] = piVar10[-4];
        iVar6 = piVar10[0x14];
        dStack_18 = -25.0;
        uVar2 = *(uint *)(*(int *)((int)this + 0x118) + 4);
        piVar9[-0x2c] = 0;
        iVar8 = piVar9[-0xd];
        dStack_20 = (double)iVar6 / (double)uVar2;
        if (iVar8 == 0) {
          dStack_10 = 0.1;
          FUN_5ccf5110((int)(piVar9 + -0x58),&dStack_20);
          FUN_5ccf5110((int)(piVar9 + -0x3c),&dStack_20);
          dStack_18 = (double)piVar10[0xc] * _DAT_5cd514c8;
          if (dStack_18 <= _DAT_5cd51520) {
            if (dStack_18 < _DAT_5cd51520) {
              FUN_5ccf5110((int)(piVar9 + -0x1e),&dStack_20);
LAB_5ccf4fc3:
              piVar9[-0x2c] = -1;
            }
          }
          else {
            FUN_5ccf5000((int)(piVar9 + -0x1e),&dStack_20);
            piVar9[-0x2c] = 1;
          }
        }
        else if (iVar8 == 1) {
          dStack_10 = _DAT_5cd514f8 / (double)piVar10[0x10];
          FUN_5ccf4840(this,piVar9 + -100,(undefined4 *)&dStack_20,param_3);
          FUN_5ccf4840(this,piVar9 + -0x48,(undefined4 *)&dStack_20,param_3);
          dStack_18 = (double)piVar10[0xc] * _DAT_5cd514c8;
          FUN_5ccf4840(this,piVar9 + -0x2a,(undefined4 *)&dStack_20,param_3);
          if (dStack_18 <= _DAT_5cd51520) {
            if (dStack_18 < _DAT_5cd51520) goto LAB_5ccf4fc3;
          }
          else {
            piVar9[-0x2c] = 1;
          }
        }
        else if (iVar8 == 2) {
          dStack_10 = 0.3;
          FUN_5ccf5260((int)(piVar9 + -0x58),&dStack_20);
          FUN_5ccf5260((int)(piVar9 + -0x3c),&dStack_20);
          dStack_18 = (double)piVar10[0xc] * _DAT_5cd514c8;
          if (dStack_18 <= _DAT_5cd51520) {
            if (dStack_18 < _DAT_5cd51520) {
              FUN_5ccf5260((int)(piVar9 + -0x1e),&dStack_20);
              goto LAB_5ccf4fc3;
            }
          }
          else {
            FUN_5ccf5500((int)(piVar9 + -0x1e),&dStack_20);
            piVar9[-0x2c] = 1;
          }
        }
      }
      iStack_4c = iStack_4c + 1;
      piVar10 = piVar10 + 1;
      piVar9 = piVar9 + 0x70;
    } while (iStack_4c < *param_2);
  }
  return param_2;
}


