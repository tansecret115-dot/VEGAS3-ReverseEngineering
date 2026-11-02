/* Module: erv13260.dll
   Function: FUN_635f49e0
   Address: 635f49e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_635f49e0(undefined4 param_1,byte *param_2,int param_3)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  FILE *pFVar10;
  byte *pbVar11;
  byte bVar12;
  int iVar13;
  byte bVar14;
  char *pcVar15;
  int *piVar16;
  undefined4 *puVar17;
  bool bVar18;
  
  switch(param_1) {
  case 1:
    piVar16 = (int *)(param_3 + 0x14);
    for (iVar13 = 0x11; iVar13 != 0; iVar13 = iVar13 + -1) {
      *piVar16 = *(int *)param_2;
      param_2 = param_2 + 4;
      piVar16 = piVar16 + 1;
    }
    *(undefined2 *)piVar16 = *(undefined2 *)param_2;
    *(uint *)(param_3 + 0x1c) = (uint)(*(int *)(param_3 + 0x14) * *(int *)(param_3 + 0x18)) / 1000;
    uVar8 = ftol();
    *(undefined4 *)(param_3 + 0x4a) = uVar8;
    if (*(int *)(param_3 + 0x56) != 0) {
      uVar9 = FUN_635f6f30();
      *(uint *)(param_3 + 0x1d6b) = uVar9;
      if (uVar9 < *(uint *)(param_3 + 0x4a)) {
        *(uint *)(param_3 + 0x1d6b) = *(uint *)(param_3 + 0x4a);
      }
    }
    puVar1 = (uint *)(param_3 + 0x14);
    if (*(int *)(param_3 + 0x52) != 0) {
      iVar13 = FUN_635f6f30();
      uVar9 = (uint)(iVar13 * 3) >> 2;
      *(uint *)(param_3 + 0x1d6b) = uVar9;
      if (uVar9 < *(uint *)(param_3 + 0x4a)) {
        *(uint *)(param_3 + 0x1d6b) = *(uint *)(param_3 + 0x4a);
      }
    }
    dVar2 = _DAT_636040d0;
    if (*puVar1 < 22000) {
      if (*(int *)(param_3 + 0x31) == 0) {
        *(undefined1 *)(param_3 + 0x1d52) = 10;
        *(undefined1 *)(param_3 + 0x1d51) = 0x14;
        *(undefined1 *)(param_3 + 0x1d53) = 0xf;
        if ((*(int *)(param_3 + 0x56) == 0) && (*(int *)(param_3 + 0x52) == 0)) {
          if ((0xc4 < *(uint *)(param_3 + 0x23cb)) && (0x90 < *(uint *)(param_3 + 0x23cf))) {
            *(undefined1 *)(param_3 + 0x1d53) = 0x14;
            *(undefined1 *)(param_3 + 0x1d51) = 0x1f;
          }
        }
        else {
          *(undefined1 *)(param_3 + 0x1d53) = 10;
        }
        goto LAB_635f4fa2;
      }
      *(undefined1 *)(param_3 + 0x1d52) = 8;
      *(undefined1 *)(param_3 + 0x1d51) = 0x14;
      *(undefined1 *)(param_3 + 0x1d53) = 0xf;
      dVar3 = _DAT_636040d8;
      param_2._0_1_ = '\x12';
      if ((*(int *)(param_3 + 0x56) == 0) && (*(int *)(param_3 + 0x52) == 0)) {
        if ((0xc4 < *(uint *)(param_3 + 0x23cb)) && (0x90 < *(uint *)(param_3 + 0x23cf))) {
          *(undefined1 *)(param_3 + 0x1d53) = 0x14;
          *(undefined1 *)(param_3 + 0x1d51) = 0x1f;
          param_2._0_1_ = '\x17';
          dVar2 = dVar3;
        }
      }
      else {
        *(undefined1 *)(param_3 + 0x1d53) = 10;
      }
      *(undefined4 *)(param_3 + 0x1d08) = 0;
      *(undefined4 *)(param_3 + 0x1d10) = 0;
      *(undefined4 *)(param_3 + 0x1d0c) = 0x40270000;
      *(undefined4 *)(param_3 + 0x1d14) = 0x40080000;
      if ((0xc4 < *(uint *)(param_3 + 0x23cb)) && (0x90 < *(uint *)(param_3 + 0x23cf))) {
        *(undefined4 *)(param_3 + 0x1d10) = 0xf4b1ee24;
        *(undefined4 *)(param_3 + 0x1d14) = 0x40068ba1;
      }
      *(double *)(param_3 + 0x1d18) = _DAT_636040e8 - _DAT_636040e0 / *(double *)(param_3 + 0x1d10);
      if (0x32 < *(byte *)(param_3 + 0x30)) {
        *(undefined1 *)(param_3 + 0x1d51) = 0x1f;
        dVar3 = (double)*(byte *)(param_3 + 0x30);
        goto LAB_635f4f0e;
      }
      if (0x31 < *(byte *)(param_3 + 0x30)) goto LAB_635f4fa2;
      cVar6 = ftol();
      *(char *)(param_3 + 0x1d51) = (char)param_2 - cVar6;
      *(undefined4 *)(param_3 + 0x1d4c) = 1;
      dVar2 = (double)*(byte *)(param_3 + 0x1d51);
    }
    else if (*puVar1 < 55000) {
      *(undefined1 *)(param_3 + 0x1d52) = 5;
      dVar2 = _DAT_63604100;
      if (*(int *)(param_3 + 0x31) == 0) {
        *(undefined1 *)(param_3 + 0x1d51) = 0x14;
        *(undefined1 *)(param_3 + 0x1d53) = 10;
        if ((*(int *)(param_3 + 0x56) == 0) && (*(int *)(param_3 + 0x52) == 0)) {
          if ((0xc4 < *(uint *)(param_3 + 0x23cb)) && (0x90 < *(uint *)(param_3 + 0x23cf))) {
            *(undefined1 *)(param_3 + 0x1d51) = 0x1f;
            *(undefined1 *)(param_3 + 0x1d53) = 0xf;
          }
        }
        else {
          *(undefined1 *)(param_3 + 0x1d53) = 7;
        }
        goto LAB_635f4fa2;
      }
      *(undefined1 *)(param_3 + 0x1d51) = 0x19;
      *(undefined1 *)(param_3 + 0x1d53) = 10;
      dVar3 = _DAT_63604108;
      param_2._0_1_ = '\x0f';
      if ((*(int *)(param_3 + 0x56) == 0) && (*(int *)(param_3 + 0x52) == 0)) {
        if ((0xc4 < *(uint *)(param_3 + 0x23cb)) && (0x90 < *(uint *)(param_3 + 0x23cf))) {
          *(undefined1 *)(param_3 + 0x1d53) = 0xf;
          *(undefined1 *)(param_3 + 0x1d51) = 0x1f;
          param_2._0_1_ = '\x14';
          dVar2 = dVar3;
        }
      }
      else {
        *(undefined1 *)(param_3 + 0x1d53) = 7;
      }
      *(undefined4 *)(param_3 + 0x1d08) = 0;
      *(undefined4 *)(param_3 + 0x1d10) = 0;
      *(undefined4 *)(param_3 + 0x1d0c) = 0x40280000;
      *(undefined4 *)(param_3 + 0x1d14) = 0x400c0000;
      if ((0xc4 < *(uint *)(param_3 + 0x23cb)) && (0x90 < *(uint *)(param_3 + 0x23cf))) {
        *(undefined4 *)(param_3 + 0x1d10) = 0xf4b1ee24;
        *(undefined4 *)(param_3 + 0x1d14) = 0x40068ba1;
      }
      *(double *)(param_3 + 0x1d18) = _DAT_63604110 - _DAT_636040e0 / *(double *)(param_3 + 0x1d10);
      if (0x32 < *(byte *)(param_3 + 0x30)) {
        *(undefined1 *)(param_3 + 0x1d51) = 0x1f;
        dVar3 = (double)*(byte *)(param_3 + 0x30);
        goto LAB_635f4f0e;
      }
      if (0x31 < *(byte *)(param_3 + 0x30)) goto LAB_635f4fa2;
      cVar6 = ftol();
      *(char *)(param_3 + 0x1d51) = (char)param_2 - cVar6;
      *(undefined4 *)(param_3 + 0x1d4c) = 1;
      dVar2 = (double)*(byte *)(param_3 + 0x1d51);
    }
    else {
      *(undefined1 *)(param_3 + 0x1d52) = 2;
      *(undefined1 *)(param_3 + 0x1d51) = 0x19;
      *(undefined1 *)(param_3 + 0x1d53) = 8;
      if (((0xc3 < *(uint *)(param_3 + 0x23cb)) && (0x8f < *(uint *)(param_3 + 0x23cf))) &&
         (0x1e848 < *puVar1)) {
        *(undefined1 *)(param_3 + 0x1d53) = 4;
      }
      dVar3 = _DAT_63604120;
      dVar2 = _DAT_63604118;
      if ((*(int *)(param_3 + 0x56) == 0) && (*(int *)(param_3 + 0x52) == 0)) {
        if (((0xc3 < *(uint *)(param_3 + 0x23cb)) && (0x8f < *(uint *)(param_3 + 0x23cf))) &&
           (*puVar1 < 0x1e848)) {
          *(undefined1 *)(param_3 + 0x1d53) = 0xf;
          *(undefined1 *)(param_3 + 0x1d51) = 0x1f;
          dVar2 = dVar3;
        }
      }
      else {
        *(undefined1 *)(param_3 + 0x1d53) = 5;
      }
      fVar5 = (float)_DAT_63604128;
      fVar4 = (float)_DAT_636040e0;
      *(double *)(param_3 + 0x1d08) = (double)*(float *)(param_3 + 0x28);
      *(double *)(param_3 + 0x1d10) = (double)(fVar4 / (*(float *)(param_3 + 0x28) - fVar5));
      if (((0xc4 < *(uint *)(param_3 + 0x23cb)) && (0x90 < *(uint *)(param_3 + 0x23cf))) &&
         (*puVar1 < 0x1e848)) {
        *(double *)(param_3 + 0x1d10) =
             _DAT_636040e0 / (*(double *)(param_3 + 0x1d08) - _DAT_63604130);
      }
      *(double *)(param_3 + 0x1d18) =
           *(double *)(param_3 + 0x1d08) - _DAT_636040e0 / *(double *)(param_3 + 0x1d10);
      if (0x32 < *(byte *)(param_3 + 0x30)) {
        *(undefined1 *)(param_3 + 0x1d51) = 0x1f;
        dVar3 = (double)*(byte *)(param_3 + 0x30);
LAB_635f4f0e:
        dVar2 = *(double *)(param_3 + 0x1d18) -
                (dVar3 - _DAT_636040f0) * (dVar2 - *(double *)(param_3 + 0x1d18)) * _DAT_636040f8;
        dVar3 = _DAT_636040e0 / (*(double *)(param_3 + 0x1d08) - dVar2);
        *(double *)(param_3 + 0x1d18) = dVar2;
        *(double *)(param_3 + 0x1d10) = dVar3;
        goto LAB_635f4fa2;
      }
      if (0x31 < *(byte *)(param_3 + 0x30)) goto LAB_635f4fa2;
      cVar6 = ftol();
      *(char *)(param_3 + 0x1d51) = '\x0f' - cVar6;
      *(undefined4 *)(param_3 + 0x1d4c) = 1;
      dVar2 = (double)*(byte *)(param_3 + 0x1d51);
    }
    *(double *)(param_3 + 0x1d08) =
         *(double *)(param_3 + 0x1d08) - (_DAT_636040e0 - dVar2) / *(double *)(param_3 + 0x1d10);
LAB_635f4fa2:
    *(undefined1 *)(param_3 + 0x1d59) = *(undefined1 *)(param_3 + 0x1d53);
    *(undefined1 *)(param_3 + 0x1d5a) = *(undefined1 *)(param_3 + 0x1d50);
    *(undefined4 *)(param_3 + 0x1ce4) = 1;
    *(undefined4 *)(param_3 + 0x1ce8) = 1;
    *(undefined4 *)(param_3 + 0x1ce0) = 1;
    *(undefined4 *)(param_3 + 0x1cec) = 1;
    if (((((42999 < *puVar1) && (0xef < *(uint *)(param_3 + 0x23cb))) &&
         (0xaf < *(uint *)(param_3 + 0x23cf))) || (89999 < *puVar1)) &&
       (*(undefined4 *)(param_3 + 0x1ce4) = 0, *(int *)(param_3 + 0x3e) != 0)) {
      *(undefined4 *)(param_3 + 0x20) = 0x10003001;
    }
    if (*(int *)(param_3 + 0x3e) == 0) {
      *(undefined4 *)(param_3 + 0x20) = 0x30000000;
    }
    if ((*(int *)(param_3 + 0x3a) == 0) && (*(int *)(param_3 + 0x3e) == 0)) {
      switch(*(undefined1 *)(param_3 + 0x39)) {
      case 1:
        *(undefined4 *)(param_3 + 0x1cf4) = 3;
        break;
      default:
        iVar13 = ftol();
        *(int *)(param_3 + 0x1cf4) = 0xf - iVar13;
        break;
      case 0x19:
        *(undefined4 *)(param_3 + 0x1cf4) = 7;
        break;
      case 0x32:
        *(undefined4 *)(param_3 + 0x1cf4) = 10;
        break;
      case 0x4b:
        *(undefined4 *)(param_3 + 0x1cf4) = 0xd;
        break;
      case 100:
        *(undefined4 *)(param_3 + 0x1cf4) = 0xf;
      }
    }
    if ((*(int *)(param_3 + 0x3a) == 0) && (*(int *)(param_3 + 0x3e) != 0)) {
      if (*(char *)(param_3 + 0x39) == '\x01') {
        *(undefined4 *)(param_3 + 0x1cf4) = 3;
      }
      else if (*(char *)(param_3 + 0x39) == '\x19') {
        *(undefined4 *)(param_3 + 0x1cf4) = 7;
      }
      else {
        iVar13 = ftol();
        *(uint *)(param_3 + 0x1cf4) = 0xfU - iVar13;
        if (7 < 0xfU - iVar13) {
          *(undefined4 *)(param_3 + 0x1cf4) = 7;
        }
      }
    }
    *(uint *)(param_3 + 0x1c) = (*puVar1 * *(int *)(param_3 + 0x18)) / 1000;
    return 1;
  case 2:
    puVar17 = (undefined4 *)(param_3 + 0x1d83);
    for (iVar13 = 0x192; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar17 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      puVar17 = puVar17 + 1;
    }
    if (*(int *)(param_3 + 0x1d8f) != 0) {
      pFVar10 = fopen((char *)(param_3 + 0x20a3),&DAT_63606188);
      *(FILE **)(param_3 + 0x23c3) = pFVar10;
      if (pFVar10 == (FILE *)0x0) {
        fprintf((FILE *)(_iob_exref + 0x20),s_error_opening_Excel_input_file_63606168);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    if (*(int *)(param_3 + 0x1d93) != 0) {
      pFVar10 = fopen((char *)(param_3 + 0x1f9f),&DAT_63606188);
      *(FILE **)(param_3 + 0x23c7) = pFVar10;
      if (pFVar10 == (FILE *)0x0) {
        fprintf((FILE *)(_iob_exref + 0x20),s_error_opening_Excel_input_file_63606168);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    if (*(int *)(param_3 + 0x1d87) != 0) {
      pFVar10 = fopen((char *)(param_3 + 0x21a7),&DAT_63606164);
      *(FILE **)(param_3 + 0x23bb) = pFVar10;
      if (pFVar10 == (FILE *)0x0) {
        fprintf((FILE *)(_iob_exref + 0x20),s_error_opening_outputfile_63606148);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    if (*(int *)(param_3 + 0x1d8b) != 0) {
      pcVar15 = s_stdout_63606140;
      pbVar11 = (byte *)(param_3 + 0x22ab);
      do {
        bVar14 = *pbVar11;
        bVar18 = bVar14 < (byte)*pcVar15;
        if (bVar14 != *pcVar15) {
LAB_635f5265:
          iVar13 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_635f526a;
        }
        if (bVar14 == 0) break;
        bVar14 = pbVar11[1];
        bVar18 = bVar14 < (byte)pcVar15[1];
        if (bVar14 != pcVar15[1]) goto LAB_635f5265;
        pbVar11 = pbVar11 + 2;
        pcVar15 = pcVar15 + 2;
      } while (bVar14 != 0);
      iVar13 = 0;
LAB_635f526a:
      if (iVar13 == 0) {
        *(code **)(param_3 + 0x23bf) = _iob_exref + 0x20;
        return 1;
      }
      pFVar10 = fopen((char *)(param_3 + 0x22ab),&DAT_63606164);
      *(FILE **)(param_3 + 0x23bf) = pFVar10;
      if (pFVar10 == (FILE *)0x0) {
        fprintf((FILE *)(_iob_exref + 0x20),s_error_opening_outputfile_63606148);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    break;
  case 3:
    bVar14 = *param_2;
    bVar7 = bVar14;
    if (bVar14 == 0) {
      bVar7 = 1;
    }
    if (bVar7 < 0x20) {
      if (bVar14 == 0) {
        bVar14 = 1;
      }
    }
    else {
      bVar14 = 0x1f;
    }
    *(byte *)(param_3 + 0x1d50) = bVar14;
    bVar7 = param_2[1];
    bVar12 = bVar7;
    if (bVar7 == 0) {
      bVar12 = 1;
    }
    if (bVar12 < 0x20) {
      if (bVar7 == 0) {
        bVar7 = 1;
      }
    }
    else {
      bVar7 = 0x1f;
    }
    *(byte *)(param_3 + 0x1d51) = bVar7;
    bVar7 = param_2[2];
    bVar12 = bVar7;
    if (bVar7 == 0) {
      bVar12 = 1;
    }
    if (bVar12 < 0x20) {
      if (bVar7 == 0) {
        bVar7 = 1;
      }
    }
    else {
      bVar7 = 0x1f;
    }
    *(byte *)(param_3 + 0x1d52) = bVar7;
    bVar7 = param_2[3];
    bVar12 = bVar7;
    if (bVar7 == 0) {
      bVar12 = 1;
    }
    if (bVar12 < 0x20) {
      if (bVar7 == 0) {
        bVar7 = 1;
      }
    }
    else {
      bVar7 = 0x1f;
    }
    *(byte *)(param_3 + 0x1d53) = bVar7;
    *(byte *)(param_3 + 0x1d59) = bVar7;
    *(byte *)(param_3 + 0x1d5a) = bVar14;
    return 1;
  case 4:
    puVar17 = (undefined4 *)(param_3 + 0x1d67);
    for (iVar13 = 7; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar17 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      puVar17 = puVar17 + 1;
    }
    return 1;
  case 5:
    *(undefined4 *)(param_3 + 0x1d5f) = *(undefined4 *)param_2;
    return 1;
  case 6:
    *(undefined4 *)(param_3 + 0x1c8c) = *(undefined4 *)(param_2 + 1);
    DAT_63623344 = *(int *)(param_2 + 1) << 1;
    _DAT_63623354 = *(uint *)(param_2 + 1) >> 1;
    return 1;
  case 7:
    if (*(int *)param_2 == 0) {
      *(undefined4 *)(param_3 + 0x1ce8) = 0;
      *(undefined4 *)(param_3 + 0x1cec) = 0;
      *(undefined4 *)(param_3 + 0x1ce0) = 0;
    }
    else {
      *(undefined4 *)(param_3 + 0x1ce8) = 1;
      *(undefined4 *)(param_3 + 0x1cec) = 1;
      *(undefined4 *)(param_3 + 0x1ce0) = 1;
    }
    if (*(int *)(param_2 + 4) == 0) {
      *(undefined4 *)(param_3 + 0x1ce4) = 0;
    }
    else {
      *(undefined4 *)(param_3 + 0x1ce4) = 1;
      *(undefined4 *)(param_3 + 0x1ce8) = 1;
    }
    uVar9 = *(uint *)(param_2 + 0x14);
    *(uint *)(param_3 + 0x1cf4) = uVar9;
    if ((uVar9 == 0) || (0xf < uVar9)) {
      *(undefined4 *)(param_3 + 0x1cf4) = 0xf;
    }
  }
  return 1;
}


