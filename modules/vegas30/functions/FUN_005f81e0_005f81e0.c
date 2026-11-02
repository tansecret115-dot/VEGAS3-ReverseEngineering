/* Module: vegas30.exe
   Function: FUN_005f81e0
   Address: 005f81e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005f845c) */
/* WARNING: Removing unreachable block (ram,0x005f82b5) */
/* WARNING: Removing unreachable block (ram,0x005f8470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005f81e0(void)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  HGLOBAL hMem;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int *piVar12;
  short *psVar13;
  undefined4 extraout_EDX;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  short sStack0000000c;
  short sStack0000000e;
  undefined4 in_stack_00000010;
  float in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  double *in_stack_0001811c;
  int in_stack_00018130;
  undefined4 *in_stack_0001813c;
  
  FUN_0060ac30();
  *in_stack_0001813c = 0;
  in_stack_0001813c[1] = 0x3ff00000;
  if ((*(int *)(in_stack_00018130 + 0x18) == 0) || (iVar4 = FUN_005f13f0(2), iVar4 == 0)) {
    return -0x7fff0001;
  }
  in_stack_00000010 = 0;
  uVar1 = *(ushort *)(*(int *)(iVar4 + 0x2c) + 2);
  ftol();
  in_stack_00000010 = extraout_EDX;
  lVar18 = ftol();
  uVar19 = ftol();
  in_stack_00000010 = (undefined4)((ulonglong)uVar19 >> 0x20);
  lVar20 = ftol();
  iVar17 = (int)((ulonglong)lVar20 >> 0x20);
  if (lVar20 < 1) {
    return 1;
  }
  piVar6 = *(int **)(iVar4 + 0x60);
  if (piVar6 != (int *)0x0) {
    puVar16 = (undefined4 *)&stack0x0000002c;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    }
    iVar4 = (**(code **)(*piVar6 + 0x34))(piVar6,lVar18,lVar20,&stack0x0000002c,2,&stack0x00000000);
    if ((-1 < iVar4) && (iVar17 == 2)) {
      uVar14 = (uint)uVar1 * 2;
      sStack0000000c = (short)uVar19;
      sStack0000000e = (short)((ulonglong)uVar19 >> 0x10);
      if (1 < uVar14) {
        psVar13 = (short *)&stack0x00000010;
        iVar17 = uVar14 - 1;
        do {
          if (sStack0000000e <= psVar13[1]) {
            sStack0000000e = psVar13[1];
          }
          if (*psVar13 <= sStack0000000c) {
            sStack0000000c = *psVar13;
          }
          psVar13 = psVar13 + 2;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      uVar14 = (int)sStack0000000c >> 0x1f;
      iVar10 = ((int)sStack0000000c ^ uVar14) - uVar14;
      uVar14 = (int)sStack0000000e >> 0x1f;
      iVar17 = ((int)sStack0000000e ^ uVar14) - uVar14;
      if (iVar17 <= iVar10) {
        iVar17 = iVar10;
      }
      *in_stack_0001811c = (double)iVar17 * _DAT_00612998;
    }
    return iVar4;
  }
  hMem = GlobalAlloc(0x40,0x28);
  pvVar5 = GlobalLock(hMem);
  if ((pvVar5 == (LPVOID)0x0) || (piVar6 = (int *)FUN_0058f810(iVar4), piVar6 == (int *)0x0)) {
    return -0x7ff8fff2;
  }
  in_stack_00000018 = (**(code **)(*piVar6 + 0x14))();
  in_stack_00000028 = _SfAudio_GetSampleType_4(in_stack_00000018);
  iVar4 = (**(code **)(*piVar6 + 4))();
  if (iVar4 < 0) {
    (**(code **)*piVar6)(1);
    return iVar4;
  }
  iVar4 = (int)(0x18000 / (ulonglong)(longlong)(int)(uint)*(ushort *)(in_stack_00000018 + 0xc));
  _uStack00000004 = 0.0;
  in_stack_00000010 = 0;
  while( true ) {
    iVar10 = (int)lVar20;
    iVar17 = iVar4;
    if (lVar20 < CONCAT44(in_stack_00000010,iVar4)) {
      iVar17 = iVar10;
    }
    iVar7 = iVar10;
    if (0xfffffff < lVar20) {
      iVar7 = 0x10000000;
    }
    _in_stack_0000001c = lVar18;
    iVar7 = (**(code **)(*piVar6 + 8))(lVar18,iVar7,&stack0x0000012c,iVar17,&stack0x00000000);
    in_stack_00000024 = iVar7;
    lVar18 = _in_stack_0000001c;
    if ((iVar7 < 0) || (iVar17 < 1)) break;
    lVar18 = _in_stack_0000001c + iVar17;
    lVar3 = lVar20 - iVar17;
    _in_stack_0000001c = lVar18;
    lVar2 = lVar20 - iVar17;
    if (in_stack_00000028 == 0x11) {
      iVar15 = 0;
      iVar9 = (uint)*(ushort *)(in_stack_00000018 + 2) * iVar17;
      iVar8 = 0;
      if (0 < iVar9) {
        psVar13 = (short *)&stack0x0000012c;
        do {
          iVar8 = (int)*psVar13;
          if (iVar8 < 0) {
            iVar8 = -iVar8;
          }
          if (iVar15 < iVar8) {
            iVar15 = iVar8;
          }
          psVar13 = psVar13 + 1;
          iVar9 = iVar9 + -1;
          iVar8 = iVar15;
        } while (iVar9 != 0);
      }
LAB_005f85c9:
      if (_uStack00000004 <= (double)iVar8 * _DAT_00612998) {
        _uStack00000004 = (double)iVar8 * _DAT_00612998;
      }
    }
    else {
      if (in_stack_00000028 == 0x13) {
        iVar15 = 0;
        iVar9 = (uint)*(ushort *)(in_stack_00000018 + 2) * iVar17;
        iVar8 = 0;
        if (0 < iVar9) {
          piVar12 = (int *)&stack0x0000012c;
          do {
            iVar8 = *piVar12;
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            if (iVar15 < iVar8) {
              iVar15 = iVar8;
            }
            piVar12 = piVar12 + 1;
            iVar9 = iVar9 + -1;
            iVar8 = iVar15;
          } while (iVar9 != 0);
        }
        goto LAB_005f85c9;
      }
      if (in_stack_00000028 == 0x20) {
        in_stack_00000014 = 0.0;
        in_stack_00000014 = 0.0;
        iVar8 = (uint)*(ushort *)(in_stack_00000018 + 2) * iVar17;
        if (0 < iVar8) {
          pfVar11 = (float *)&stack0x0000012c;
          do {
            if ((uint)in_stack_00000014 < (uint)ABS(*pfVar11)) {
              in_stack_00000014 = ABS(*pfVar11);
            }
            pfVar11 = pfVar11 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        if ((float)_uStack00000004 <= in_stack_00000014) {
          _uStack00000004 = (double)in_stack_00000014;
        }
      }
    }
    lVar20 = lVar20 - iVar17;
    if (((int)((ulonglong)lVar3 >> 0x20) < 1) && ((lVar3 < 0 || (lVar20 = lVar2, iVar10 == iVar17)))
       ) break;
  }
  if (_DAT_00610fd8 < _uStack00000004) {
    *in_stack_0001813c = uStack00000004;
    in_stack_0001813c[1] = uStack00000008;
  }
  _in_stack_0000001c = lVar18;
  (**(code **)(*piVar6 + 0x10))();
  (**(code **)*piVar6)(1);
  return iVar7;
}


