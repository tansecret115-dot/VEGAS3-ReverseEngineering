/* Module: sfpaplug.dll
   Function: FUN_00408500
   Address: 00408500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00408500(void *this,uint param_1,uint param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,int *param_6,uint *param_7)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  undefined3 extraout_var;
  short sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined8 uVar18;
  longlong lVar19;
  int local_24;
  DWORD local_18;
  undefined2 *local_14;
  int local_10;
  LONG local_c;
  LONG local_8;
  LONG local_4;
  
  bVar1 = false;
  local_24 = 0;
  uVar13 = *(uint *)(*(int *)((int)this + 0xf8) + 0x34);
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  if ((uVar13 & 1) != 0) {
    *(undefined4 *)((int)this + 0x168) = 1;
  }
  if ((uVar13 & 2) != 0) {
    *(undefined4 *)((int)this + 0x16c) = 1;
  }
  if ((uVar13 & 4) != 0) {
    *(undefined4 *)((int)this + 0x170) = 1;
  }
  if ((uVar13 & 7) < 8) {
    uVar13 = *param_7;
    while( true ) {
      if ((int)uVar13 < 1) {
        *param_7 = *param_7 - uVar13;
        *param_6 = local_24;
        return 0;
      }
      iVar10 = *(int *)((int)this + 0xf8);
      if ((*(ushort *)(iVar10 + 0x44) == 0) || (*(ushort *)(iVar10 + 0x46) == 0)) break;
      uVar3 = (uint)*(ushort *)(iVar10 + 0x46) * (uint)*(ushort *)(iVar10 + 0x44);
      uVar18 = __alldiv(param_1,param_2,uVar3,(int)uVar3 >> 0x1f);
      uVar3 = (uint)uVar18;
      if (*(uint *)(iVar10 + 0x40) <= uVar3) {
        uVar3 = *(uint *)(iVar10 + 0x40) - 1;
      }
      iVar10 = *(int *)(iVar10 + 0x10) + uVar3 * 4;
      if (((int)param_2 < *(int *)((int)this + 0x29c)) ||
         (((((int)param_2 <= *(int *)((int)this + 0x29c) && (param_1 < *(uint *)((int)this + 0x298))
            ) || (*(int *)((int)this + 0x2a4) < (int)param_2)) ||
          ((*(int *)((int)this + 0x2a4) <= (int)param_2 && (*(uint *)((int)this + 0x2a0) < param_1))
          )))) {
        if (((param_1 != *(uint *)((int)this + 0x2a0) + 1) ||
            (param_2 !=
             *(int *)((int)this + 0x2a4) + (uint)(0xfffffffe < *(uint *)((int)this + 0x2a0)))) &&
           (!bVar1)) {
          local_c = 0;
          local_10 = iVar10;
          SetFilePointer(*(HANDLE *)(*(int *)((int)this + 4) + 0x214),iVar10,&local_c,0);
          BVar4 = ReadFile(*(HANDLE *)(*(int *)((int)this + 4) + 0x214),(LPVOID)((int)this + 0x104),
                           4,&local_18,(LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            return 0x8004e008;
          }
          bVar1 = true;
        }
        local_8 = *(LONG *)((int)this + 0x104);
        local_4 = 0;
        SetFilePointer(*(HANDLE *)(*(int *)((int)this + 4) + 0x214),local_8,&local_4,0);
        iVar10 = *(int *)((int)this + 0x104);
        iVar5 = FUN_00407d80(*(HANDLE *)(*(int *)((int)this + 4) + 0x214),(int)this + 0x100);
        if (iVar5 < 0) {
          return 0x8004e008;
        }
        iVar5 = *(int *)((int)this + 0x104);
        if (*(int *)((int)this + 0x200) == 1) {
          *(uint *)((int)this + 0x298) = uVar3;
          *(undefined4 *)((int)this + 0x29c) = 0;
          uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0xf8) + 0x46) *
                  (uint)*(ushort *)(*(int *)((int)this + 0xf8) + 0x44);
          lVar19 = __allmul(uVar3,(int)uVar3 >> 0x1f,*(uint *)((int)this + 0x298),0);
          *(longlong *)((int)this + 0x298) = lVar19;
        }
        else {
          *(uint *)((int)this + 0x298) = *(uint *)((int)this + 0x2a0) + 1;
          *(uint *)((int)this + 0x29c) =
               *(int *)((int)this + 0x2a4) + (uint)(0xfffffffe < *(uint *)((int)this + 0x2a0));
        }
        uVar3 = (uint)*(short *)((int)this + 0x224);
        iVar6 = uVar3 + *(uint *)((int)this + 0x298);
        *(int *)((int)this + 0x2a0) = iVar6 + -1;
        *(uint *)((int)this + 0x2a4) =
             (((int)uVar3 >> 0x1f) + *(int *)((int)this + 0x29c) +
             (uint)CARRY4(uVar3,*(uint *)((int)this + 0x298))) - (uint)(iVar6 == 0);
        BVar4 = ReadFile(*(HANDLE *)(*(int *)((int)this + 4) + 0x214),*(LPVOID *)((int)this + 0x180)
                         ,(uint)*(ushort *)((int)this + 0x226),&local_18,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          GetLastError();
          return 0x8004e008;
        }
        iVar6 = (int)this + 0x140;
        local_24 = local_24 + (iVar10 - iVar5) + local_18;
        *(DWORD *)((int)this + 0x104) = *(int *)((int)this + 0x104) + local_18;
        FUN_00403380(iVar6);
        *(undefined4 *)((int)this + 0x1d0) = *(undefined4 *)((int)this + 0x204);
        *(uint *)((int)this + 0x158) = (uint)*(byte *)((int)this + 0x228);
        *(uint *)((int)this + 0x1b8) = (uint)*(byte *)((int)this + 0x22a);
        *(undefined4 *)((int)this + 0x1d4) = *(undefined4 *)((int)this + 0x208);
        *(undefined4 *)((int)this + 0x1d8) = *(undefined4 *)((int)this + 0x20c);
        *(undefined4 *)((int)this + 0x1dc) = *(undefined4 *)((int)this + 0x210);
        if (*(byte *)((int)this + 0x22a) == 5) {
          puVar15 = *(undefined4 **)((int)this + 0x1b0);
          for (uVar3 = *(uint *)((int)this + 0x154) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar15 = 0;
            puVar15 = puVar15 + 1;
          }
          for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
            *(undefined1 *)puVar15 = 0;
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          *(undefined4 *)((int)this + 0x204) = 0;
          *(undefined4 *)((int)this + 0x208) = 0;
          *(undefined4 *)((int)this + 0x20c) = 0;
          *(undefined4 *)((int)this + 0x210) = 0;
        }
        else {
          iVar10 = FUN_00408460(iVar6,0,(uint)*(ushort *)((int)this + 0x122),
                                *(undefined4 **)((int)this + 0x1b0));
          if (iVar10 != 0) {
            *param_7 = 0;
            return 0x8004e008;
          }
          *(undefined4 *)((int)this + 0x204) = *(undefined4 *)((int)this + 0x1d0);
          *(undefined4 *)((int)this + 0x208) = *(undefined4 *)((int)this + 0x1d4);
          *(undefined4 *)((int)this + 0x20c) = *(undefined4 *)((int)this + 0x1d8);
          *(undefined4 *)((int)this + 0x210) = *(undefined4 *)((int)this + 0x1dc);
        }
        if (*(short *)((int)this + 0x122) == 2) {
          *(undefined4 *)((int)this + 0x1d0) = *(undefined4 *)((int)this + 0x214);
          *(uint *)((int)this + 0x158) = (uint)*(byte *)((int)this + 0x229);
          *(uint *)((int)this + 0x1b8) = (uint)*(byte *)((int)this + 0x22b);
          *(undefined4 *)((int)this + 0x1d4) = *(undefined4 *)((int)this + 0x218);
          *(undefined4 *)((int)this + 0x1d8) = *(undefined4 *)((int)this + 0x21c);
          *(undefined4 *)((int)this + 0x1dc) = *(undefined4 *)((int)this + 0x220);
          if (*(byte *)((int)this + 0x22b) == 5) {
            puVar15 = *(undefined4 **)((int)this + 0x1b4);
            for (uVar3 = *(uint *)((int)this + 0x154) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar15 = 0;
              puVar15 = puVar15 + 1;
            }
            for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
              *(undefined1 *)puVar15 = 0;
              puVar15 = (undefined4 *)((int)puVar15 + 1);
            }
            *(undefined4 *)((int)this + 0x214) = 0;
            *(undefined4 *)((int)this + 0x218) = 0;
            *(undefined4 *)((int)this + 0x21c) = 0;
            *(undefined4 *)((int)this + 0x220) = 0;
          }
          else {
            iVar10 = FUN_00408460(iVar6,1,2,*(undefined4 **)((int)this + 0x1b4));
            if (iVar10 != 0) {
              *param_7 = 0;
              return 0x8004e008;
            }
            *(undefined4 *)((int)this + 0x214) = *(undefined4 *)((int)this + 0x1d0);
            *(undefined4 *)((int)this + 0x218) = *(undefined4 *)((int)this + 0x1d4);
            *(undefined4 *)((int)this + 0x21c) = *(undefined4 *)((int)this + 0x1d8);
            *(undefined4 *)((int)this + 0x220) = *(undefined4 *)((int)this + 0x1dc);
          }
        }
        puVar11 = *(undefined2 **)((int)this + 0x184);
        local_14 = puVar11;
        cVar2 = FUN_0041c300((ushort *)((int)this + 0x120));
        if (*(short *)((int)this + 0x122) == 1) {
          if (CONCAT31(extraout_var,cVar2) == 0x11) {
            iVar10 = 0;
            if (0 < *(int *)((int)this + 0x154)) {
              do {
                iVar10 = iVar10 + 1;
                *puVar11 = *(undefined2 *)(*(int *)((int)this + 0x1b0) + -4 + iVar10 * 4);
                puVar11 = puVar11 + 1;
              } while (iVar10 < *(int *)((int)this + 0x154));
            }
          }
          else {
            iVar10 = 0;
            if (0 < *(int *)((int)this + 0x154)) {
              do {
                iVar5 = *(int *)(*(int *)((int)this + 0x1b0) + iVar10 * 4);
                if (iVar5 < -0x800000) {
                  iVar5 = -0x800000;
                }
                else if (0x7fffff < iVar5) {
                  iVar5 = 0x7fffff;
                }
                *puVar11 = (short)iVar5;
                iVar10 = iVar10 + 1;
                *(char *)(puVar11 + 1) = (char)((uint)iVar5 >> 0x10);
                puVar11 = (undefined2 *)((int)puVar11 + 3);
              } while (iVar10 < *(int *)((int)this + 0x154));
            }
          }
        }
        else if (CONCAT31(extraout_var,cVar2) == 0x11) {
          if (*(int *)((int)this + 0x168) == 0) {
            iVar10 = 0;
            if (0 < *(int *)((int)this + 0x154)) {
              do {
                iVar10 = iVar10 + 1;
                puVar11[iVar10 * 2 + -2] =
                     *(undefined2 *)(*(int *)((int)this + 0x1b0) + -4 + iVar10 * 4);
                puVar11[iVar10 * 2 + -1] =
                     *(undefined2 *)(*(int *)((int)this + 0x1b4) + -4 + iVar10 * 4);
              } while (iVar10 < *(int *)((int)this + 0x154));
            }
          }
          else {
            iVar10 = 0;
            if (0 < *(int *)((int)this + 0x154)) {
              do {
                iVar5 = *(int *)(*(int *)((int)this + 0x1b0) + iVar10 * 4);
                iVar6 = *(int *)(*(int *)((int)this + 0x1b4) + iVar10 * 4);
                uVar3 = iVar6 + iVar5 * 2;
                uVar9 = iVar5 * 2 - iVar6;
                if ((((int)uVar3 < 1) || (-1 < (int)uVar9)) &&
                   ((-1 < (int)uVar3 || ((int)uVar9 < 1)))) {
LAB_00408b85:
                  sVar7 = (short)((int)uVar3 / 2);
                  sVar14 = (short)((int)uVar9 / 2);
                }
                else if (((iVar5 < 1) || (iVar6 < 1)) && ((-1 < iVar5 || (-1 < iVar6)))) {
                  sVar14 = (short)((int)uVar9 / 2);
                  if ((uVar3 & 1) == 0) {
                    sVar7 = (short)((int)uVar3 / 2);
                  }
                  else if ((int)uVar3 < 1) {
                    sVar7 = (short)((int)uVar3 / 2) + -1;
                  }
                  else {
                    sVar7 = (short)((int)uVar3 / 2) + 1;
                  }
                }
                else {
                  sVar7 = (short)((int)uVar3 / 2);
                  if ((uVar9 & 1) == 0) goto LAB_00408b85;
                  if ((int)uVar9 < 1) {
                    sVar14 = (short)((int)uVar9 / 2) + -1;
                  }
                  else {
                    sVar14 = (short)((int)uVar9 / 2) + 1;
                  }
                }
                iVar10 = iVar10 + 1;
                local_14[iVar10 * 2 + -2] = sVar7;
                local_14[iVar10 * 2 + -1] = sVar14;
              } while (iVar10 < *(int *)((int)this + 0x154));
            }
          }
        }
        else if (*(int *)((int)this + 0x168) == 0) {
          iVar10 = 0;
          if (0 < *(int *)((int)this + 0x154)) {
            do {
              iVar5 = *(int *)(*(int *)((int)this + 0x1b0) + iVar10 * 4);
              if (iVar5 < -0x800000) {
                iVar5 = -0x800000;
              }
              else if (0x7fffff < iVar5) {
                iVar5 = 0x7fffff;
              }
              *puVar11 = (short)iVar5;
              *(char *)(puVar11 + 1) = (char)((uint)iVar5 >> 0x10);
              iVar5 = *(int *)(*(int *)((int)this + 0x1b4) + iVar10 * 4);
              if (iVar5 < -0x800000) {
                iVar5 = -0x800000;
              }
              else if (0x7fffff < iVar5) {
                iVar5 = 0x7fffff;
              }
              *(short *)((int)puVar11 + 3) = (short)iVar5;
              iVar10 = iVar10 + 1;
              *(char *)((int)puVar11 + 5) = (char)((uint)iVar5 >> 0x10);
              puVar11 = puVar11 + 3;
            } while (iVar10 < *(int *)((int)this + 0x154));
          }
        }
        else {
          iVar10 = 0;
          if (0 < *(int *)((int)this + 0x154)) {
            do {
              local_14 = puVar11;
              iVar5 = *(int *)(*(int *)((int)this + 0x1b0) + iVar10 * 4);
              iVar6 = *(int *)(*(int *)((int)this + 0x1b4) + iVar10 * 4);
              uVar3 = iVar6 + iVar5 * 2;
              uVar9 = iVar5 * 2 - iVar6;
              if ((((int)uVar3 < 1) || (-1 < (int)uVar9)) && ((-1 < (int)uVar3 || ((int)uVar9 < 1)))
                 ) {
LAB_00408caa:
                iVar5 = (int)uVar3 / 2;
                iVar6 = (int)uVar9 / 2;
              }
              else if (((iVar5 < 1) || (iVar6 < 1)) && ((-1 < iVar5 || (-1 < iVar6)))) {
                iVar6 = (int)uVar9 / 2;
                if ((uVar3 & 1) == 0) {
                  iVar5 = (int)uVar3 / 2;
                }
                else if ((int)uVar3 < 1) {
                  iVar5 = (int)uVar3 / 2 + -1;
                }
                else {
                  iVar5 = (int)uVar3 / 2 + 1;
                }
              }
              else {
                iVar5 = (int)uVar3 / 2;
                if ((uVar9 & 1) == 0) goto LAB_00408caa;
                if ((int)uVar9 < 1) {
                  iVar6 = (int)uVar9 / 2 + -1;
                }
                else {
                  iVar6 = (int)uVar9 / 2 + 1;
                }
              }
              if (iVar5 < -0x800000) {
                iVar5 = -0x800000;
              }
              else if (0x7fffff < iVar5) {
                iVar5 = 0x7fffff;
              }
              *local_14 = (short)iVar5;
              *(char *)(local_14 + 1) = (char)((uint)iVar5 >> 0x10);
              if (iVar6 < -0x800000) {
                iVar6 = -0x800000;
              }
              else if (0x7fffff < iVar6) {
                iVar6 = 0x7fffff;
              }
              *(short *)((int)local_14 + 3) = (short)iVar6;
              iVar10 = iVar10 + 1;
              *(char *)((int)local_14 + 5) = (char)((uint)iVar6 >> 0x10);
              puVar11 = local_14 + 3;
              local_14 = local_14 + 3;
            } while (iVar10 < *(int *)((int)this + 0x154));
          }
        }
      }
      else {
        uVar3 = (*(int *)((int)this + 0x2a0) - param_1) + 1;
        if ((int)uVar13 < (int)uVar3) {
          uVar3 = uVar13;
        }
        uVar12 = (uint)*(ushort *)(*(int *)((int)this + 0x50) + 0xc);
        uVar8 = uVar12 * uVar3;
        puVar15 = (undefined4 *)
                  ((param_1 - *(int *)((int)this + 0x298)) * uVar12 + *(int *)((int)this + 0x184));
        puVar16 = param_4;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar16 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
        }
        bVar1 = false;
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar16 = *(undefined1 *)puVar15;
          puVar15 = (undefined4 *)((int)puVar15 + 1);
          puVar16 = (undefined4 *)((int)puVar16 + 1);
        }
        param_4 = (undefined4 *)
                  ((int)param_4 + *(ushort *)(*(int *)((int)this + 0x50) + 0xc) * uVar3);
        uVar13 = uVar13 - uVar3;
        bVar17 = CARRY4(param_1,uVar3);
        param_1 = param_1 + uVar3;
        param_2 = param_2 + ((int)uVar3 >> 0x1f) + (uint)bVar17;
      }
    }
  }
  return 0x8004e007;
}


