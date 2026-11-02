/* Module: vegas30.exe
   Function: FUN_00532af0
   Address: 00532af0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00532af0(uchar *param_1,int param_2)

{
  int *piVar1;
  LPCVOID pMem;
  bool bVar2;
  double dVar3;
  double dVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  HGLOBAL pvVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  int *unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int *unaff_EDI;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  undefined *puVar23;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uchar local_104 [260];
  
  _mbscpy((uchar *)(param_2 + 0xc),param_1);
  _splitpath((char *)(param_2 + 0xc),(char *)(param_2 + 0x110),(char *)local_104,
             (char *)(param_2 + 0x210),(char *)(param_2 + 0x310));
  _mbscat((uchar *)(param_2 + 0x110),local_104);
  piVar1 = *(int **)(param_1 + 0x110);
  *(int **)(param_2 + 8) = piVar1;
  (**(code **)(*piVar1 + 4))();
  (**(code **)(**(int **)(param_1 + 0x110) + 8))();
  param_1[0x110] = '\0';
  param_1[0x111] = '\0';
  param_1[0x112] = '\0';
  param_1[0x113] = '\0';
  puVar22 = *(undefined4 **)(param_2 + 8);
  *(undefined4 *)(param_2 + 0x410) = 0;
  puVar23 = &DAT_0060eec8;
  iVar6 = (**(code **)*puVar22)();
  if (-1 < iVar6) {
    (**(code **)(*unaff_EBP + 0x80))(unaff_EBP,1);
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  puVar7 = (undefined *)
           (**(code **)(**(int **)(param_2 + 8) + 0x60))(*(int **)(param_2 + 8),&stack0xfffffea0);
  piVar1 = *(int **)(unaff_ESI + 0x428);
  if ((piVar1 != (int *)0x0) && (piVar1[1] != 0)) {
    iVar6 = piVar1[0x12];
    if ((iVar6 == 0) || ((*(int *)(iVar6 + 4) == 0 || (*(int *)(iVar6 + 8) == 0)))) {
      iVar6 = *piVar1;
    }
    uVar18 = *(undefined4 *)(iVar6 + 8);
    uVar9 = *(undefined4 *)(iVar6 + 4);
    uVar21 = 0;
    uVar20 = 0;
    uVar19 = 0;
    uVar8 = _SfGetPixelType_4(*piVar1);
    _SfVideo_InitBitmapInfo_28(param_2 + 0x450,uVar8,uVar9,uVar18,uVar19,uVar20,uVar21);
    dVar3 = _DAT_00610fd8;
    *(undefined4 *)(param_2 + 0x8b8) = *(undefined4 *)(*(int *)(unaff_ESI + 0x428) + 4);
    puVar16 = (undefined4 *)(param_2 + 0x878);
    puVar15 = (undefined4 *)(*(int *)(unaff_ESI + 0x428) + 0x50);
    puVar17 = puVar16;
    for (iVar6 = 0x10; dVar4 = _DAT_00610fd8, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar17 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar17 = puVar17 + 1;
    }
    iVar6 = *(int *)(unaff_ESI + 0x428);
    if ((dVar3 == *(double *)(iVar6 + 0x60)) || (_DAT_00610fd8 == *(double *)(iVar6 + 0x68))) {
      puVar15 = (undefined4 *)(iVar6 + 8);
      for (iVar13 = 0x10; uVar18 = DAT_0064b138, iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      if (dVar4 == *(double *)(param_2 + 0x888)) {
        uVar9 = FUN_005ba4b0(DAT_0064b138,0);
        FUN_005ba670(uVar18,uVar9,0,&stack0xfffffea0,0,0);
        *(undefined4 *)(param_2 + 0x888) = uStack_150;
        *(undefined4 *)(param_2 + 0x88c) = uStack_14c;
      }
      uVar18 = DAT_0064b138;
      if (_DAT_00610fd8 == *(double *)(param_2 + 0x890)) {
        uVar9 = FUN_005ba4b0(DAT_0064b138,0);
        FUN_005ba670(uVar18,uVar9,0,&stack0xfffffea0,0,0);
        *(undefined4 *)(param_2 + 0x890) = uStack_148;
        *(undefined4 *)(param_2 + 0x894) = uStack_144;
      }
    }
    else {
      puVar15 = (undefined4 *)(iVar6 + 0x50);
      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
    }
    *(undefined4 *)(param_2 + 0x410) = 1;
  }
  iVar6 = Mixer_GetNumMainBuses((ISFMixer *)0x0);
  puVar16 = *(undefined4 **)(unaff_ESI + 0x424);
  if (puVar16 == (undefined4 *)0x0) goto LAB_00532da3;
  *(undefined4 *)(param_2 + 0x414) = *puVar16;
  *(undefined4 *)(param_2 + 0x418) = puVar16[1];
  *(undefined4 *)(param_2 + 0x41c) = puVar16[2];
  *(undefined4 *)(param_2 + 0x420) = puVar16[3];
  *(undefined2 *)(param_2 + 0x424) = *(undefined2 *)(puVar16 + 4);
  iVar13 = 1;
  *(undefined4 *)(param_2 + 0x448) = 1;
  if (*(uint *)(*(int *)(unaff_ESI + 0x424) + 0x12) < 2) {
    if (*(int *)(param_2 + 0x410) == 0) goto LAB_00532d85;
  }
  else {
    if (*(short *)(param_2 + 0x416) == 1) {
      iVar6 = iVar6 * 2;
    }
    iVar13 = *(int *)(param_2 + 0x410) + iVar6;
LAB_00532d85:
    *(int *)(param_2 + 0x410) = iVar13;
  }
  puVar16 = (undefined4 *)(*(int *)(unaff_ESI + 0x424) + 0x1a);
  puVar15 = (undefined4 *)(param_2 + 0x428);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar15 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar15 = puVar15 + 1;
  }
LAB_00532da3:
  (**(code **)(**(int **)(param_2 + 8) + 0x68))(*(int **)(param_2 + 8),unaff_ESI);
  if (-1 < (int)puVar22) {
    if ((DAT_0064b4e0 == 0) || (DAT_0064b4f0 == 0)) {
      iVar6 = FUN_00601ab0(&stack0xfffffe88,&stack0xfffffe84,1);
      if (iVar6 < 0) {
        DAT_0064b4f0 = 1;
      }
      else if ((int)DAT_0064b4e0 <= (int)((uint)puVar23 & 0xff)) {
        DAT_0064b4f0 = 0;
        DAT_0064b4e0 = (uint)puVar23 & 0xff;
        _DAT_0064b4f4 = puVar7;
      }
    }
    uVar5 = 0x10;
    if (0x3f < (int)DAT_0064b4e0) {
      uVar5 = 0x18;
    }
    if ((uVar5 < *(ushort *)(param_2 + 0x422)) &&
       ((uVar5 < 0x18 || (*(short *)(param_2 + 0x414) != 3)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((DAT_0064b4e0 == 0) || (DAT_0064b4f0 == 0)) {
      iVar6 = FUN_00601ab0(&stack0xfffffe84,&stack0xfffffe88,1);
      if (iVar6 < 0) {
        DAT_0064b4f0 = 1;
      }
      else if ((int)DAT_0064b4e0 <= (int)((uint)puVar7 & 0xff)) {
        DAT_0064b4f0 = 0;
        DAT_0064b4e0 = (uint)puVar7 & 0xff;
        _DAT_0064b4f4 = puVar23;
      }
    }
    uVar10 = 48000;
    if (0x3f < (int)DAT_0064b4e0) {
      uVar10 = 96000;
    }
    if ((uVar10 < *(uint *)(param_2 + 0x418)) || (!bVar2)) {
      puVar22 = (undefined4 *)0x8004e001;
    }
    else {
      uVar10 = 0;
      *(undefined4 *)(param_2 + 0x900) = *(undefined4 *)(param_1 + 0x118);
      *(undefined4 *)(param_2 + 0x904) = *(undefined4 *)(param_1 + 0x11c);
      *(undefined4 *)(param_2 + 0x908) = *(undefined4 *)(param_1 + 0x114);
      *(undefined4 *)(param_2 + 0x90c) = *(undefined4 *)(param_1 + 0x120);
      *(undefined4 *)(param_2 + 0x910) = *(undefined4 *)(param_1 + 0x124);
      *(undefined4 *)(param_2 + 0x928) = *(undefined4 *)(param_1 + 0xa28);
      *(undefined4 *)(param_2 + 0x92c) = *(undefined4 *)(param_1 + 0xa2c);
      puVar14 = (uint *)0x0;
      if (*(int *)(param_2 + 0x410) != 0) {
        do {
          pvVar11 = GlobalAlloc(0x42,0x148);
          puVar12 = GlobalLock(pvVar11);
          if ((puVar12 == (uint *)0x0) && (*(int *)(param_2 + 0x8bc) != 0)) {
            pMem = *(LPCVOID *)(param_2 + 0x8bc);
            *(undefined4 *)(param_2 + 0x8bc) = *(undefined4 *)((int)pMem + 0x144);
            pvVar11 = GlobalHandle(pMem);
            GlobalUnlock(pvVar11);
            pvVar11 = GlobalHandle(pMem);
            GlobalFree(pvVar11);
            return (undefined4 *)0x8007000e;
          }
          *puVar12 = uVar10;
          puVar12[0x4d] = 3;
          uVar5 = *(ushort *)(param_2 + 0x416);
          if ((uVar5 == 1) && ((int *)0x1 < *(int **)(param_2 + 0x410))) {
            if (unaff_EDI < *(int **)(param_2 + 0x410)) {
              puVar12[0x4d] = ((uVar10 & 1) != 0) + 1;
            }
          }
          else if ((uVar5 < 3) || (*(int *)(param_2 + 0x410) != 1)) {
            if (uVar5 == 1) {
              puVar12[0x4d] = 0x10;
            }
          }
          else {
            puVar12[0x4d] = 4;
          }
          if (*(int *)(param_2 + 0x8bc) == 0) {
            *(uint **)(param_2 + 0x8bc) = puVar12;
          }
          else {
            puVar14[0x51] = (uint)puVar12;
          }
          puVar12[0x51] = 0;
          uVar10 = uVar10 + 1;
          puVar14 = puVar12;
        } while (uVar10 < *(uint *)(param_2 + 0x410));
        return puVar22;
      }
    }
  }
  return puVar22;
}


