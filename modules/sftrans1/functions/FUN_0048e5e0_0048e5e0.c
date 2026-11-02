/* Module: sftrans1.dll
   Function: FUN_0048e5e0
   Address: 0048e5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048e5e0(int param_1,undefined4 param_2)

{
  double dVar1;
  wchar_t *_Str;
  LPCVOID pMem;
  bool bVar2;
  double dVar3;
  double dVar4;
  HGLOBAL pvVar5;
  undefined4 *puVar6;
  int iVar7;
  LPVOID pvVar8;
  double *pdVar9;
  size_t sVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  float10 extraout_ST0;
  short *local_30;
  undefined4 *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = *(int *)(*(int *)(param_1 + 8) + 0xd1c);
  local_10 = (double)(ulonglong)*(uint *)(*(int *)(param_1 + 8) + 0xc4);
  local_10 = (double)(longlong)local_10;
  pvVar5 = GlobalAlloc(0x40,local_20 * 0x30);
  puVar6 = GlobalLock(pvVar5);
  if (puVar6 == (undefined4 *)0x0) {
    return;
  }
  puVar14 = puVar6;
  for (iVar11 = (*(int *)(*(int *)(param_1 + 8) + 0xd1c) * 3 & 0xfffffffU) << 2; iVar11 != 0;
      iVar11 = iVar11 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  iVar11 = 0;
  local_1c = 0;
  local_30 = *(short **)(*(int *)(param_1 + 8) + 0xd20);
  local_28 = 0;
  local_2c = puVar6;
  if ((*(int *)(*(int *)(param_1 + 8) + 0xa88) == 2) && (iVar7 = FUN_0048cee0(local_30), iVar7 == 0)
     ) {
    local_28 = 1;
  }
  if (*local_30 != 0) {
    local_18 = (double)CONCAT44(local_18._4_4_,puVar6 + 6);
    do {
      if (local_20 <= local_1c) break;
      iVar7 = FUN_0048ceb0(local_30);
      pvVar5 = GlobalAlloc(0x40,iVar7 * 2);
      pvVar8 = GlobalLock(pvVar5);
      puVar6 = local_2c;
      if (pvVar8 == (LPVOID)0x0) break;
      iVar7 = FUN_0048cec0(&local_30,iVar7,pvVar8);
      piVar12 = (int *)local_18;
      ((int *)local_18)[-6] = iVar7;
      ((int *)local_18)[-5] = (int)pvVar8;
      *(int *)local_18 = iVar11;
      switch(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa88)) {
      case 0:
        iVar7 = FUN_0048cee0(local_30);
        if (iVar7 == 0) {
LAB_0048e793:
          iVar11 = iVar11 + 1;
        }
        break;
      case 1:
        iVar7 = FUN_0048cee0(local_30);
        if (iVar7 != -1) goto LAB_0048e793;
        break;
      case 2:
        iVar7 = FUN_0048cee0(local_30);
        if (iVar7 == 0) {
          local_28 = 1;
          goto LAB_0048e793;
        }
        iVar7 = FUN_0048cee0(local_30);
        if (iVar7 != -1) {
          if (local_28 == 0) {
            iVar11 = iVar11 + 1;
          }
          local_28 = 0;
        }
        break;
      case 3:
        iVar7 = FUN_0048cee0(local_30);
        if ((iVar7 == 0) || (iVar7 = FUN_0048cee0(local_30), iVar7 == 1)) goto LAB_0048e793;
      }
      local_1c = local_1c + 1;
      local_18 = (double)CONCAT44(local_18._4_4_,piVar12 + 0xc);
      puVar6 = local_2c;
    } while (*local_30 != 0);
  }
  local_18 = (double)(ulonglong)(iVar11 + 1);
  local_28 = ftol();
  local_18 = (double)(ulonglong)local_28;
  iVar11 = *(int *)(param_1 + 8);
  dVar1 = (double)(extraout_ST0 - (float10)(longlong)local_18);
  local_24 = ftol();
  if (*(int *)(iVar11 + 0xa88) == 2) {
    bVar2 = false;
    iVar11 = *(int *)(iVar11 + 0xd1c) + -1;
    if (-1 < iVar11) {
      piVar12 = puVar6 + iVar11 * 0xc;
      do {
        if ((piVar12[6] == local_28) && (*piVar12 != 0)) {
          bVar2 = true;
LAB_0048e841:
          if (*piVar12 == 0) {
            puVar6[iVar11 * 0xc + 6] = local_28;
            break;
          }
        }
        else if (bVar2) goto LAB_0048e841;
        iVar11 = iVar11 + -1;
        piVar12 = piVar12 + -0xc;
      } while (-1 < iVar11);
    }
  }
  bVar2 = true;
  if (0 < local_20) {
    pdVar9 = (double *)(puVar6 + 2);
    iVar11 = local_20;
    dVar3 = _DAT_00555910;
    do {
      if (*(uint *)(pdVar9 + 2) == local_28) {
        iVar7 = *(int *)(pdVar9 + -1);
        if (iVar7 == 0) {
          if (!bVar2) {
            dVar3 = local_10 * *(double *)(*(int *)(param_1 + 8) + 0xb20) + dVar3;
          }
          *pdVar9 = dVar3;
          dVar3 = dVar3 + *(double *)(param_1 + 0x550);
          pdVar9[1] = dVar3;
          dVar4 = local_10 * *(double *)(*(int *)(param_1 + 8) + 0xb28);
LAB_0048e91c:
          dVar3 = dVar4 + dVar3;
        }
        else {
          if (iVar7 == 1) {
            if (!bVar2) {
              dVar3 = local_10 * *(double *)(*(int *)(param_1 + 8) + 0xb98) + dVar3;
            }
            *pdVar9 = dVar3;
            dVar3 = dVar3 + *(double *)(param_1 + 0x558);
            pdVar9[1] = dVar3;
            dVar4 = local_10 * *(double *)(*(int *)(param_1 + 8) + 0xba0);
            goto LAB_0048e91c;
          }
          if (iVar7 == 2) {
            if (!bVar2) {
              dVar3 = local_10 * *(double *)(*(int *)(param_1 + 8) + 0xc10) + dVar3;
            }
            *pdVar9 = dVar3;
            dVar3 = dVar3 + *(double *)(param_1 + 0x560);
            pdVar9[1] = dVar3;
            dVar4 = local_10 * *(double *)(*(int *)(param_1 + 8) + 0xc18);
            goto LAB_0048e91c;
          }
        }
        bVar2 = false;
      }
      pdVar9 = pdVar9 + 6;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar11 = *(int *)(param_1 + 8);
  if (_DAT_00557838 < dVar1) {
    iVar7 = *(int *)(iVar11 + 0xa84);
  }
  else {
    iVar7 = *(int *)(iVar11 + 0xa80);
  }
  iVar7 = iVar7 * 0x20;
  local_1c = iVar7;
  if (*(int *)(&DAT_00574674 + iVar7) != 0) {
    uVar13 = 0;
    if (*(double *)(&DAT_00574680 + iVar7) < dVar1) {
      if (*(double *)(&DAT_00574680 + iVar7) < _DAT_00555908 - dVar1) goto LAB_0048ea13;
      local_18 = _DAT_00555908 - (_DAT_00555908 - dVar1) / *(double *)(&DAT_00574680 + iVar7);
    }
    else {
      local_18 = dVar1 / *(double *)(&DAT_00574680 + iVar7);
      uVar13 = 1;
    }
    uVar13 = ftol(uVar13,SUB84(local_18,0),local_18._4_4_);
    uVar13 = ftol(*(undefined4 *)(iVar11 + 200),uVar13);
    (**(code **)(&DAT_00574674 + iVar7))
              (param_1 + 0x38,param_1 + 0x108,param_1 + 0x1d8,param_1 + 0x2a8,param_1 + 0x378,
               &local_24,param_1 + 0x568,param_1 + 0x56c,uVar13);
  }
LAB_0048ea13:
  local_18 = (double)((ulonglong)local_18 & 0xffffffff00000000);
  if (0 < *(int *)(*(int *)(param_1 + 8) + 0xd1c)) {
    pdVar9 = (double *)(local_2c + 2);
    do {
      if (*(uint *)(pdVar9 + 2) == local_28) {
        iVar11 = *(int *)(pdVar9 + -1);
        if (iVar11 == 0) {
          FUN_0048ebf0(param_2,*(undefined4 *)((int)pdVar9 + -4),(double)local_24 + *pdVar9,
                       (undefined4 *)((int)pdVar9 + 0x14));
        }
        else if (iVar11 == 1) {
          FUN_0048ecf0(param_2,*(undefined4 *)((int)pdVar9 + -4),(double)local_24 + *pdVar9,
                       (undefined4 *)((int)pdVar9 + 0x14));
        }
        else if (iVar11 == 2) {
          _Str = *(wchar_t **)((int)pdVar9 + -4);
          sVar10 = wcslen(_Str);
          FUN_0048ee00(param_2,_Str,_Str + sVar10 + 1,(double)local_24 + *pdVar9,
                       (undefined4 *)((int)pdVar9 + 0x14));
        }
      }
      else {
        iVar7 = local_1c;
        if (local_28 < *(uint *)(pdVar9 + 2)) break;
      }
      iVar11 = (int)(int *)local_18 + 1;
      pdVar9 = pdVar9 + 6;
      local_18 = (double)CONCAT44(local_18._4_4_,iVar11);
      iVar7 = local_1c;
    } while (iVar11 < *(int *)(*(int *)(param_1 + 8) + 0xd1c));
  }
  if (*(code **)(&DAT_00574898 + iVar7) != (code *)0x0) {
    uVar13 = 0;
    if (*(double *)(&DAT_00574688 + iVar7) < dVar1) {
      if (*(double *)(&DAT_00574688 + iVar7) < _DAT_00555908 - dVar1) goto LAB_0048eb7b;
      local_10 = _DAT_00555908 - (_DAT_00555908 - dVar1) / *(double *)(&DAT_00574688 + iVar7);
    }
    else {
      local_10 = dVar1 / *(double *)(&DAT_00574688 + iVar7);
      uVar13 = 1;
    }
    iVar11 = *(int *)(param_1 + 8);
    (**(code **)(&DAT_00574898 + iVar7))
              (*(undefined4 *)(iVar11 + 0xd38),param_2,iVar11 + 0xa50,local_2c,
               *(undefined4 *)(iVar11 + 0xd1c),local_28,uVar13,SUB84(local_10,0),local_10._4_4_);
  }
LAB_0048eb7b:
  if (0 < local_20) {
    local_18 = (double)CONCAT44(local_18._4_4_,local_20);
    puVar6 = local_2c + 1;
    do {
      pMem = (LPCVOID)*puVar6;
      if (pMem != (LPCVOID)0x0) {
        pvVar5 = GlobalHandle(pMem);
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(pMem);
        GlobalFree(pvVar5);
      }
      puVar6 = puVar6 + 0xc;
      iVar11 = (int)(int *)local_18 + -1;
      local_18 = (double)CONCAT44(local_18._4_4_,iVar11);
    } while (iVar11 != 0);
  }
  puVar6 = local_2c;
  pvVar5 = GlobalHandle(local_2c);
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle(puVar6);
  GlobalFree(pvVar5);
  return;
}


