/* Module: encn3260.dll
   Function: FUN_664b5070
   Address: 664b5070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b5070(uint *param_1,uint param_2,byte param_3,LPCSTR param_4)

{
  uint *puVar1;
  LPCSTR pCVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  HDC hdc;
  HDC pHVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_24 [8];
  
  puVar1 = param_1;
  if (((param_1 == (uint *)0x0) || (param_2 == 0)) || ((*param_1 & 0x100) != 0)) {
    return 0x80070057;
  }
  puVar10 = param_1;
  for (iVar8 = 0x33e; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  param_1[1] = param_2;
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_664ba900(puVar3);
  }
  puVar1[0x217] = uVar4;
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_664ba900(puVar3);
  }
  pCVar2 = param_4;
  puVar1[0x218] = uVar4;
  if ((param_3 & 1) == 0) {
    hdc = GetDC((HWND)puVar1[1]);
    if (hdc != (HDC)0x0) {
      pHVar7 = CreateCompatibleDC(hdc);
      puVar1[0x219] = (uint)pHVar7;
      if (pHVar7 != (HDC)0x0) {
        pHVar7 = CreateCompatibleDC(hdc);
        puVar1[0x21a] = (uint)pHVar7;
        if (pHVar7 != (HDC)0x0) {
          ReleaseDC((HWND)puVar1[1],hdc);
          SetStretchBltMode((HDC)puVar1[0x219],3);
          SetStretchBltMode((HDC)puVar1[0x21a],3);
          puVar1[3] = (uint)param_4;
          puVar1[0x10e] = 0xb;
          iVar8 = FUN_664b5760((LPBITMAPINFO)(puVar1 + 4),param_4);
          if (iVar8 == 0) {
            uVar4 = FUN_664ba320((int)(puVar1 + 4));
            puVar1[0x10e] = uVar4;
            if (uVar4 != 0xb) {
              windraw_InitColorConverter();
LAB_664b540c:
              *puVar1 = *puVar1 | 0x100;
              FUN_664b4e80((byte *)puVar1,puVar1[1],0x311);
              return 0;
            }
          }
          OutputDebugStringA(s_WinDraw__cannot_obtain_display_p_664e39dc);
        }
      }
    }
    if ((HGDIOBJ)puVar1[0x21c] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)puVar1[0x21c]);
      puVar1[0x21c] = 0;
    }
    if ((HDC)puVar1[0x219] != (HDC)0x0) {
      DeleteDC((HDC)puVar1[0x219]);
      puVar1[0x219] = 0;
    }
    if ((HDC)puVar1[0x21a] == (HDC)0x0) {
      return 0x80004005;
    }
    DeleteDC((HDC)puVar1[0x21a]);
    puVar1[0x21a] = 0;
    return 0x80004005;
  }
  *puVar1 = *puVar1 | 1;
  param_1 = (uint *)0x0;
  iVar8 = FUN_664b54a0((int)param_4,(int *)&param_1,puVar1 + 0x219);
  if (iVar8 == 0) {
    puVar10 = puVar1 + 0x21b;
    (**(code **)*param_1)(param_1,&DAT_664ddc30,puVar10);
    (**(code **)(*param_1 + 8))(param_1);
    param_1 = (uint *)0x0;
    if (*puVar10 != 0) {
      windraw_InitColorConverter();
      puVar1[3] = (uint)pCVar2;
      puVar1[0x10e] = 0xb;
      iVar8 = FUN_664b5760((LPBITMAPINFO)(puVar1 + 4),param_4);
      if (iVar8 == 0) {
        uVar4 = FUN_664ba320((int)(puVar1 + 4));
        puVar1[0x10e] = uVar4;
        if (uVar4 != 0xb) {
          puVar9 = puVar1 + 0x214;
          (**(code **)(*(int *)*puVar10 + 0x34))((int *)*puVar10,puVar9,puVar1[0x215]);
          if (*puVar9 != 0) {
            pvVar5 = malloc(*puVar9 << 2);
            puVar1[0x215] = (uint)pvVar5;
            pvVar5 = malloc(*puVar9 << 2);
            puVar1[0x216] = (uint)pvVar5;
            (**(code **)(*(int *)*puVar10 + 0x34))((int *)*puVar10,puVar9,puVar1[0x215]);
            uVar4 = 0;
            if (*puVar9 != 0) {
              do {
                iVar8 = FUN_664ba2f0(*(int *)(puVar1[0x215] + uVar4 * 4));
                *(int *)(puVar1[0x216] + uVar4 * 4) = iVar8;
                uVar4 = uVar4 + 1;
              } while (uVar4 < *puVar9);
            }
          }
          puVar10 = puVar1 + 0x2df;
          puVar9 = puVar10;
          for (iVar8 = 0x5f; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          *puVar10 = 0x13c;
          (**(code **)(*(int *)puVar1[0x21b] + 0x2c))((int *)puVar1[0x21b],puVar10,0);
          if ((((puVar1[0x2e0] & 0xa00) != 0) &&
              (iVar8 = (**(code **)(*(int *)puVar1[0x21b] + 0x50))((int *)puVar1[0x21b],puVar1[1],8)
              , iVar8 == 0)) && (iVar8 = FUN_664b6ba0((int *)puVar1), iVar8 == 0)) {
            puVar10 = local_24;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            local_24[0] = 0x20;
            local_24[1] = 0x44;
            iVar8 = (**(code **)(*(int *)puVar1[0x2da] + 0x54))((int *)puVar1[0x2da],local_24);
            if (((iVar8 == 0) && (iVar8 = FUN_664ba460(local_24), 4 < iVar8)) && (iVar8 < 10)) {
              if ((DAT_664f1510 == (undefined4 *)0x0) || (iVar6 = FUN_664b94d0(), iVar6 != 0)) {
                (*(code *)**(undefined4 **)puVar1[0x21b])
                          ((undefined4 *)puVar1[0x21b],&DAT_664ddc20,&param_1);
                DAT_664f1510 = FUN_664b94e0(param_1);
                (**(code **)(*param_1 + 8))(param_1);
                param_1 = (uint *)0x0;
              }
              if (DAT_664f1510[iVar8 + 0x1e] != 0) {
                FUN_664b4c70(&DAT_664f10f0,(void *)puVar1[0x217]);
                goto LAB_664b540c;
              }
            }
          }
          goto LAB_664b532a;
        }
      }
      OutputDebugStringA(s_WinDraw__cannot_obtain_display_p_664e39dc);
    }
  }
LAB_664b532a:
  if ((puVar1[0x21b] != 0) && (puVar1[0x219] != 0)) {
    FUN_664b4dc0((int *)(puVar1 + 0x21a),(int *)(puVar1 + 0x21b),puVar1 + 0x219);
    return 0x80004005;
  }
  return 0x80004005;
}


