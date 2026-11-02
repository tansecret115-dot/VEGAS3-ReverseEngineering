/* Module: wmfplug2.dll
   Function: FUN_0040d080
   Address: 0040d080
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040d080(void *this,int *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  HGLOBAL pvVar4;
  undefined4 *puVar5;
  undefined4 *pMem;
  undefined4 uVar6;
  void *pvVar7;
  int *unaff_EBP;
  int *unaff_ESI;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  LPCVOID pMem_00;
  int *piVar13;
  int *piVar14;
  SIZE_T dwBytes;
  int *piStack_98;
  int *piStack_94;
  int local_90;
  uint auStack_8c [5];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  SIZE_T SStack_68;
  undefined4 *puStack_64;
  uint uStack_60;
  uint uStack_50;
  SIZE_T SStack_44;
  void *pvStack_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  void *pvStack_2c;
  LPCVOID pvStack_28;
  void *local_24 [2];
  undefined1 local_1c [4];
  int aiStack_18 [5];
  int *piStack_4;
  
  local_90 = 0;
  local_24[0] = this;
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_1c);
  if (-1 < iVar2) {
    if (*(int **)((int)this + 0x22c) == (int *)0x0) {
      FUN_0042c080((int *)((int)this + 0x22c),4,-1,-1,0x80000000);
      if (*(int *)((int)this + 0x22c) == 0) {
        return -0x7ff8fff2;
      }
    }
    else {
      FUN_0042ad40(*(int **)((int)this + 0x22c),0,-1,0);
    }
    iStack_30 = 0;
    iStack_3c = 0;
    pvStack_40 = (void *)0x0;
    pvVar7 = pvStack_2c;
    if (local_24[0] != (void *)0x0) {
      do {
        iVar2 = (**(code **)(*piStack_4 + 0x1c))(piStack_4,pvStack_40,&piStack_98);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,local_24);
        if (iVar2 < 0) {
          return iVar2;
        }
        puVar9 = auStack_8c;
        for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        iVar2 = 4;
        bVar11 = true;
        piVar13 = aiStack_18;
        piVar14 = &DAT_0047b630;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar11 = *piVar13 == *piVar14;
          piVar13 = piVar13 + 1;
          piVar14 = piVar14 + 1;
        } while (bVar11);
        if (bVar11) {
          iVar2 = FUN_0040cf80(this,iStack_30,1,&piStack_94,&iStack_38);
          if (iVar2 < 0) {
            piVar13 = (int *)&stack0xffffff64;
            piVar14 = *(int **)((int)this + 0x22c);
LAB_0040d342:
            iVar2 = FUN_0042aa50(piVar14,-1,piVar13,1);
          }
          else {
            FUN_0042aa50(*(int **)((int)this + 0x22c),-1,(int *)&stack0xffffff64,1);
            iVar2 = (**(code **)(*piStack_94 + 0x30))(piStack_94,0,0,&uStack_34,0,0,0);
            if (-1 < iVar2) {
              uVar3 = uStack_34;
              if (uStack_34 < 0x13) {
                uVar3 = 0x12;
              }
              pvVar4 = GlobalAlloc(0x42,uVar3);
              puVar5 = GlobalLock(pvVar4);
              unaff_EBP = piStack_94;
              if (puVar5 == (undefined4 *)0x0) {
LAB_0040d9c8:
                if (unaff_EBP != (int *)0x0) {
                  (**(code **)(*unaff_EBP + 8))(unaff_EBP);
                }
                return -0x7ff8fff2;
              }
              piVar13 = (int *)0x0;
              (**(code **)(*piStack_94 + 0x30))(piStack_94,puVar5,uStack_34,0,0,0);
              unaff_EBP = DAT_0047b638;
              unaff_ESI = DAT_0047b634;
              piStack_98 = DAT_0047c0f8;
              piStack_94 = DAT_0047c0fc;
              local_90 = DAT_0047c100;
              auStack_8c[0] = DAT_0047c104;
              auStack_8c[1] = 1;
              auStack_8c[2] = 0;
              auStack_8c[3] = (uint)*(ushort *)(puVar5 + 3);
              auStack_8c[4] = DAT_0047c0d8;
              uStack_70 = DAT_0047c0e4;
              uStack_78 = DAT_0047c0dc;
              uStack_74 = DAT_0047c0e0;
              uStack_6c = 0;
              SStack_68 = uStack_50;
              if (uStack_50 < 0x13) {
                SStack_68 = 0x12;
              }
              puStack_64 = puVar5;
              iVar2 = (**(code **)(*piVar13 + 0x14))(piVar13,&stack0xffffff58);
              if (iVar2 < 0) {
                if (piStack_94 == (int *)0x0) {
                  return iVar2;
                }
                (**(code **)(*piStack_94 + 8))(piStack_94);
                return iVar2;
              }
              pvVar4 = GlobalHandle(puVar5);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(puVar5);
              GlobalFree(pvVar4);
              pvVar7 = (void *)0x1;
              iStack_30 = iStack_30 + 1;
            }
            if (piStack_94 != (int *)0x0) {
              (**(code **)(*piStack_94 + 8))(piStack_94);
            }
            piStack_94 = (int *)0x0;
          }
          this = pvStack_2c;
          if (pvVar7 != (void *)0x0) {
LAB_0040d351:
            iVar2 = (**(code **)(*piStack_4 + 0x20))(piStack_4,pvStack_40,piStack_98);
            this = pvStack_2c;
            if (iVar2 < 0) {
              return iVar2;
            }
          }
        }
        else {
          iVar2 = 4;
          bVar11 = true;
          piVar13 = aiStack_18;
          piVar14 = &DAT_0047b640;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar11 = *piVar13 == *piVar14;
            piVar13 = piVar13 + 1;
            piVar14 = piVar14 + 1;
          } while (bVar11);
          if (bVar11) {
            iVar2 = FUN_0040cf80(this,iStack_3c,0,(undefined4 *)&stack0xffffff60,&iStack_38);
            if (iVar2 < 0) {
              local_90 = -1;
              piVar13 = &local_90;
              piVar14 = *(int **)((int)this + 0x22c);
              goto LAB_0040d342;
            }
            FUN_0042aa50(*(int **)((int)this + 0x22c),-1,(int *)&stack0xffffff64,1);
            iVar2 = (**(code **)(*unaff_EBP + 0x38))(unaff_EBP,0,0,&SStack_44,0,0,&pvStack_28);
            if (iVar2 < 0) {
              if (unaff_EBP != (int *)0x0) {
                (**(code **)(*unaff_EBP + 8))(unaff_EBP);
              }
              return iVar2;
            }
            pvVar4 = GlobalAlloc(0x42,SStack_44);
            puVar5 = GlobalLock(pvVar4);
            if (puVar5 == (undefined4 *)0x0) {
              if (unaff_EBP != (int *)0x0) {
                (**(code **)(*unaff_EBP + 8))(unaff_EBP);
              }
              return -0x7ff8fff2;
            }
            pvVar4 = GlobalAlloc(0x42,(SIZE_T)pvStack_28);
            piVar13 = GlobalLock(pvVar4);
            if (piVar13 == (int *)0x0) goto LAB_0040d9c8;
            piVar14 = (int *)0x0;
            pMem_00 = pvStack_28;
            iVar2 = (**(code **)(*unaff_EBP + 0x38))(unaff_EBP,puVar5,SStack_44,0);
            if (iVar2 < 0) {
              if (piVar13 != (int *)0x0) {
                (**(code **)(*piVar13 + 8))(piVar13);
              }
              return iVar2;
            }
            dwBytes = uStack_60 + 0x30;
            pvVar4 = GlobalAlloc(0x40,dwBytes);
            pMem = GlobalLock(pvVar4);
            iStack_38 = 0;
            *pMem = 0;
            pMem[1] = 0;
            pMem[3] = puVar5[2];
            pMem[2] = puVar5[1];
            pMem[4] = *pMem;
            pMem[5] = pMem[1];
            pMem[6] = pMem[2];
            pMem[7] = pMem[3];
            iStack_3c = puVar5[5] << 3;
            uVar6 = ftol();
            pMem[8] = uVar6;
            pMem[9] = 0;
            uVar12 = ftol();
            *(undefined8 *)(pMem + 10) = uVar12;
            puVar8 = puVar5;
            puVar10 = pMem + 0xc;
            for (uVar3 = uStack_60 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar3 = uStack_60 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            pvVar4 = GlobalHandle(pMem_00);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(pMem_00);
            GlobalFree(pvVar4);
            piVar13 = DAT_0047b648;
            unaff_ESI = DAT_0047b644;
            iVar2 = puVar5[4];
            if (iVar2 == 0) {
              sVar1 = *(short *)((int)puVar5 + 0xe);
              if (sVar1 == 0x20) {
                piStack_98 = DAT_0047c178;
                piStack_94 = DAT_0047c17c;
                local_90 = DAT_0047c180;
                auStack_8c[0] = DAT_0047c184;
              }
              else if (sVar1 == 0x18) {
                piStack_98 = DAT_0047c188;
                piStack_94 = DAT_0047c18c;
                local_90 = DAT_0047c190;
                auStack_8c[0] = DAT_0047c194;
              }
              else if (sVar1 == 0x10) {
                piStack_98 = DAT_0047c198;
                piStack_94 = DAT_0047c19c;
                local_90 = DAT_0047c1a0;
                auStack_8c[0] = DAT_0047c1a4;
              }
              else if (sVar1 == 8) {
                piStack_98 = DAT_0047c1a8;
                piStack_94 = DAT_0047c1ac;
                local_90 = DAT_0047c1b0;
                auStack_8c[0] = DAT_0047c1b4;
              }
              else if (sVar1 == 4) {
                piStack_98 = DAT_0047c1b8;
                piStack_94 = DAT_0047c1bc;
                local_90 = DAT_0047c1c0;
                auStack_8c[0] = DAT_0047c1c4;
              }
              else if (sVar1 == 1) {
                piStack_98 = DAT_0047c1c8;
                piStack_94 = DAT_0047c1cc;
                local_90 = DAT_0047c1d0;
                auStack_8c[0] = DAT_0047c1d4;
              }
              else {
                piStack_98 = DAT_004851f8;
                piStack_94 = DAT_004851fc;
                local_90 = DAT_00485200;
                auStack_8c[0] = DAT_00485204;
              }
            }
            else if (iVar2 == 0x30323449) {
              piStack_98 = DAT_0047c168;
              piStack_94 = DAT_0047c16c;
              local_90 = DAT_0047c170;
              auStack_8c[0] = DAT_0047c174;
            }
            else if (iVar2 == 0x56555949) {
              piStack_98 = DAT_0047c158;
              piStack_94 = DAT_0047c15c;
              local_90 = DAT_0047c160;
              auStack_8c[0] = DAT_0047c164;
            }
            else if (iVar2 == 0x32315659) {
              piStack_98 = DAT_0047c148;
              piStack_94 = DAT_0047c14c;
              local_90 = DAT_0047c150;
              auStack_8c[0] = DAT_0047c154;
            }
            else if (iVar2 == 0x32595559) {
              piStack_98 = DAT_0047c138;
              piStack_94 = DAT_0047c13c;
              local_90 = DAT_0047c140;
              auStack_8c[0] = DAT_0047c144;
            }
            else if (iVar2 == 0x59565955) {
              piStack_98 = DAT_0047c128;
              piStack_94 = DAT_0047c12c;
              local_90 = DAT_0047c130;
              auStack_8c[0] = DAT_0047c134;
            }
            else if (iVar2 == 0x55595659) {
              piStack_98 = DAT_0047c118;
              piStack_94 = DAT_0047c11c;
              local_90 = DAT_0047c120;
              auStack_8c[0] = DAT_0047c124;
            }
            else if (iVar2 == 0x39555659) {
              piStack_98 = DAT_0047c108;
              piStack_94 = DAT_0047c10c;
              local_90 = DAT_0047c110;
              auStack_8c[0] = DAT_0047c114;
            }
            else {
              piStack_98 = DAT_004851f8;
              piStack_94 = DAT_004851fc;
              local_90 = DAT_00485200;
              auStack_8c[0] = DAT_00485204;
            }
            uStack_78 = DAT_0047c0ec;
            auStack_8c[4] = DAT_0047c0e8;
            uStack_74 = DAT_0047c0f0;
            auStack_8c[1] = 1;
            auStack_8c[2] = 0;
            auStack_8c[3] = 0;
            uStack_70 = DAT_0047c0f4;
            uStack_6c = 0;
            SStack_68 = dwBytes;
            puStack_64 = pMem;
            iVar2 = (**(code **)(*piVar14 + 0x14))(piVar14,&stack0xffffff58);
            if (iVar2 < 0) {
              if (pMem != (undefined4 *)0x0) {
                pvVar4 = GlobalHandle(pMem);
                GlobalUnlock(pvVar4);
                pvVar4 = GlobalHandle(pMem);
                GlobalFree(pvVar4);
              }
              pvVar4 = GlobalHandle(puVar5);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(puVar5);
              GlobalFree(pvVar4);
              if (unaff_EBP == (int *)0x0) {
                return iVar2;
              }
              (**(code **)(*unaff_EBP + 8))(unaff_EBP);
              return iVar2;
            }
            if (pMem != (undefined4 *)0x0) {
              pvVar4 = GlobalHandle(pMem);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(pMem);
              GlobalFree(pvVar4);
            }
            pvVar4 = GlobalHandle(puVar5);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(puVar5);
            GlobalFree(pvVar4);
            iStack_3c = iStack_3c + 1;
            pvVar7 = (void *)0x1;
            if (piVar13 != (int *)0x0) {
              (**(code **)(*piVar13 + 8))(piVar13);
            }
            unaff_EBP = (int *)0x0;
            goto LAB_0040d351;
          }
          pvVar7 = (void *)0x0;
          local_90 = -1;
          iVar2 = FUN_0042aa50(*(int **)((int)this + 0x22c),-1,&local_90,1);
        }
        if (piStack_98 != (int *)0x0) {
          (**(code **)(*piStack_98 + 8))(piStack_98);
        }
        pvStack_40 = (void *)((int)pvStack_40 + 1);
        piStack_98 = (int *)0x0;
        if (local_24[0] <= pvStack_40) {
          return iVar2;
        }
      } while( true );
    }
  }
  return iVar2;
}


