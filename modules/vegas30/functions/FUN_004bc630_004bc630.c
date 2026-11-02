/* Module: vegas30.exe
   Function: FUN_004bc630
   Address: 004bc630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004bd75c) */
/* WARNING: Removing unreachable block (ram,0x004bc7b4) */
/* WARNING: Removing unreachable block (ram,0x004bc7b6) */
/* WARNING: Removing unreachable block (ram,0x004bdf43) */
/* WARNING: Removing unreachable block (ram,0x004bdf50) */
/* WARNING: Removing unreachable block (ram,0x004bdf5a) */
/* WARNING: Removing unreachable block (ram,0x004bdf83) */
/* WARNING: Removing unreachable block (ram,0x004bdfb8) */
/* WARNING: Removing unreachable block (ram,0x004bdfba) */
/* WARNING: Removing unreachable block (ram,0x004bdfc9) */
/* WARNING: Removing unreachable block (ram,0x004bdfcd) */
/* WARNING: Removing unreachable block (ram,0x004bdfcf) */
/* WARNING: Removing unreachable block (ram,0x004bdfd7) */
/* WARNING: Removing unreachable block (ram,0x004bdfc2) */
/* WARNING: Removing unreachable block (ram,0x004bdf7e) */
/* WARNING: Removing unreachable block (ram,0x004bdfdc) */
/* WARNING: Removing unreachable block (ram,0x004bce34) */
/* WARNING: Removing unreachable block (ram,0x004bce41) */
/* WARNING: Removing unreachable block (ram,0x004bce5e) */
/* WARNING: Removing unreachable block (ram,0x004bce93) */
/* WARNING: Removing unreachable block (ram,0x004bce95) */
/* WARNING: Removing unreachable block (ram,0x004bcea4) */
/* WARNING: Removing unreachable block (ram,0x004bcea8) */
/* WARNING: Removing unreachable block (ram,0x004bceaa) */
/* WARNING: Removing unreachable block (ram,0x004bceb2) */
/* WARNING: Removing unreachable block (ram,0x004bce9d) */
/* WARNING: Removing unreachable block (ram,0x004bce59) */
/* WARNING: Removing unreachable block (ram,0x004bceb7) */
/* WARNING: Removing unreachable block (ram,0x004bc7ba) */
/* WARNING: Removing unreachable block (ram,0x004bcb66) */
/* WARNING: Removing unreachable block (ram,0x004bcb50) */
/* WARNING: Removing unreachable block (ram,0x004bcc08) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004bc630(void)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  SHORT SVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  HGLOBAL pvVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  SIZE_T SVar18;
  uchar *_Dest;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 uVar22;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  int iStack0000001c;
  int iStack00000028;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000158;
  uint in_stack_00000260;
  uint in_stack_00000264;
  int in_stack_00001f28;
  int in_stack_00001f2c;
  uint in_stack_00001f30;
  undefined4 *in_stack_00001f38;
  WPARAM wParam;
  UINT uFlags;
  
  FUN_0060ac30();
  piVar10 = *(int **)(in_stack_00001f2c + 0x3c);
  if (piVar10 == (int *)0x0) {
    piVar10 = *(int **)(in_stack_00001f28 + 0xc38);
  }
  uVar20 = *(uint *)(in_stack_00001f2c + 0x20) >> 0x10 & 0xf;
  iStack0000000c = 0;
  if (in_stack_00001f30 < 0xa16d) {
    if (0xa16a < in_stack_00001f30) {
      if (in_stack_00001f38 == (undefined4 *)0x0) {
        return 0;
      }
      if (in_stack_00001f30 == 0xa16b) {
        FUN_00453970();
        return 0;
      }
      FUN_00453970();
      return 0;
    }
    if (in_stack_00001f30 < 0xa158) {
      if (in_stack_00001f30 == 0xa157) goto switchD_004bcc98_caseD_a15c;
      if (in_stack_00001f30 < 0x9e3a) {
        if (in_stack_00001f30 < 0x9e36) {
          if (in_stack_00001f30 == 0x1465) {
            iVar11 = FUN_004e4c90();
            if (iVar11 != in_stack_00001f28) {
              return 0;
            }
            FUN_004dd440();
            return 0;
          }
          if (in_stack_00001f30 != 0x9d7a) {
            if (in_stack_00001f30 != 0x9dd4) {
              return 0;
            }
            FUN_00458dc0();
            return 0;
          }
          FUN_00458480();
          return 0;
        }
        goto LAB_004bdcaa;
      }
      if (0x9ffc < in_stack_00001f30) {
        if (in_stack_00001f30 < 0xa155) {
          return 0;
        }
        if (0xa156 < in_stack_00001f30) {
          return 0;
        }
        if (*(int *)(in_stack_00001f28 + 0xbc8) == 0) {
          lVar21 = *(longlong *)(in_stack_00001f28 + 0x600);
        }
        else {
          lVar21 = FUN_005b8d80();
        }
        if (_DAT_00610fd8 != *(double *)(in_stack_00001f28 + 0x1c0)) {
          ftol();
          ftol();
        }
        if ((lVar21 != 0) && (in_stack_00001f30 == 0xa156)) {
          lVar8 = *(longlong *)(in_stack_00001f28 + 0xb90);
          lVar7 = *(longlong *)(in_stack_00001f28 + 0xb90);
          uVar22 = ftol();
          iVar11 = *(uint *)(in_stack_00001f28 + 0xb88) - (uint)uVar22;
          iVar19 = (*(int *)(in_stack_00001f28 + 0xb8c) - (int)((ulonglong)uVar22 >> 0x20)) -
                   (uint)(*(uint *)(in_stack_00001f28 + 0xb88) < (uint)uVar22);
          if ((iVar19 < 1) && (iVar19 < 0)) {
            lVar6 = 0;
          }
          else {
            lVar6 = CONCAT44(iVar19,iVar11);
            if (lVar21 < CONCAT44(iVar19,iVar11)) {
              lVar6 = lVar21;
            }
          }
          if (lVar21 - lVar6 <= lVar8) {
            lVar7 = lVar21 - lVar6;
          }
          if (lVar6 != *(longlong *)(in_stack_00001f28 + 0xb48)) {
            if (lVar7 != *(longlong *)(in_stack_00001f28 + 0xb50)) {
              *(undefined4 *)(in_stack_00001f28 + 0xb60) =
                   *(undefined4 *)(in_stack_00001f28 + 0xb48);
              *(undefined4 *)(in_stack_00001f28 + 0xb68) =
                   *(undefined4 *)(in_stack_00001f28 + 0xb50);
              *(undefined4 *)(in_stack_00001f28 + 0xb64) =
                   *(undefined4 *)(in_stack_00001f28 + 0xb4c);
              *(undefined4 *)(in_stack_00001f28 + 0xb6c) =
                   *(undefined4 *)(in_stack_00001f28 + 0xb54);
            }
          }
        }
        if ((DAT_00647794 != 2) &&
           ((DAT_00647794 != 1 ||
            (*(int *)(in_stack_00001f28 + 0xb78) == 0 && *(int *)(in_stack_00001f28 + 0xb7c) == 0)))
           ) {
          FUN_00454140();
          return 0;
        }
        FUN_00453a50();
        return 0;
      }
      if (in_stack_00001f30 < 0x9ffb) {
        if (in_stack_00001f30 < 0x9e3e) {
          return 0;
        }
        if (0x9e4e < in_stack_00001f30) {
          return 0;
        }
        goto LAB_004bdcaa;
      }
      if (piVar10 == (int *)0x0) {
        iStack00000028 = 0;
      }
      else {
        iStack00000028 = *piVar10;
      }
      iVar11 = FUN_004e4c90();
      if (in_stack_00001f30 == 0x9ffc) {
        FUN_00458260();
      }
      iVar19 = 0;
      iStack00000008 = 0;
      iStack0000000c = 0;
      if (*(int *)(in_stack_00001f28 + 0xbc8) != 0) {
        if (uVar20 == 10) {
          iVar19 = 0x3f;
          iStack0000000c = 5;
          iStack00000008 = 0x3f;
        }
        else if (uVar20 == 0xb) {
          iVar19 = 0x45;
          iStack0000000c = 7;
          iStack00000008 = 0x45;
        }
        else if (uVar20 == 0xc) {
          iVar19 = 0x24d;
          iStack0000000c = 9;
          iStack00000008 = 0x24d;
        }
        else {
          iVar19 = 5;
          iStack0000000c = 3;
          iStack00000008 = 5;
        }
        FUN_004e9f70();
      }
      bVar5 = false;
      while (iStack00000028 = iStack00000028 + -1, -1 < iStack00000028) {
        puVar1 = *(uint **)(piVar10[2] + iStack00000028 * 4);
        uVar20 = puVar1[1];
        iVar19 = iStack00000008;
        if (((-1 < (int)uVar20) && ((int)uVar20 < 0x20000000)) ||
           ((iVar12 = puVar1[3] + uVar20 + (uint)CARRY4(puVar1[2],*puVar1), -1 < iVar12 &&
            ((iVar12 < 0x20000001 && (iVar12 < 0x20000000)))))) {
          if ((!bVar5) &&
             (((*(int *)(in_stack_00001f28 + 0xbc8) != 0 && (iStack00000008 != 0)) &&
              (iStack0000000c != 0)))) {
            FUN_004ead60();
          }
          bVar5 = true;
          if ((LPCVOID)puVar1[9] != (LPCVOID)0x0) {
            pvVar13 = GlobalHandle((LPCVOID)puVar1[9]);
            GlobalUnlock(pvVar13);
            pvVar13 = GlobalHandle((LPCVOID)puVar1[9]);
            GlobalFree(pvVar13);
          }
          if ((LPCVOID)puVar1[10] != (LPCVOID)0x0) {
            pvVar13 = GlobalHandle((LPCVOID)puVar1[10]);
            GlobalUnlock(pvVar13);
            pvVar13 = GlobalHandle((LPCVOID)puVar1[10]);
            GlobalFree(pvVar13);
          }
          _SfList_DeleteList_16();
        }
      }
      if (((*(int *)(in_stack_00001f28 + 0xbc8) != 0) && (iVar19 != 0)) && (iStack0000000c != 0)) {
        if (bVar5) {
          FUN_004eb2b0();
        }
        FUN_004ea040();
        *(uint *)**(undefined4 **)(in_stack_00001f28 + 0xbc8) =
             *(uint *)**(undefined4 **)(in_stack_00001f28 + 0xbc8) | 0x10000;
      }
      if ((iVar11 != in_stack_00001f28) || (!bVar5)) goto LAB_004bd00c;
    }
    else {
      switch(in_stack_00001f30) {
      case 0xa158:
        goto LAB_004bdcfb;
      case 0xa159:
        iVar11 = 0;
        if (in_stack_00001f38 == (undefined4 *)0x0) {
          return 0;
        }
        iVar19 = _SfList_FindSpecificItemRange_16();
        if (iVar19 < 0) {
          return 0;
        }
        iVar19 = FUN_004e4c90();
        iStack00000008 = 0;
        if (*(int *)(in_stack_00001f28 + 0xbc8) != 0) {
          if (uVar20 == 10) {
            iVar11 = 0x3f;
            iStack00000008 = 5;
          }
          else if (uVar20 == 0xb) {
            iVar11 = 0x45;
            iStack00000008 = 7;
          }
          else if (uVar20 == 0xc) {
            iVar11 = 0x24d;
            iStack00000008 = 9;
          }
          else {
            iStack00000008 = 3;
            iVar11 = ((in_stack_00001f38[8] & 1) != 0) + 5;
            if (iVar11 == 0) goto LAB_004bcf72;
          }
          FUN_004e9f70();
          FUN_004ead60();
        }
LAB_004bcf72:
        if ((LPCVOID)in_stack_00001f38[9] != (LPCVOID)0x0) {
          pvVar13 = GlobalHandle((LPCVOID)in_stack_00001f38[9]);
          GlobalUnlock(pvVar13);
          pvVar13 = GlobalHandle((LPCVOID)in_stack_00001f38[9]);
          GlobalFree(pvVar13);
        }
        if ((LPCVOID)in_stack_00001f38[10] != (LPCVOID)0x0) {
          pvVar13 = GlobalHandle((LPCVOID)in_stack_00001f38[10]);
          GlobalUnlock(pvVar13);
          pvVar13 = GlobalHandle((LPCVOID)in_stack_00001f38[10]);
          GlobalFree(pvVar13);
        }
        _SfList_DeleteList_16();
        if (((*(int *)(in_stack_00001f28 + 0xbc8) != 0) && (iVar11 != 0)) && (iStack00000008 != 0))
        {
          FUN_004eb2b0();
          FUN_004ea040();
          *(uint *)**(undefined4 **)(in_stack_00001f28 + 0xbc8) =
               *(uint *)**(undefined4 **)(in_stack_00001f28 + 0xbc8) | 0x10000;
        }
        if (iVar19 != in_stack_00001f28) goto LAB_004bd00c;
        break;
      case 0xa15a:
        if (in_stack_00001f38 == (undefined4 *)0x0) {
          return 0;
        }
        _SfGetUIFontSize_4();
        lstrcpynA(&stack0x00000270,(LPCSTR)(in_stack_00001f38 + 0xc),0x104);
        iVar11 = lstrlenA(&stack0x00000270);
        iVar11 = iVar11 + 1;
        iVar19 = _SfList_FindSpecificItemRange_16();
        FUN_00453000();
        iStack0000000c = FUN_00404d90();
        if ((iStack0000000c != 0) ||
           (iVar12 = lstrcmpA(&stack0x00000270,(LPCSTR)(in_stack_00001f38 + 0xc)), iVar12 == 0)) {
          if ((in_stack_00001f2c != 0) && (*(HWND *)(in_stack_00001f28 + 4) != (HWND)0x0)) {
            InvalidateRect(*(HWND *)(in_stack_00001f28 + 4),(RECT *)(in_stack_00001f2c + 8),0);
          }
          goto LAB_004bdff8;
        }
        iVar12 = FUN_004e4c90();
        iStack00000008 = 0;
        iStack0000001c = 0;
        if (*(int *)(in_stack_00001f28 + 0xbc8) != 0) {
          if (uVar20 == 10) {
            iStack00000008 = 0x3a;
            iStack0000001c = 6;
          }
          else if (uVar20 == 0xb) {
            iStack00000008 = 0x43;
            iStack0000001c = 8;
          }
          else if (uVar20 == 0xc) {
            iStack00000008 = 0x248;
            iStack0000001c = 10;
          }
          else {
            iStack0000001c = 4;
            iStack00000008 = ((in_stack_00001f38[8] & 1) != 0) + 1;
            if (iStack00000008 == 0) goto LAB_004bd1da;
          }
          FUN_004e9f70();
          FUN_004ead60();
        }
LAB_004bd1da:
        iVar14 = lstrlenA(&stack0x00000270);
        if ((iVar11 < iVar14 + 1) &&
           (iStack0000000c = _SfList_ReAllocItem_12(), -1 < iStack0000000c)) {
          in_stack_00001f38 = *(undefined4 **)(piVar10[2] + iVar19 * 4);
          if (*(int *)(in_stack_00001f28 + 0xc3c) == *(int *)(in_stack_00001f28 + 0xc40)) {
            *(undefined4 **)(in_stack_00001f28 + 0xc40) = in_stack_00001f38;
          }
          *(undefined4 **)(in_stack_00001f28 + 0xc3c) = in_stack_00001f38;
          iVar11 = iVar14 + 1;
        }
        lstrcpynA((LPSTR)(in_stack_00001f38 + 0xc),&stack0x00000270,iVar11);
        *(undefined1 *)((int)in_stack_00001f38 + iVar11 + 0x2f) = 0;
        if (((*(int *)(in_stack_00001f28 + 0xbc8) != 0) && (iStack00000008 != 0)) &&
           (iStack0000001c != 0)) {
          FUN_004eb2b0();
          FUN_004ea040();
          *(uint *)**(undefined4 **)(in_stack_00001f28 + 0xbc8) =
               *(uint *)**(undefined4 **)(in_stack_00001f28 + 0xbc8) | 0x10000;
        }
        if (iVar12 == in_stack_00001f28) {
          FUN_004e4cd0();
        }
        if ((in_stack_00001f2c != 0) && (*(HWND *)(in_stack_00001f28 + 4) != (HWND)0x0)) {
          InvalidateRect(*(HWND *)(in_stack_00001f28 + 4),(RECT *)(in_stack_00001f2c + 8),0);
        }
        goto LAB_004bdff8;
      case 0xa15b:
        iVar11 = FUN_004be050();
        if (iVar11 != 0) {
          return 0;
        }
        iVar11 = FUN_004e4c90();
        if ((*(int *)(in_stack_00001f28 + 0xbc8) != 0) &&
           (piVar10 == *(int **)(in_stack_00001f28 + 0xc38))) {
          FUN_004e9f70();
          FUN_004ead60();
        }
        FUN_004bac60();
        if ((*(int *)(in_stack_00001f28 + 0xbc8) != 0) &&
           (piVar10 == *(int **)(in_stack_00001f28 + 0xc38))) {
          FUN_004eb2b0();
          FUN_004ea040();
          *(uint *)**(undefined4 **)(in_stack_00001f28 + 0xbc8) =
               *(uint *)**(undefined4 **)(in_stack_00001f28 + 0xbc8) | 0x10000;
        }
        if ((iVar11 == in_stack_00001f28) && (piVar10 == *(int **)(in_stack_00001f28 + 0xc38))) {
          FUN_004e4cd0();
        }
        FUN_00455090();
        FUN_004530a0();
        return 0;
      case 0xa15c:
switchD_004bcc98_caseD_a15c:
        if (in_stack_00001f38 == (undefined4 *)0x0) {
          return 0;
        }
        FUN_00453970();
        return 0;
      case 0xa15d:
        if (in_stack_00001f38 == (undefined4 *)0x0) {
          return 0;
        }
        FUN_00453970();
        return 0;
      case 0xa15e:
      case 0xa15f:
      case 0xa160:
      case 0xa161:
      case 0xa162:
      case 0xa163:
      case 0xa164:
      case 0xa165:
      case 0xa166:
      case 0xa167:
        SVar9 = GetKeyState(0x10);
        iVar11 = FUN_004baa60();
        if (iVar11 == 0) {
          return 0;
        }
        if (SVar9 < 0) {
          if ((*(byte *)(iVar11 + 0x20) & 1) != 0) {
            FUN_00453340();
            FUN_00455090();
            return 0;
          }
          FUN_00453340();
          FUN_00455090();
          return 0;
        }
        if ((*(byte *)(iVar11 + 0x20) & 1) != 0) {
          FUN_00453a50();
          FUN_00455090();
          return 0;
        }
        FUN_00453970();
        FUN_00455090();
        return 0;
      default:
        return 0;
      }
    }
    FUN_004e4cd0();
LAB_004bd00c:
    FUN_004530a0();
    FUN_004ba9e0();
    return 0;
  }
  if (in_stack_00001f30 < 0xa798) {
    if (in_stack_00001f30 == 0xa797) {
      iStack0000000c = FUN_00541900();
    }
    else {
      if (in_stack_00001f30 < 0xa1b9) {
        if (in_stack_00001f30 != 0xa1b8) {
          if (in_stack_00001f30 == 0xa16d) {
            if (in_stack_00001f38 == (undefined4 *)0x0) {
              return 0;
            }
            FUN_00453a50();
            return 0;
          }
          if (in_stack_00001f30 == 0xa16e) {
            if (in_stack_00001f38 == (undefined4 *)0x0) {
              return 0;
            }
            FUN_00540ea0();
            return 0;
          }
          if (in_stack_00001f30 != 0xa1b7) {
            return 0;
          }
          if (in_stack_00001f38 == (undefined4 *)0x0) {
            return 0;
          }
          if ((*(byte *)(in_stack_00001f38 + 8) & 1) == 0) {
            return 0;
          }
          FUN_00453a50();
          return 0;
        }
LAB_004bdcaa:
        SendMessageA(DAT_00647624,0x111,in_stack_00001f30,0);
        return 0;
      }
      if (in_stack_00001f30 == 0xa770) goto LAB_004bdcaa;
      if (in_stack_00001f30 != 0xa780) {
        if (in_stack_00001f30 != 0xa794) {
          return 0;
        }
        wParam = 0xa794;
        goto LAB_004bdc8a;
      }
      iVar11 = FUN_004e4c90();
      if (in_stack_00001f38 == (undefined4 *)0x0) {
        return 0;
      }
      iStack0000001c = 0;
      iStack00000008 = 0;
      if (uVar20 == 10) {
        uVar2 = *in_stack_00001f38;
        uVar4 = in_stack_00001f38[1];
        lstrcpynA(&stack0x00000384,(LPCSTR)(in_stack_00001f38 + 0xc),0x400);
        if (in_stack_00001f38[9] != 0) {
          FUN_004baf80();
        }
        iStack0000000c = FUN_005026c0();
        while (-1 < iStack0000000c) {
          iStack0000000c = FUN_004bade0();
          if (-1 < iStack0000000c) {
            if (*(int *)(in_stack_00001f28 + 0xbc8) != 0) {
              iStack0000001c = 0x3b;
              iStack00000008 = 6;
              FUN_004e9f70();
              FUN_004ead60();
            }
            iVar12 = lstrlenA((LPCSTR)(in_stack_00001f38 + 0xc));
            iVar14 = lstrlenA(&stack0x00000384);
            iVar15 = _SfList_FindSpecificItemRange_16();
            iVar19 = iVar12 + 1;
            if (iVar14 + 1 != iVar12 + 1) {
              iStack0000000c = _SfList_ReAllocItem_12();
              if (iStack0000000c < 0) goto LAB_004bdb85;
              in_stack_00001f38 = *(undefined4 **)(piVar10[2] + iVar15 * 4);
              iVar19 = iVar14 + 1;
            }
            lstrcpynA((LPSTR)(in_stack_00001f38 + 0xc),&stack0x00000384,iVar19);
            *(undefined1 *)((int)in_stack_00001f38 + iVar19 + 0x2f) = 0;
            *in_stack_00001f38 = uVar2;
            in_stack_00001f38[1] = uVar4;
            if ((LPCVOID)in_stack_00001f38[9] == (LPCVOID)0x0) {
              if (&stack0x00000000 == (undefined1 *)0xfffff07c) {
                SVar18 = 0;
              }
              else {
                iVar19 = lstrlenA(&stack0x00000f84);
                SVar18 = iVar19 + 1;
              }
              pvVar13 = GlobalAlloc(2,SVar18);
            }
            else {
              pvVar13 = GlobalHandle((LPCVOID)in_stack_00001f38[9]);
              GlobalUnlock(pvVar13);
              if (&stack0x00000000 == (undefined1 *)0xfffff07c) {
                SVar18 = 0;
              }
              else {
                iVar19 = lstrlenA(&stack0x00000f84);
                SVar18 = iVar19 + 1;
              }
              uFlags = 2;
              pvVar13 = GlobalHandle((LPCVOID)in_stack_00001f38[9]);
              pvVar13 = GlobalReAlloc(pvVar13,SVar18,uFlags);
            }
            _Dest = GlobalLock(pvVar13);
            if (_Dest == (uchar *)0x0) {
              iStack0000000c = -0x7ff8fff2;
              goto LAB_004bdb85;
            }
            in_stack_00001f38[9] = _Dest;
            _mbscpy(_Dest,&stack0x00000f84);
            break;
          }
          _SfGetString_8();
          SfMsgBox();
          iStack0000000c = FUN_005026c0();
        }
LAB_004bdb65:
        if (((*(int *)(in_stack_00001f28 + 0xbc8) != 0) && (iStack0000001c != 0)) &&
           (iStack00000008 != 0)) {
          FUN_004eb2b0();
        }
      }
      else {
        if (uVar20 != 0xc) goto LAB_004bdb65;
        uVar2 = in_stack_00001f38[1];
        puVar16 = (undefined4 *)&stack0x00000040;
        for (iVar19 = 0x8c; iVar19 != 0; iVar19 = iVar19 + -1) {
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        }
        in_stack_00000050 = in_stack_00001f38[2];
        in_stack_00000048 = *in_stack_00001f38;
        puVar1 = (uint *)in_stack_00001f38[10];
        in_stack_00000054 = in_stack_00001f38[3];
        in_stack_0000004c = uVar2;
        if (puVar1 == (uint *)0x0) {
          uVar20 = 1;
        }
        else {
          in_stack_00000260 = *puVar1 & 1;
          uVar20 = ~*puVar1 >> 1 & 1;
          in_stack_00000264 = *puVar1 >> 2 & 1;
          lstrcpynA(&stack0x0000015c,(LPCSTR)(puVar1 + 1),0x104);
        }
        lstrcpynA(&stack0x00000058,(LPCSTR)(in_stack_00001f38 + 0xc),0x104);
        in_stack_00000158._3_1_ = 0;
        iStack0000000c = FUN_0043ff20();
        if (iStack0000000c < 0) goto LAB_004bdb65;
        iStack0000001c = 0;
        if (*(int *)(in_stack_00001f28 + 0xbc8) != 0) {
          iStack0000001c = 0x249;
          iStack00000008 = 10;
          FUN_004e9f70();
          FUN_004ead60();
        }
        iVar12 = lstrlenA((LPCSTR)(in_stack_00001f38 + 0xc));
        iVar14 = lstrlenA(&stack0x00000058);
        iVar15 = _SfList_FindSpecificItemRange_16();
        iVar19 = iVar12 + 1;
        if (iVar14 + 1 == iVar12 + 1) {
LAB_004bd80b:
          lstrcpynA((LPSTR)(in_stack_00001f38 + 0xc),&stack0x00000058,iVar19);
          *(undefined1 *)((int)in_stack_00001f38 + iVar19 + 0x2f) = 0;
          *in_stack_00001f38 = in_stack_00000048;
          in_stack_00001f38[1] = in_stack_0000004c;
          in_stack_00001f38[2] = in_stack_00000050;
          in_stack_00001f38[3] = in_stack_00000054;
          if (in_stack_00001f38[10] == 0) {
            if (((in_stack_00000260 != 0) || (uVar20 == 0)) ||
               ((in_stack_00000264 != 0 || (iVar19 = lstrlenA(&stack0x0000015c), iVar19 != 0)))) {
              pvVar13 = GlobalAlloc(2,0x14);
              puVar16 = GlobalLock(pvVar13);
              in_stack_00001f38[10] = puVar16;
              if (puVar16 != (undefined4 *)0x0) {
                *puVar16 = 0;
              }
            }
            if (in_stack_00001f38[10] != 0) goto LAB_004bd89b;
          }
          else {
LAB_004bd89b:
            puVar1 = (uint *)in_stack_00001f38[10];
            in_stack_00001f38[0xb] = 0x676e6463;
            uVar3 = *puVar1;
            uVar17 = (uVar3 ^ in_stack_00000260) & 1 ^ uVar3;
            *puVar1 = uVar17;
            uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar17);
            uVar20 = (uint)(uVar20 == 0) << 1;
            *puVar1 = uVar20 | uVar3 & 0xfffffffd;
            *puVar1 = (in_stack_00000264 & 1) << 2 | uVar20 | uVar3 & 0xfffffff9;
            lstrcpynA((LPSTR)(puVar1 + 1),&stack0x0000015c,0xd);
            *(undefined1 *)(puVar1 + 4) = 0;
          }
          if (in_stack_00000260 == 0) {
            in_stack_00001f38[8] = in_stack_00001f38[8] | 1;
          }
          goto LAB_004bdb65;
        }
        iStack0000000c = _SfList_ReAllocItem_12();
        if (-1 < iStack0000000c) {
          in_stack_00001f38 = *(undefined4 **)(piVar10[2] + iVar15 * 4);
          iVar19 = iVar14 + 1;
          goto LAB_004bd80b;
        }
      }
LAB_004bdb85:
      if (((*(int *)(in_stack_00001f28 + 0xbc8) != 0) && (iStack0000001c != 0)) &&
         (iStack00000008 != 0)) {
        FUN_004ea040();
      }
      if (iStack0000000c < 0) goto LAB_004be000;
      if (*(undefined4 **)(in_stack_00001f28 + 0xbc8) != (undefined4 *)0x0) {
        puVar1 = (uint *)**(undefined4 **)(in_stack_00001f28 + 0xbc8);
        *puVar1 = *puVar1 | 0x10000;
      }
      if (iVar11 == in_stack_00001f28) {
        FUN_004e4cd0();
      }
      FUN_004530a0();
      _SfList_Sort_12();
      FUN_004ba9e0();
    }
  }
  else {
    if (in_stack_00001f30 < 0xc619) {
      if (((in_stack_00001f30 != 0xc618) && (in_stack_00001f30 != 0xa79f)) &&
         (in_stack_00001f30 != 0xa7a2)) {
        if (in_stack_00001f30 != 0xc5e0) {
          return 0;
        }
        FUN_00458370();
        return 0;
      }
    }
    else if (in_stack_00001f30 != 0xc61a) {
      if (in_stack_00001f30 != 0xc621) {
        if (in_stack_00001f30 != 0xc87b) {
          return 0;
        }
        wParam = 0xc87b;
LAB_004bdc8a:
        SendMessageA(DAT_00647624,0x111,wParam,0);
        return 0;
      }
      goto LAB_004bdcaa;
    }
LAB_004bdcfb:
    iVar11 = FUN_004be050();
    if (iVar11 != 0) {
      return 0;
    }
    iStack00000008 = 0;
    iStack00000010 = 0;
    if (*(int *)(in_stack_00001f28 + 0xbc8) != 0) {
      if (uVar20 == 10) {
        DAT_00647aac = 1;
        FUN_00453070();
        iStack00000008 = 0x3e;
        iStack00000010 = 5;
      }
      else if (uVar20 == 0xb) {
        DAT_00647ab0 = 1;
        FUN_00453070();
        iStack00000008 = 0x44;
        iStack00000010 = 7;
      }
      else if (uVar20 == 0xc) {
        FUN_00453070();
        iStack00000008 = 0x24c;
        iStack00000010 = 9;
      }
      else {
        iStack00000008 = 3;
        iStack00000010 = 3;
      }
      if (*(int *)(in_stack_00001f28 + 0xbc8) != 0) {
        FUN_004e9f70();
        FUN_004ead60();
      }
    }
    if (uVar20 == 10) {
      iStack0000000c = FUN_004bb120();
    }
    else if (uVar20 == 0xc) {
      if (in_stack_00001f30 == 0xc618) {
        iVar11 = FUN_004bb4c0();
      }
      else {
        iVar11 = FUN_004bb6f0();
      }
      if (iVar11 == 0) {
        iStack0000000c = -0x7ffb1ff4;
      }
      else {
        iStack0000000c = FUN_004bb840();
        if (-1 < iStack0000000c) {
          FUN_004b8880();
        }
      }
    }
    else {
      iStack0000000c = FUN_004bac60();
    }
    if (((*(int *)(in_stack_00001f28 + 0xbc8) != 0) && (iStack00000008 != 0)) &&
       (iStack00000010 != 0)) {
      if (-1 < iStack0000000c) {
        FUN_004eb2b0();
      }
      FUN_004ea040();
      *(uint *)**(undefined4 **)(in_stack_00001f28 + 0xbc8) =
           *(uint *)**(undefined4 **)(in_stack_00001f28 + 0xbc8) | 0x10000;
    }
    iVar11 = FUN_004e4c90();
    if (iVar11 == in_stack_00001f28) {
      FUN_004e4cd0();
    }
    FUN_004530a0();
  }
LAB_004bdff8:
  if (-1 < iStack0000000c) {
    return 0;
  }
LAB_004be000:
  _SfErrorHandler_MsgBox_24();
  return 0;
}


