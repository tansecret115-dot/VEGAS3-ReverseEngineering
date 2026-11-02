/* Module: gifplug.dll
   Function: FUN_5f6c3900
   Address: 5f6c3900
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f6c3900(void *param_1)

{
  PLONG lpDistanceToMoveHigh;
  byte bVar1;
  LPCVOID pMem;
  undefined4 *puVar2;
  HGLOBAL pvVar3;
  BOOL BVar4;
  uint uVar5;
  LPVOID pvVar6;
  int iVar7;
  undefined4 *puVar8;
  DWORD DVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  undefined4 *puVar14;
  int *piVar15;
  char *pcVar16;
  bool bVar17;
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char local_8;
  char local_7;
  char local_6;
  char local_5;
  char local_4;
  char local_3;
  
  pMem = *(LPCVOID *)((int)param_1 + 0x32d);
  local_14 = -0x7fffbffb;
  if (pMem != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
    *(undefined4 *)((int)param_1 + 0x32d) = 0;
  }
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined2 *)((int)param_1 + 0x32b) = 1;
  BVar4 = ReadFile(*(HANDLE *)((int)param_1 + 4),&local_8,6,&local_10,(LPOVERLAPPED)0x0);
  if ((((((BVar4 != 0) && (local_8 == 'G')) && (local_7 == 'I')) &&
       ((local_6 == 'F' && (local_5 == '8')))) && ((local_4 == '7' || (local_4 == '9')))) &&
     (local_3 == 'a')) {
    if (local_4 == '7') {
      *(undefined4 *)((int)param_1 + 0x14) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x14) = 1;
    }
    BVar4 = ReadFile(*(HANDLE *)((int)param_1 + 4),(LPVOID)((int)param_1 + 0x18),7,&local_10,
                     (LPOVERLAPPED)0x0);
    if ((BVar4 != 0) &&
       (((*(byte *)((int)param_1 + 0x1c) & 0x80) == 0 ||
        (BVar4 = ReadFile(*(HANDLE *)((int)param_1 + 4),(LPVOID)((int)param_1 + 0x1f),
                          (1 << (*(byte *)((int)param_1 + 0x1c) & 7) + 1) * 3,&local_10,
                          (LPOVERLAPPED)0x0), BVar4 != 0)))) {
LAB_5f6c3a09:
      uVar5 = FUN_5f6c3fa0((int)param_1);
      if ((int)uVar5 < 0) {
        return -0x7fffbffb;
      }
      switch(uVar5 & 0xff) {
      case 0:
      case 0x3b:
        iVar10 = 0;
        break;
      default:
        iVar10 = -0x7fffbffb;
        break;
      case 0x21:
        uVar5 = FUN_5f6c3fa0((int)param_1);
        uVar5 = uVar5 & 0xff;
        if (uVar5 == 0xf9) {
          iVar10 = *(int *)((int)param_1 + 0xc);
          if (iVar10 <= *(int *)((int)param_1 + 8)) {
            puVar2 = *(undefined4 **)((int)param_1 + 0x32d);
            if (puVar2 == (undefined4 *)0x0) {
              *(int *)((int)param_1 + 0xc) = iVar10 + 4;
              pvVar3 = GlobalAlloc(0x40,(iVar10 + 4) * 0x319);
              pvVar6 = GlobalLock(pvVar3);
              *(LPVOID *)((int)param_1 + 0x32d) = pvVar6;
              iVar10 = 0;
              do {
                iVar7 = *(int *)((int)param_1 + 0xc) + iVar10;
                iVar10 = iVar10 + 1;
                *(undefined4 *)(iVar7 * 0x319 + -0x94f + *(int *)((int)param_1 + 0x32d)) = 0;
              } while (iVar10 < 4);
            }
            else {
              *(int *)((int)param_1 + 0xc) = iVar10 + 4;
              pvVar3 = GlobalAlloc(0x40,(iVar10 + 4) * 0x319);
              puVar8 = GlobalLock(pvVar3);
              *(undefined4 **)((int)param_1 + 0x32d) = puVar8;
              uVar5 = (*(int *)((int)param_1 + 0xc) + -4) * 0x319;
              puVar14 = puVar2;
              for (uVar11 = uVar5 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar8 = *puVar14;
                puVar14 = puVar14 + 1;
                puVar8 = puVar8 + 1;
              }
              for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined1 *)puVar8 = *(undefined1 *)puVar14;
                puVar14 = (undefined4 *)((int)puVar14 + 1);
                puVar8 = (undefined4 *)((int)puVar8 + 1);
              }
              pvVar3 = GlobalHandle(puVar2);
              GlobalUnlock(pvVar3);
              pvVar3 = GlobalHandle(puVar2);
              GlobalFree(pvVar3);
              iVar10 = 0;
              do {
                iVar7 = *(int *)((int)param_1 + 0xc) + iVar10;
                iVar10 = iVar10 + 1;
                *(undefined4 *)(iVar7 * 0x319 + -0x94f + *(int *)((int)param_1 + 0x32d)) = 0;
              } while (iVar10 < 4);
            }
          }
          uVar5 = FUN_5f6c48a0(param_1,(LPVOID)(*(int *)((int)param_1 + 8) * 0x319 +
                                               *(int *)((int)param_1 + 0x32d)));
          if (uVar5 != 4) {
            return -0x7fffbffb;
          }
          *(undefined4 *)
           (*(int *)((int)param_1 + 8) * 0x319 + 0x315 + *(int *)((int)param_1 + 0x32d)) = 1;
LAB_5f6c3a54:
          local_14 = FUN_5f6c48f0(param_1);
        }
        else {
          if ((uVar5 == 0xfe) || (uVar5 != 0xff)) goto LAB_5f6c3a54;
          uVar5 = FUN_5f6c48a0(param_1,(int *)((int)param_1 + 799));
          if (uVar5 != 0xb) {
            return -0x7fffbffb;
          }
          iVar10 = 2;
          bVar17 = true;
          piVar12 = (int *)"NETSCAPE";
          piVar15 = (int *)((int)param_1 + 799);
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            bVar17 = *piVar12 == *piVar15;
            piVar12 = piVar12 + 1;
            piVar15 = piVar15 + 1;
          } while (bVar17);
          if (bVar17) {
            iVar10 = 3;
            bVar17 = true;
            pcVar13 = "2.0";
            pcVar16 = (char *)((int)param_1 + 0x327);
            do {
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              bVar17 = *pcVar13 == *pcVar16;
              pcVar13 = pcVar13 + 1;
              pcVar16 = pcVar16 + 1;
            } while (bVar17);
            if (!bVar17) {
              return -0x7fffbffb;
            }
            uVar5 = FUN_5f6c48a0(param_1,(LPVOID)((int)param_1 + 0x32a));
            if (uVar5 != 3) {
              return -0x7fffbffb;
            }
            if (*(short *)((int)param_1 + 0x32b) != 0) {
              *(short *)((int)param_1 + 0x32b) = *(short *)((int)param_1 + 0x32b) + 1;
            }
            *(undefined4 *)((int)param_1 + 0x10) = 1;
          }
          local_14 = FUN_5f6c48f0(param_1);
        }
        if (local_14 < 0) {
          return local_14;
        }
        goto LAB_5f6c3a09;
      case 0x2c:
        iVar10 = *(int *)((int)param_1 + 0xc);
        if (iVar10 <= *(int *)((int)param_1 + 8)) {
          puVar2 = *(undefined4 **)((int)param_1 + 0x32d);
          if (puVar2 == (undefined4 *)0x0) {
            *(int *)((int)param_1 + 0xc) = iVar10 + 4;
            pvVar3 = GlobalAlloc(0x40,(iVar10 + 4) * 0x319);
            pvVar6 = GlobalLock(pvVar3);
            *(LPVOID *)((int)param_1 + 0x32d) = pvVar6;
            iVar10 = 0;
            do {
              iVar7 = *(int *)((int)param_1 + 0xc) + iVar10;
              iVar10 = iVar10 + 1;
              *(undefined4 *)(iVar7 * 0x319 + -0x94f + *(int *)((int)param_1 + 0x32d)) = 0;
            } while (iVar10 < 4);
          }
          else {
            *(int *)((int)param_1 + 0xc) = iVar10 + 4;
            pvVar3 = GlobalAlloc(0x40,(iVar10 + 4) * 0x319);
            puVar8 = GlobalLock(pvVar3);
            *(undefined4 **)((int)param_1 + 0x32d) = puVar8;
            uVar5 = (*(int *)((int)param_1 + 0xc) + -4) * 0x319;
            puVar14 = puVar2;
            for (uVar11 = uVar5 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar8 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar8 = puVar8 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar8 = *(undefined1 *)puVar14;
              puVar14 = (undefined4 *)((int)puVar14 + 1);
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
            pvVar3 = GlobalHandle(puVar2);
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(puVar2);
            GlobalFree(pvVar3);
            iVar10 = 0;
            do {
              iVar7 = *(int *)((int)param_1 + 0xc) + iVar10;
              iVar10 = iVar10 + 1;
              *(undefined4 *)(iVar7 * 0x319 + -0x94f + *(int *)((int)param_1 + 0x32d)) = 0;
            } while (iVar10 < 4);
          }
        }
        pvVar6 = (LPVOID)(*(int *)((int)param_1 + 8) * 0x319 + 4 + *(int *)((int)param_1 + 0x32d));
        BVar4 = ReadFile(*(HANDLE *)((int)param_1 + 4),pvVar6,9,&local_10,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          return -0x7fffbffb;
        }
        bVar1 = *(byte *)((int)pvVar6 + 8);
        if (((bVar1 & 0x80) != 0) &&
           (BVar4 = ReadFile(*(HANDLE *)((int)param_1 + 4),
                             (LPVOID)(*(int *)((int)param_1 + 8) * 0x319 + 0xd +
                                     *(int *)((int)param_1 + 0x32d)),(1 << (bVar1 & 7) + 1) * 3,
                             &local_c,(LPOVERLAPPED)0x0), BVar4 == 0)) {
          return local_14;
        }
        lpDistanceToMoveHigh =
             (PLONG)(*(int *)((int)param_1 + 8) * 0x319 + 0x311 + *(int *)((int)param_1 + 0x32d));
        *lpDistanceToMoveHigh = 0;
        DVar9 = SetFilePointer(*(HANDLE *)((int)param_1 + 4),0,lpDistanceToMoveHigh,1);
        *(DWORD *)(*(int *)((int)param_1 + 8) * 0x319 + 0x30d + *(int *)((int)param_1 + 0x32d)) =
             DVar9;
        uVar5 = FUN_5f6c3fa0((int)param_1);
        if ((int)uVar5 < 0) {
          return -0x7fffbffb;
        }
        local_14 = FUN_5f6c48f0(param_1);
        if (local_14 < 0) {
          return local_14;
        }
        *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + 1;
        goto LAB_5f6c3a09;
      }
      *(undefined4 *)((int)param_1 + 0x331) = 1;
      if (1 < *(int *)((int)param_1 + 8)) {
        *(undefined4 *)((int)param_1 + 0x10) = 1;
        return iVar10;
      }
      return iVar10;
    }
  }
  return -0x7fffbffb;
}


