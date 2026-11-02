/* Module: wmfplug2.dll
   Function: FUN_0041a480
   Address: 0041a480
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0041a480(int *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  HGLOBAL pvVar4;
  short *pMem;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int *unaff_EBP;
  int *piVar9;
  int *unaff_ESI;
  int *piVar10;
  uint uVar11;
  short *psVar12;
  int *piVar13;
  bool bVar14;
  undefined8 uVar15;
  int *unaff_retaddr;
  int **ppiVar16;
  int *piVar17;
  undefined4 local_80;
  int *piStack_7c;
  int *piStack_78;
  int *local_74;
  undefined4 uStack_70;
  double dStack_6c;
  int aiStack_60 [4];
  undefined4 auStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  undefined4 *puStack_10;
  short *psStack_c;
  int *piStack_4;
  
  local_80 = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((iVar2 < 0) ||
     (piVar17 = (int *)0x0, piVar9 = local_74, piVar8 = param_1, piStack_7c == (int *)0x0)) {
    return iVar2;
  }
  do {
    iVar2 = (**(code **)(*piVar8 + 0x1c))(piVar8,piVar17,&stack0xffffff78);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (*(code *)local_74[3])(&local_74,&dStack_6c);
    if (iVar2 < 0) {
      return iVar2;
    }
    puVar5 = auStack_50;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar2 = 4;
    bVar14 = true;
    piVar8 = aiStack_60;
    piVar10 = &DAT_0047b630;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar14 = *piVar8 == *piVar10;
      piVar8 = piVar8 + 1;
      piVar10 = piVar10 + 1;
    } while (bVar14);
    if (bVar14) {
      iVar2 = (**(code **)(*param_1 + 0x18))();
      if (iVar2 == 0) {
        ppiVar16 = &piStack_78;
        piStack_78 = (int *)0xffffffff;
LAB_0041a6c3:
        iVar2 = FUN_0042aa50(unaff_retaddr,-1,(int *)ppiVar16,1);
LAB_0041a6ca:
        if (piVar9 == (int *)0x0) goto LAB_0041a6ef;
      }
      else {
        piStack_78 = (int *)0x0;
        iVar2 = FUN_0042aa50(unaff_retaddr,-1,(int *)&piStack_78,1);
        psVar3 = (short *)(**(code **)(*param_1 + 0x38))();
        if (psVar3 == (short *)0x0) goto LAB_0041a6ca;
        if ((*psVar3 == 3) || (*psVar3 == 1)) {
          uVar11 = 0x10;
        }
        else {
          uVar11 = (ushort)psVar3[8] + 0x12;
        }
        pvVar4 = GlobalAlloc(0x42,uVar11);
        pMem = GlobalLock(pvVar4);
        if (pMem == (short *)0x0) {
          return -0x7ff8fff2;
        }
        psVar12 = pMem;
        for (uVar7 = uVar11 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)psVar12 = *(undefined4 *)psVar3;
          psVar3 = psVar3 + 2;
          psVar12 = psVar12 + 2;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(char *)psVar12 = (char)*psVar3;
          psVar3 = (short *)((int)psVar3 + 1);
          psVar12 = (short *)((int)psVar12 + 1);
        }
        auStack_50[0] = DAT_0047b630;
        auStack_50[1] = DAT_0047b634;
        auStack_50[2] = DAT_0047b638;
        auStack_50[3] = DAT_0047b63c;
        uStack_40 = DAT_0047c0f8;
        uStack_3c = DAT_0047c0fc;
        uStack_38 = DAT_0047c100;
        uStack_34 = DAT_0047c104;
        uStack_30 = 1;
        uStack_2c = 0;
        uStack_28 = (uint)(ushort)pMem[6];
        uStack_24 = DAT_0047c0d8;
        uStack_20 = DAT_0047c0dc;
        uStack_1c = DAT_0047c0e0;
        uStack_18 = DAT_0047c0e4;
        piStack_14 = (int *)0x0;
        if ((*pMem == 3) || (*pMem == 1)) {
          puStack_10 = (undefined4 *)0x10;
        }
        else {
          puStack_10 = (undefined4 *)((ushort)pMem[8] + 0x12);
        }
        psStack_c = pMem;
        iVar2 = (**(code **)(*unaff_EBP + 0x14))(unaff_EBP,auStack_50);
        if (iVar2 < 0) {
          return iVar2;
        }
        pvVar4 = GlobalHandle(pMem);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(pMem);
        GlobalFree(pvVar4);
        piVar9 = (int *)0x1;
      }
LAB_0041a6ce:
      iVar2 = (**(code **)(*piStack_4 + 0x20))(piStack_4,piVar17,unaff_EBP);
      if (iVar2 < 0) {
        return iVar2;
      }
    }
    else {
      iVar2 = 4;
      bVar14 = true;
      piVar8 = aiStack_60;
      piVar10 = &DAT_0047b640;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar14 = *piVar8 == *piVar10;
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
      } while (bVar14);
      if (bVar14) {
        iVar2 = (**(code **)(*param_1 + 0x14))();
        if (iVar2 != 0) {
          piStack_78 = (int *)0x1;
          FUN_0042aa50(unaff_retaddr,-1,(int *)&piStack_78,1);
          iVar2 = (**(code **)(*param_1 + 0x20))(&local_80);
          if (iVar2 < 0) {
            return iVar2;
          }
          if (piVar17[4] == 3) {
            iVar2 = 0xc;
          }
          else {
            iVar2 = piVar17[8] << 2;
          }
          piVar8 = (int *)(iVar2 + *piVar17);
          piStack_7c = piVar8;
          pvVar4 = GlobalAlloc(0x42,(SIZE_T)piVar8);
          piVar9 = GlobalLock(pvVar4);
          if (piVar9 == (int *)0x0) {
            return -0x7ff8fff2;
          }
          piVar10 = piVar17;
          piVar13 = piVar9;
          for (uVar11 = (uint)piVar8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *piVar13 = *piVar10;
            piVar10 = piVar10 + 1;
            piVar13 = piVar13 + 1;
          }
          piStack_78 = piVar8 + 0xc;
          for (uVar11 = (uint)piVar8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(char *)piVar13 = (char)*piVar10;
            piVar10 = (int *)((int)piVar10 + 1);
            piVar13 = (int *)((int)piVar13 + 1);
          }
          pvVar4 = GlobalAlloc(0x40,(SIZE_T)piStack_78);
          puVar5 = GlobalLock(pvVar4);
          uStack_70 = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[3] = piVar9[2];
          puVar5[2] = piVar9[1];
          puVar5[4] = *puVar5;
          puVar5[5] = puVar5[1];
          puVar5[6] = puVar5[2];
          puVar5[7] = puVar5[3];
          local_74 = (int *)(piVar9[5] << 3);
          dStack_6c = (double)local_74;
          (**(code **)(*unaff_retaddr + 0x2c))();
          uVar6 = ftol();
          puVar5[8] = uVar6;
          puVar5[9] = 0;
          (**(code **)(*unaff_retaddr + 0x2c))();
          uVar15 = ftol();
          *(undefined8 *)(puVar5 + 10) = uVar15;
          piVar8 = piVar9;
          piVar10 = puVar5 + 0xc;
          for (uVar11 = (uint)piStack_7c >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *piVar10 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar10 = piVar10 + 1;
          }
          for (uVar11 = (uint)piStack_7c & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(char *)piVar10 = (char)*piVar8;
            piVar8 = (int *)((int)piVar8 + 1);
            piVar10 = (int *)((int)piVar10 + 1);
          }
          aiStack_60[3] = DAT_0047b640;
          auStack_50[0] = DAT_0047b644;
          auStack_50[1] = DAT_0047b648;
          auStack_50[2] = DAT_0047b64c;
          iVar2 = piVar9[4];
          if (iVar2 == 0) {
            sVar1 = *(short *)((int)piVar9 + 0xe);
            if (sVar1 == 0x20) {
              auStack_50[3] = DAT_0047c178;
              uStack_40 = DAT_0047c17c;
              uStack_3c = DAT_0047c180;
              uStack_38 = DAT_0047c184;
            }
            else if (sVar1 == 0x18) {
              auStack_50[3] = DAT_0047c188;
              uStack_40 = DAT_0047c18c;
              uStack_3c = DAT_0047c190;
              uStack_38 = DAT_0047c194;
            }
            else if (sVar1 == 0x10) {
              auStack_50[3] = DAT_0047c198;
              uStack_40 = DAT_0047c19c;
              uStack_3c = DAT_0047c1a0;
              uStack_38 = DAT_0047c1a4;
            }
            else if (sVar1 == 8) {
              auStack_50[3] = DAT_0047c1a8;
              uStack_40 = DAT_0047c1ac;
              uStack_3c = DAT_0047c1b0;
              uStack_38 = DAT_0047c1b4;
            }
            else {
              auStack_50[3] = DAT_004851f8;
              uStack_40 = DAT_004851fc;
              uStack_3c = DAT_00485200;
              uStack_38 = DAT_00485204;
            }
          }
          else if (iVar2 == 0x30323449) {
            auStack_50[3] = DAT_0047c168;
            uStack_40 = DAT_0047c16c;
            uStack_3c = DAT_0047c170;
            uStack_38 = DAT_0047c174;
          }
          else if (iVar2 == 0x56555949) {
            auStack_50[3] = DAT_0047c158;
            uStack_40 = DAT_0047c15c;
            uStack_3c = DAT_0047c160;
            uStack_38 = DAT_0047c164;
          }
          else if (iVar2 == 0x32315659) {
            auStack_50[3] = DAT_0047c148;
            uStack_40 = DAT_0047c14c;
            uStack_3c = DAT_0047c150;
            uStack_38 = DAT_0047c154;
          }
          else if (iVar2 == 0x32595559) {
            auStack_50[3] = DAT_0047c138;
            uStack_40 = DAT_0047c13c;
            uStack_3c = DAT_0047c140;
            uStack_38 = DAT_0047c144;
          }
          else if (iVar2 == 0x59565955) {
            auStack_50[3] = DAT_0047c128;
            uStack_40 = DAT_0047c12c;
            uStack_3c = DAT_0047c130;
            uStack_38 = DAT_0047c134;
          }
          else if (iVar2 == 0x55595659) {
            auStack_50[3] = DAT_0047c118;
            uStack_40 = DAT_0047c11c;
            uStack_3c = DAT_0047c120;
            uStack_38 = DAT_0047c124;
          }
          else if (iVar2 == 0x39555659) {
            auStack_50[3] = DAT_0047c108;
            uStack_40 = DAT_0047c10c;
            uStack_3c = DAT_0047c110;
            uStack_38 = DAT_0047c114;
          }
          else {
            auStack_50[3] = DAT_004851f8;
            uStack_40 = DAT_004851fc;
            uStack_3c = DAT_00485200;
            uStack_38 = DAT_00485204;
          }
          uStack_24 = DAT_0047c0ec;
          uStack_28 = DAT_0047c0e8;
          piStack_14 = piStack_78;
          uStack_1c = DAT_0047c0f4;
          uStack_34 = 1;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_20 = DAT_0047c0f0;
          uStack_18 = 0;
          puStack_10 = puVar5;
          iVar2 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,aiStack_60 + 3);
          if (iVar2 < 0) {
            if (puVar5 != (undefined4 *)0x0) {
              pvVar4 = GlobalHandle(puVar5);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(puVar5);
              GlobalFree(pvVar4);
            }
            pvVar4 = GlobalHandle(piVar9);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(piVar9);
            GlobalFree(pvVar4);
            return iVar2;
          }
          if (puVar5 != (undefined4 *)0x0) {
            pvVar4 = GlobalHandle(puVar5);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(puVar5);
            GlobalFree(pvVar4);
          }
          pvVar4 = GlobalHandle(piVar9);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(piVar9);
          GlobalFree(pvVar4);
          piVar9 = (int *)0x1;
          goto LAB_0041a6ce;
        }
        ppiVar16 = &local_74;
        local_74 = (int *)0xffffffff;
        goto LAB_0041a6c3;
      }
      piVar9 = (int *)0x0;
      local_74 = (int *)0xffffffff;
      iVar2 = FUN_0042aa50(unaff_retaddr,-1,(int *)&local_74,1);
    }
LAB_0041a6ef:
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    piVar17 = (int *)((int)piVar17 + 1);
    unaff_EBP = (int *)0x0;
    piVar8 = piStack_4;
    if (piStack_7c <= piVar17) {
      return iVar2;
    }
  } while( true );
}


