/* Module: rmbe3260.dll
   Function: FUN_6602c140
   Address: 6602c140
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6602c140(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  BOOL BVar8;
  DWORD DVar9;
  HWND__ *hWnd;
  char *pcVar10;
  bool bVar11;
  int local_20 [3];
  int local_14;
  undefined4 uStack_10;
  uint local_c;
  int local_8;
  
  iVar4 = param_1;
  local_8 = 0;
  pcVar10 = s_StreamsChanged_6606dcc4;
  pbVar5 = param_2;
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_6602c17a:
      iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_6602c17f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_6602c17a;
    pbVar5 = pbVar5 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_6602c17f:
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    FUN_6602ca50(param_1);
    if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x44) == 0)) {
      if (*(int *)(param_1 + 0x50) != 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          FUN_6602bf30(param_1);
          *(undefined4 *)(param_1 + 0x38) = 0;
          if (*(int *)(param_1 + 0x34) == 0) {
            (**(code **)(**(int **)(param_1 + 0x1c) + 0x15c))(*(undefined4 *)(param_1 + 0x30));
            if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
              *(undefined4 *)(param_1 + 0x30) = 0;
            }
            FUN_6602bfe0(param_1);
          }
        }
        FUN_66007910(*(int *)(param_1 + 0x2c));
      }
      if (*(int *)(param_1 + 0x54) != 0) {
        if (*(int *)(param_1 + 0x34) != 0) {
          FUN_6602c090(param_1);
          if (*(int *)(param_1 + 0x38) == 0) {
            (**(code **)(**(int **)(param_1 + 0x1c) + 0x15c))(*(undefined4 *)(param_1 + 0x2c));
            if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
              *(undefined4 *)(param_1 + 0x2c) = 0;
            }
            FUN_6602bf30(param_1);
          }
          FUN_6602bfe0(param_1);
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
        FUN_66007910(*(int *)(param_1 + 0x28));
        FUN_66007910(*(int *)(param_1 + 0x30));
      }
      if ((*(int *)(param_1 + 0x50) == 0) && (*(int *)(param_1 + 0x38) == 0)) {
        if (*(int *)(param_1 + 0x34) == 0) {
          (**(code **)(**(int **)(param_1 + 0x1c) + 0x15c))(*(undefined4 *)(param_1 + 0x2c));
          if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
            *(undefined4 *)(param_1 + 0x2c) = 0;
          }
          *(undefined4 *)(param_1 + 0x38) = 1;
        }
        else {
          FUN_66007910(*(int *)(param_1 + 0x2c));
        }
      }
      if ((*(int *)(param_1 + 0x54) == 0) && (*(int *)(param_1 + 0x34) == 0)) {
        if (*(int *)(param_1 + 0x38) == 0) {
          (**(code **)(**(int **)(param_1 + 0x1c) + 0x15c))(*(undefined4 *)(param_1 + 0x28));
          if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
            *(undefined4 *)(param_1 + 0x28) = 0;
          }
          (**(code **)(**(int **)(param_1 + 0x1c) + 0x15c))(*(undefined4 *)(param_1 + 0x30));
          if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
            *(undefined4 *)(param_1 + 0x30) = 0;
          }
          *(undefined4 *)(param_1 + 0x34) = 1;
        }
        else {
          FUN_66007910(*(int *)(param_1 + 0x28));
          FUN_66007910(*(int *)(param_1 + 0x30));
        }
      }
    }
  }
  pcVar10 = s_audio_x_pn_realaudio_6606cc78;
  pbVar5 = param_2;
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_6602c361:
      iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_6602c366;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_6602c361;
    pbVar5 = pbVar5 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_6602c366:
  if ((iVar6 == 0) && (*(int *)(param_1 + 0x50) != 0)) {
    local_8 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                        (*(int **)(param_1 + 0x3c),s_currentaudiotime_6606cd24,&local_c);
    if (-1 < local_8) {
      uVar2 = *(uint *)(param_1 + 0xac);
      uVar7 = 0;
      if (uVar2 != 0) {
        if (local_c < uVar2) {
          uVar7 = (local_c - uVar2) - 1;
        }
        else {
          uVar7 = local_c - uVar2;
        }
      }
      if ((uVar2 == 0) || ((uVar7 != 0 && (uVar7 < 86400000)))) {
        *(uint *)(param_1 + 0xac) = local_c;
      }
    }
    if (*(int *)(param_1 + 0xb0) == 0) {
      if ((DAT_660751c8 == 0) && (DAT_660751cc == 0)) {
        BVar8 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_660751c8);
        if ((BVar8 == 0) ||
           (BVar8 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660751d0), BVar8 == 0))
        goto LAB_6602c4a0;
LAB_6602c483:
        uStack_10 = 0;
        local_14 = DAT_660751c8;
        DVar9 = ftol();
      }
      else {
        BVar8 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660751d0);
        if (BVar8 != 0) goto LAB_6602c483;
LAB_6602c4a0:
        DVar9 = GetTickCount();
      }
      *(DWORD *)(param_1 + 0xb0) = DVar9;
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xac);
    }
    if ((DAT_660751c8 == 0) && (DAT_660751cc == 0)) {
      BVar8 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_660751c8);
      if ((BVar8 == 0) ||
         (BVar8 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660751d0), BVar8 == 0))
      goto LAB_6602c579;
LAB_6602c55c:
      uStack_10 = 0;
      local_14 = DAT_660751c8;
      DVar9 = ftol();
    }
    else {
      BVar8 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660751d0);
      if (BVar8 != 0) goto LAB_6602c55c;
LAB_6602c579:
      DVar9 = GetTickCount();
    }
    *(DWORD *)(param_1 + 0xb8) = DVar9;
    param_1 = 0;
    FUN_6605b650(local_20);
    param_2 = (byte *)0x0;
    if (0 < *(int *)(iVar4 + 100)) {
      do {
        iVar6 = *(int *)(*(int *)(iVar4 + 0x60) + (int)param_2 * 4);
        FUN_6605bfd0(local_20,s__s__s_6606cd0c);
        (**(code **)(**(int **)(iVar4 + 0x3c) + 0x18))
                  (*(int **)(iVar4 + 0x3c),local_20[0],iVar6 + 0x30);
        FUN_6605bfd0(local_20,s__s__s_6606cd0c);
        local_8 = (**(code **)(**(int **)(iVar4 + 0x3c) + 0x18))
                            (*(int **)(iVar4 + 0x3c),local_20[0],(int *)(iVar6 + 0x34));
        if (*(int *)(iVar6 + 0x10) == 0) {
          param_1 = param_1 + *(int *)(iVar6 + 0x34);
        }
        param_2 = param_2 + 1;
      } while ((int)param_2 < *(int *)(iVar4 + 100));
    }
    *(int *)(iVar4 + 0xe0) = param_1;
  }
  else {
    pcVar10 = s_video_x_pn_realvideo_6606cde8;
    do {
      bVar1 = *param_2;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_6602c65e:
        iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_6602c663;
      }
      if (bVar1 == 0) break;
      bVar1 = param_2[1];
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_6602c65e;
      param_2 = param_2 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_6602c663:
    if ((iVar6 != 0) || (*(int *)(param_1 + 0x54) == 0)) goto LAB_6602c9b4;
    local_8 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                        (*(int **)(param_1 + 0x3c),s_currentvideotime_6606dec8,&local_c);
    if (-1 < local_8) {
      uVar2 = *(uint *)(param_1 + 0xbc);
      uVar7 = 0;
      if (uVar2 != 0) {
        if (local_c < uVar2) {
          uVar7 = (local_c - uVar2) - 1;
        }
        else {
          uVar7 = local_c - uVar2;
        }
      }
      if ((uVar2 == 0) || ((uVar7 != 0 && (uVar7 < 86400000)))) {
        *(uint *)(param_1 + 0xbc) = local_c;
      }
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      if ((DAT_660751c8 == 0) && (DAT_660751cc == 0)) {
        BVar8 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_660751c8);
        if ((BVar8 == 0) ||
           (BVar8 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660751d0), BVar8 == 0))
        goto LAB_6602c79d;
LAB_6602c780:
        uStack_10 = 0;
        local_14 = DAT_660751c8;
        DVar9 = ftol();
      }
      else {
        BVar8 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660751d0);
        if (BVar8 != 0) goto LAB_6602c780;
LAB_6602c79d:
        DVar9 = GetTickCount();
      }
      *(DWORD *)(param_1 + 0xc0) = DVar9;
      *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xbc);
    }
    if ((DAT_660751c8 == 0) && (DAT_660751cc == 0)) {
      BVar8 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_660751c8);
      if ((BVar8 == 0) ||
         (BVar8 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660751d0), BVar8 == 0))
      goto LAB_6602c876;
LAB_6602c859:
      uStack_10 = 0;
      local_14 = DAT_660751c8;
      DVar9 = ftol();
    }
    else {
      BVar8 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660751d0);
      if (BVar8 != 0) goto LAB_6602c859;
LAB_6602c876:
      DVar9 = GetTickCount();
    }
    iVar6 = 0;
    *(DWORD *)(param_1 + 200) = DVar9;
    param_2 = (byte *)0x0;
    param_1 = 0;
    FUN_6605b650(local_20);
    if (0 < *(int *)(iVar4 + 0x74)) {
      do {
        iVar3 = *(int *)(*(int *)(iVar4 + 0x70) + iVar6 * 4);
        FUN_6605bfd0(local_20,s__s__s_6606cd0c);
        (**(code **)(**(int **)(iVar4 + 0x3c) + 0x18))
                  (*(int **)(iVar4 + 0x3c),local_20[0],iVar3 + 0x2c);
        param_1 = param_1 + *(int *)(iVar3 + 0x2c);
        FUN_6605bfd0(local_20,s__s__s_6606cd0c);
        (**(code **)(**(int **)(iVar4 + 0x3c) + 0x18))
                  (*(int **)(iVar4 + 0x3c),local_20[0],iVar3 + 0x30);
        FUN_6605bfd0(local_20,s__s__s_6606cd0c);
        (**(code **)(**(int **)(iVar4 + 0x3c) + 0x18))
                  (*(int **)(iVar4 + 0x3c),local_20[0],iVar3 + 0x38);
        FUN_6605bfd0(local_20,s__s__s_6606cd0c);
        (**(code **)(**(int **)(iVar4 + 0x3c) + 0x18))
                  (*(int **)(iVar4 + 0x3c),local_20[0],iVar3 + 0x34);
        FUN_6605bfd0(local_20,s__s__s_6606cd0c);
        local_8 = (**(code **)(**(int **)(iVar4 + 0x3c) + 0x18))
                            (*(int **)(iVar4 + 0x3c),local_20[0],(int *)(iVar3 + 0x3c));
        param_2 = param_2 + *(int *)(iVar3 + 0x3c);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar4 + 0x74));
    }
    *(byte **)(iVar4 + 0xdc) = param_2;
    *(int *)(iVar4 + 0xd8) = param_1;
  }
  FUN_6605b770(local_20);
LAB_6602c9b4:
  if ((((*(int *)(iVar4 + 0x40) != 0) && (*(int *)(iVar4 + 0x44) == 0)) &&
      (*(CPNWindow **)(iVar4 + 0x1c) != (CPNWindow *)0x0)) &&
     (hWnd = CPNWindow::GetHWND(*(CPNWindow **)(iVar4 + 0x1c)), hWnd != (HWND__ *)0x0)) {
    PostMessageA(hWnd,0x590,0,0);
  }
  return local_8;
}


