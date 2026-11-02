/* Module: rmme3260.dll
   Function: FUN_66238120
   Address: 66238120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x662385fd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_66238120(int *param_1)

{
  char cVar1;
  double dVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int nHeight;
  int nWidth;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 *puVar16;
  int *piVar17;
  BOOL BVar18;
  uint *puVar19;
  int *piVar20;
  char local_174 [256];
  undefined4 local_74 [13];
  tagRECT local_40;
  undefined1 local_30 [8];
  int local_28;
  int *local_24;
  int local_20;
  undefined8 local_1c;
  int local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  piVar3 = param_1;
  if ((*(byte *)((int)param_1 + 0x55) & 2) == 0) {
    return 0x80004005;
  }
  if ((*(byte *)(param_1 + 0x15) & 0x20) == 0) {
    iVar4 = param_1[0x10];
    if (iVar4 == 0) {
      GetAsyncKeyState(0x1b);
      FUN_6623abb0(*(int **)((int)piVar3 + 0xe1));
      param_1 = (int *)0x0;
      local_c = (int *)0x0;
      iVar4 = (*(code *)**(undefined4 **)piVar3[7])((undefined4 *)piVar3[7],&DAT_6626abb8,&param_1);
      if (iVar4 == 0) {
        uVar12 = 0xffffffff;
        pcVar5 = s_FullScreenData_6626fd54;
        do {
          pcVar15 = pcVar5;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        pcVar5 = pcVar15 + -uVar12;
        pcVar15 = local_174;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar5 = &DAT_6626fdc0;
        do {
          pcVar15 = pcVar5;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        iVar4 = -1;
        pcVar5 = local_174;
        do {
          pcVar14 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar15 + -uVar12;
        pcVar15 = pcVar14 + -1;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar5 = s_PreferedMode_6626fdb0;
        do {
          pcVar15 = pcVar5;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        iVar4 = -1;
        pcVar5 = local_174;
        do {
          pcVar14 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar15 + -uVar12;
        pcVar15 = pcVar14 + -1;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        (**(code **)(*param_1 + 0xc))(param_1,local_174,&local_c);
        local_8 = 0;
        local_1c = (double)(ulonglong)(uint)local_1c;
        local_20 = 0;
        if (local_c != (int *)0x0) {
          piVar17 = &local_20;
          piVar20 = (int *)((int)&local_1c + 4);
          puVar19 = &local_8;
          pcVar5 = (char *)(**(code **)(*local_c + 0x1c))(local_c);
          iVar4 = FUN_6623f5a0(pcVar5,(int *)puVar19,piVar20,piVar17);
          if (iVar4 == 0) {
            FUN_66238a00((int)(piVar3 + -3));
            piVar17 = *(int **)((int)piVar3 + 0x101);
            if (piVar17 != (int *)0x0) {
              (**(code **)(*piVar17 + 0x50))(piVar17,**(undefined4 **)((int)piVar3 + 0xe1),0x11);
            }
            piVar17 = *(int **)((int)piVar3 + 0x101);
            if (piVar17 != (int *)0x0) {
              (**(code **)(*piVar17 + 0x54))(piVar17,local_8,local_1c._4_4_,local_20);
            }
          }
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
            local_c = (int *)0x0;
          }
        }
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
          param_1 = (int *)0x0;
        }
      }
      FUN_6623abb0(*(int **)((int)piVar3 + 0xe1));
      DVar6 = GetCurrentThreadId();
      piVar3[0x2e] = DVar6;
      (**(code **)(piVar3[-2] + 0x34))(piVar3 + -2,&local_14);
      local_8 = 0;
      iVar4 = (*(code *)**(undefined4 **)piVar3[7])((undefined4 *)piVar3[7],&DAT_6626abb8,&param_1);
      if (iVar4 == 0) {
        uVar12 = 0xffffffff;
        pcVar5 = s_FullScreenData_6626fd54;
        do {
          pcVar15 = pcVar5;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        pcVar5 = pcVar15 + -uVar12;
        pcVar15 = local_174;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        local_c = (int *)0x0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar5 = &DAT_6626fdc0;
        do {
          pcVar15 = pcVar5;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        iVar4 = -1;
        pcVar5 = local_174;
        do {
          pcVar14 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar15 + -uVar12;
        pcVar15 = pcVar14 + -1;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar5 = s_PostageStamp_6626fda0;
        do {
          pcVar15 = pcVar5;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        iVar4 = -1;
        pcVar5 = local_174;
        do {
          pcVar14 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar15 + -uVar12;
        pcVar15 = pcVar14 + -1;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        (**(code **)(*param_1 + 0xc))(param_1,local_174,&local_c);
        if (local_c != (int *)0x0) {
          pcVar5 = (char *)(**(code **)(*local_c + 0x1c))(local_c);
          iVar4 = atoi(pcVar5);
          local_8 = (uint)(iVar4 == 1);
        }
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
          param_1 = (int *)0x0;
        }
      }
      if (local_8 == 0) {
        local_8 = GetSystemMetrics(0);
        local_1c = (double)(int)local_8 / (double)local_14;
        local_8 = GetSystemMetrics(1);
        dVar2 = (double)(int)local_8 / (double)local_10;
        if (local_1c < (double)(int)local_8 / (double)local_10) {
          dVar2 = local_1c;
        }
        *(double *)((int)piVar3 + 0x109) = dVar2;
      }
      else {
        iVar4 = GetSystemMetrics(0);
        if ((iVar4 < local_14 * 2) || (iVar4 = GetSystemMetrics(1), iVar4 < local_10 * 2)) {
          *(undefined4 *)((int)piVar3 + 0x109) = 0;
          *(undefined4 *)((int)piVar3 + 0x10d) = 0x3ff00000;
        }
        else {
          *(undefined4 *)((int)piVar3 + 0x109) = 0;
          *(undefined4 *)((int)piVar3 + 0x10d) = 0x40000000;
        }
      }
      iVar4 = GetSystemMetrics(0);
      iVar7 = ftol();
      iVar8 = GetSystemMetrics(1);
      iVar9 = ftol();
      GetWindowRect(*(HWND *)((int)piVar3 + 0x105),&local_40);
      local_8 = local_40.bottom - local_40.top;
      BVar18 = 1;
      nHeight = ftol();
      local_8 = local_40.right - local_40.left;
      nWidth = ftol();
      MoveWindow(*(HWND *)((int)piVar3 + 0xe5),(iVar4 - iVar7) / 2,(iVar8 - iVar9) / 2,nWidth,
                 nHeight,BVar18);
      FUN_66245c10(*(int **)((int)piVar3 + 0x76));
    }
    else {
      uVar11 = *(undefined4 *)(iVar4 + 0x119);
      *(undefined4 *)((int)param_1 + 0x109) = *(undefined4 *)(iVar4 + 0x115);
      piVar17 = param_1 + -2;
      *(undefined4 *)((int)param_1 + 0x10d) = uVar11;
      (**(code **)(*piVar17 + 0x34))(piVar17,&local_14);
      (**(code **)(*piVar17 + 0x2c))(piVar17,local_30);
      BVar18 = 1;
      iVar4 = ftol();
      iVar7 = ftol();
      iVar8 = ftol();
      iVar9 = ftol();
      MoveWindow(*(HWND *)((int)piVar3 + 0xe5),iVar9,iVar8,iVar7,iVar4,BVar18);
    }
    piVar17 = piVar3 + -3;
    *(byte *)(piVar3 + 0x15) = *(byte *)(piVar3 + 0x15) | 0x20;
    param_1 = piVar17;
    puVar10 = (undefined4 *)FUN_662352f0((int)piVar17);
    if (puVar10 != (undefined4 *)0x0) {
      piVar17 = (int *)piVar3[0x2c];
      puVar16 = local_74;
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar16 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar16 = puVar16 + 1;
      }
      (**(code **)(*piVar17 + 0x18))(piVar17);
      piVar17 = param_1;
      FUN_66235300(param_1,local_74);
      iVar4 = *(int *)piVar3[0x2d];
      uVar11 = FUN_662352f0((int)piVar17);
      (**(code **)(iVar4 + 0x10))(piVar3[0x2d],uVar11);
      piVar17 = param_1;
    }
    local_28 = piVar3[0xc];
    local_24 = piVar3 + 0xb;
    while (local_28 != 0) {
      puVar10 = (undefined4 *)FUN_66250c10(local_28);
      param_1 = (int *)0x0;
      iVar4 = (*(code *)**(undefined4 **)*puVar10)((undefined4 *)*puVar10,&DAT_6626ac98,&param_1);
      if (iVar4 == 0) {
        (**(code **)(*param_1 + 0xc))(param_1);
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
      FUN_66250bf0(&local_28);
    }
    if (piVar3[0x10] == 0) {
      FUN_662388c0((int)piVar17);
      FUN_66237c00((int)piVar17);
      _DAT_6626fcc4 = 1;
      FUN_66237ea0(piVar17);
    }
  }
  return 0;
}


