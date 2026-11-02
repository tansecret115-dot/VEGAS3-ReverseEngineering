/* Module: vidpcore.dll
   Function: FUN_5de8e060
   Address: 5de8e060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de8e060(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  char cVar1;
  undefined4 *puVar2;
  SIZE_T dwBytes;
  wchar_t *pMem;
  int iVar3;
  WPARAM WVar4;
  int *piVar5;
  UINT UVar6;
  LRESULT LVar7;
  HGLOBAL pvVar8;
  LPVOID pvVar9;
  uint uVar10;
  int *unaff_EBX;
  uint uVar11;
  size_t _Count;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  float10 fVar15;
  wchar_t *local_124;
  int *local_120;
  undefined4 local_11c;
  SIZE_T local_118 [5];
  CHAR local_104 [260];
  
  uVar11 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if ((uVar11 < 0x9e34) || (40999 < uVar11)) {
    if (0x51d < uVar11) {
      if (0x7f00 < uVar11) {
        if (uVar11 == 41000) {
          FUN_5deb3eb0(1,param_1[0xc],0x3f7,0xf,0);
          return 0;
        }
        if (uVar11 != 0xa029) {
          return 0;
        }
        FUN_5de06da0(param_1[0xc]);
        return 0;
      }
      if (uVar11 != 0x7f00) {
        if (uVar11 == 0x569) {
          if (param_3 != 0x200) {
            return 0;
          }
          iVar3 = GetWindowTextA(param_4,local_104,0x104);
          if (iVar3 != 0) {
            fVar15 = (float10)FUN_5dec5e20(local_104,0);
            if ((float10)_DAT_5df18838 <= fVar15) {
              fVar15 = (float10)FUN_5dec5e20(local_104,0);
              if (fVar15 <= (float10)_DAT_5df20c88) {
                fVar15 = (float10)FUN_5dec5e20(local_104,0);
              }
              else {
                fVar15 = (float10)_DAT_5df20c88;
              }
            }
            else {
              fVar15 = (float10)_DAT_5df18838;
            }
            if ((float10)_DAT_5df1f300 <= ABS(fVar15 - (float10)(float)param_1[0x2c])) {
              param_1[0x2c] = (int)(float)fVar15;
              goto LAB_5de8e62d;
            }
          }
        }
        else {
          if (uVar11 != 0x56a) {
            if (uVar11 != 0x592) {
              return 0;
            }
            if (param_3 != 0x400) {
              return 0;
            }
            LVar7 = SendMessageA(param_4,0xb8,0,0);
            if (LVar7 == 0) {
              return 0;
            }
            local_120 = (int *)0x0;
            local_11c = 0x4b0;
            LVar7 = SendMessageA(param_4,0x45f,(WPARAM)&local_120,0);
            _Count = LVar7 + 1;
            dwBytes = _Count * 2;
            pvVar8 = GlobalAlloc(0x42,dwBytes);
            local_124 = GlobalLock(pvVar8);
            local_118[1] = 0;
            local_118[2] = 0x4b0;
            local_118[3] = 0;
            local_118[4] = 0;
            param_1[0x36] = _Count;
            local_118[0] = dwBytes;
            if (((int)_Count < 2) || (local_124 == (wchar_t *)0x0)) {
              if (param_1[0x32] == _Count) {
                UpdateWindow((HWND)param_1[0xc]);
              }
              else {
                if ((LPCVOID)param_1[0x33] != (LPCVOID)0x0) {
                  pvVar8 = GlobalHandle((LPCVOID)param_1[0x33]);
                  GlobalUnlock(pvVar8);
                  pvVar8 = GlobalHandle((LPCVOID)param_1[0x33]);
                  GlobalFree(pvVar8);
                  param_1[0x32] = 0;
                  param_1[0x33] = 0;
                }
                param_1[0x32] = 0;
                (**(code **)(*param_1 + 0x2c))(param_1);
              }
            }
            else {
              SendMessageA(param_4,0x45e,(WPARAM)local_118,(LPARAM)local_124);
              if ((param_1[0x32] == _Count) &&
                 (iVar3 = wcscmp((wchar_t *)param_1[0x33],local_124), iVar3 == 0)) {
                UpdateWindow((HWND)param_1[0xc]);
              }
              else {
                if ((LPCVOID)param_1[0x33] != (LPCVOID)0x0) {
                  pvVar8 = GlobalHandle((LPCVOID)param_1[0x33]);
                  GlobalUnlock(pvVar8);
                  pvVar8 = GlobalHandle((LPCVOID)param_1[0x33]);
                  GlobalFree(pvVar8);
                  param_1[0x32] = 0;
                  param_1[0x33] = 0;
                }
                if (0 < (int)_Count) {
                  pvVar8 = GlobalAlloc(0x40,dwBytes);
                  pvVar9 = GlobalLock(pvVar8);
                  param_1[0x33] = (int)pvVar9;
                }
                param_1[0x32] = _Count;
                wcsncpy((wchar_t *)param_1[0x33],local_124,_Count);
                (**(code **)(*param_1 + 0x2c))(param_1);
              }
            }
            pMem = local_124;
            if (local_124 == (wchar_t *)0x0) {
              return 0;
            }
            pvVar8 = GlobalHandle(local_124);
            GlobalUnlock(pvVar8);
            pvVar8 = GlobalHandle(pMem);
            GlobalFree(pvVar8);
            return 0;
          }
          if (param_3 != 0x200) {
            return 0;
          }
          iVar3 = GetWindowTextA(param_4,local_104,0x104);
          if (iVar3 != 0) {
            fVar15 = (float10)FUN_5dec5e20(local_104,0);
            if ((float10)_DAT_5df18838 <= fVar15) {
              fVar15 = (float10)FUN_5dec5e20(local_104,0);
              if (fVar15 <= (float10)_DAT_5df20c88) {
                fVar15 = (float10)FUN_5dec5e20(local_104,0);
              }
              else {
                fVar15 = (float10)_DAT_5df20c88;
              }
            }
            else {
              fVar15 = (float10)_DAT_5df18838;
            }
            if ((float10)_DAT_5df1f300 <= ABS(fVar15 - (float10)(float)param_1[0x2d])) {
              param_1[0x2d] = (int)(float)fVar15;
LAB_5de8e62d:
              (**(code **)(*param_1 + 0x2c))(param_1);
              return 0;
            }
          }
        }
      }
      goto LAB_5de8e645;
    }
    if (uVar11 == 0x51d) {
      if (param_1[0x35] == 0) {
        return 0;
      }
      param_1[0x35] = 0;
      FUN_5de8d860();
      return 0;
    }
  }
  else {
    puVar2 = *(undefined4 **)param_1[2];
    local_124 = (wchar_t *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,&DAT_5df17c20,&local_124);
    }
    iVar3 = (*(code *)**(undefined4 **)local_124)(local_124,&DAT_5df180c0,&local_120);
    if (-1 < iVar3) {
      (**(code **)(*local_120 + 0x14))(local_120,uVar11 - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_124 != (wchar_t *)0x0) {
      (**(code **)(*(int *)local_124 + 8))(local_124);
    }
    uVar11 = 0;
  }
  switch(uVar11) {
  case 0x495:
    if (param_3 == 1) {
      WVar4 = SendMessageA(param_4,0x147,0,0);
      LVar7 = SendMessageA(param_4,0x150,WVar4,0);
      param_1[0x23] = LVar7;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    break;
  case 0x496:
    if (param_3 == 1) {
      WVar4 = SendMessageA(param_4,0x147,0,0);
      LVar7 = SendMessageA(param_4,0x150,WVar4,0);
      param_1[0x22] = LVar7;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    break;
  case 0x499:
    piVar5 = param_1 + 0x28;
    if (param_1[0x35] == 0) {
      piVar5 = param_1 + 0x24;
    }
    SendMessageA(param_4,0x702,0,(LPARAM)piVar5);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x518:
    if (param_3 == 1) {
      WVar4 = SendMessageA(param_4,0x147,0,0);
      LVar7 = SendMessageA(param_4,0x150,WVar4,0);
      uVar11 = 0xffffffff;
      pcVar12 = (char *)(*(int *)(param_1[0x34] + 4) * LVar7 + 0x1c + *(int *)(param_1[0x34] + 8));
      do {
        pcVar13 = pcVar12;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar13 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      piVar5 = (int *)(pcVar13 + -uVar11);
      piVar14 = param_1 + 0x1a;
      for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *piVar14 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar14 = piVar14 + 1;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(char *)piVar14 = (char)*piVar5;
        piVar5 = (int *)((int)piVar5 + 1);
        piVar14 = (int *)((int)piVar14 + 1);
      }
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    break;
  case 0x519:
    if (param_3 == 1) {
      param_1[0x17] = 400;
      *(undefined1 *)(param_1 + 0x18) = 0;
      uVar11 = SendMessageA(param_4,0x147,0,0);
      if ((uVar11 & 1) != 0) {
        param_1[0x17] = 700;
      }
      if ((uVar11 & 2) != 0) {
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    break;
  case 0x51a:
    if (param_3 == 0x200) {
      UVar6 = GetDlgItemInt((HWND)param_1[0xc],0x51a,(BOOL *)&local_120,1);
      if (UVar6 < 4) {
        UVar6 = 4;
      }
      else {
        UVar6 = GetDlgItemInt((HWND)param_1[0xc],0x51a,(BOOL *)&local_120,1);
        if (UVar6 < 0x321) {
          UVar6 = GetDlgItemInt((HWND)param_1[0xc],0x51a,(BOOL *)&local_120,1);
        }
        else {
          UVar6 = 800;
        }
      }
      if (UVar6 != param_1[0x13]) {
        param_1[0x13] = UVar6;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
LAB_5de8e645:
      FUN_5de8d860();
      return 0;
    }
    break;
  case 0x51c:
    if (param_1[0x35] == 0) {
      param_1[0x35] = 1;
      FUN_5de8d860();
      return 0;
    }
  }
  return 0;
}


