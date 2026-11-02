/* Module: sftrans1.dll
   Function: FUN_00540150
   Address: 00540150
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_00540150(int param_1,RECT *param_2,int param_3,int *param_4,int param_5,undefined4 *param_6)

{
  uint uVar1;
  wchar_t *_Str;
  double _X;
  undefined4 uVar2;
  BOOL BVar3;
  int iVar4;
  size_t sVar5;
  HGLOBAL pvVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  RECT local_8c;
  int local_7c;
  LPCSTR local_78;
  int local_74;
  undefined4 local_70 [11];
  undefined4 local_44;
  HGDIOBJ local_40;
  HDC local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  tagRECT local_10;
  
  *(undefined4 *)(param_1 + 0x114) = 0;
  if (param_2 == (RECT *)0x0) {
    return -0x7fffbffb;
  }
  *(LONG *)(param_1 + 0x94) = param_2->left;
  *(LONG *)(param_1 + 0x98) = param_2->top;
  *(LONG *)(param_1 + 0x9c) = param_2->right;
  *(LONG *)(param_1 + 0xa0) = param_2->bottom;
  iVar11 = 0xb;
  if (param_5 == 0) {
    puVar14 = local_70;
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    local_38 = 0;
    local_44 = 0;
    local_74 = 0;
    local_40 = (HGDIOBJ)0x0;
    local_3c = (HDC)0x0;
    local_24 = 0;
    local_28 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_8c.left = *(int *)(param_3 + 8) + *param_4;
    local_8c.right = *(int *)(param_3 + 0x10) + *param_4;
    local_8c.bottom = *(int *)(param_3 + 0x14) + param_4[1];
    local_8c.top = *(int *)(param_3 + 0xc) + param_4[1];
    IntersectRect(&local_10,&local_8c,param_2);
    BVar3 = IntersectRect(&local_10,&local_10,(RECT *)(param_1 + 0x70));
    if (BVar3 == 0) {
      if (local_40 != (HGDIOBJ)0x0) {
        DeleteObject(local_40);
      }
    }
    else {
      iVar11 = FUN_00540af0(&local_10,&local_74,0);
      if ((-1 < iVar11) && (local_74 != 0)) {
        FUN_0053ffa0(&local_74,param_3,param_4);
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = local_38;
          param_6[1] = local_34;
          param_6[2] = local_30;
          param_6[3] = local_2c;
        }
        if (local_40 != (HGDIOBJ)0x0) {
          DeleteObject(local_40);
        }
        if (local_3c != (HDC)0x0) {
          DeleteDC(local_3c);
        }
        FUN_0047c4b0();
        return 0;
      }
      if (local_40 != (HGDIOBJ)0x0) {
        DeleteObject(local_40);
      }
    }
    if (local_3c != (HDC)0x0) {
      DeleteDC(local_3c);
    }
    FUN_0047c4b0();
    return -0x7fffbffb;
  }
  puVar14 = local_70;
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_44 = 0;
  local_10.left = *(LONG *)(param_3 + 8);
  local_2c = 0;
  local_74 = 0;
  local_10.top = *(LONG *)(param_3 + 0xc);
  local_40 = (HGDIOBJ)0x0;
  local_3c = (HDC)0x0;
  local_10.right = *(LONG *)(param_3 + 0x10);
  local_24 = 0;
  local_28 = 0;
  local_10.bottom = *(LONG *)(param_3 + 0x14);
  OffsetRect(&local_10,*param_4,param_4[1]);
  BVar3 = IntersectRect(&local_8c,&local_10,param_2);
  if (BVar3 == 0) {
    if (local_40 != (HGDIOBJ)0x0) {
      DeleteObject(local_40);
    }
    if (local_3c == (HDC)0x0) {
      return -0x7fffbffb;
    }
    DeleteDC(local_3c);
    return -0x7fffbffb;
  }
  iVar11 = *(int *)(param_1 + 0x90);
  iVar13 = *(int *)(param_1 + 0x70) + iVar11;
  local_20 = (double)CONCAT44(local_20._4_4_,iVar13);
  iVar4 = *(int *)(param_1 + 0x78) + -iVar11;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x18) + 0x44);
  if (((uVar1 & 8) != 0) && (local_8c.right <= iVar13)) {
    if (local_40 != (HGDIOBJ)0x0) {
      DeleteObject(local_40);
    }
    if (local_3c == (HDC)0x0) {
      return -0x7fffbffb;
    }
    DeleteDC(local_3c);
    return -0x7fffbffb;
  }
  if (((uVar1 & 0x20) != 0) && (iVar4 <= local_8c.left)) {
    if (local_40 != (HGDIOBJ)0x0) {
      DeleteObject(local_40);
    }
    if (local_3c == (HDC)0x0) {
      return -0x7fffbffb;
    }
    DeleteDC(local_3c);
    return -0x7fffbffb;
  }
  if (local_8c.bottom <= *(int *)(param_1 + 0x74) + iVar11) {
    if (local_40 != (HGDIOBJ)0x0) {
      DeleteObject(local_40);
    }
    if (local_3c == (HDC)0x0) {
      return -0x7fffbffb;
    }
    DeleteDC(local_3c);
    return -0x7fffbffb;
  }
  if (*(int *)(param_1 + 0x7c) + -iVar11 <= local_8c.top) {
    if (local_40 != (HGDIOBJ)0x0) {
      DeleteObject(local_40);
    }
    if (local_3c == (HDC)0x0) {
      return -0x7fffbffb;
    }
    DeleteDC(local_3c);
    return -0x7fffbffb;
  }
  iVar11 = iVar4 - iVar13;
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x10) == 0) {
      local_8c.right = iVar4 - local_8c.left;
      goto LAB_0054060d;
    }
    _X = (double)iVar11 * _DAT_00557838 + (double)iVar13;
    local_20._4_4_ = (undefined4)((ulonglong)_X >> 0x20);
    uVar2 = local_20._4_4_;
    local_20 = _X;
    floor(_X);
    iVar4 = ftol();
    if (local_8c.right - iVar4 < 0) {
      iVar4 = 0;
    }
    else {
      floor(_X);
      iVar4 = ftol();
      iVar4 = local_8c.right - iVar4;
    }
    ceil((double)CONCAT44(uVar2,(undefined2 *)local_20));
    iVar13 = ftol();
    if (iVar13 - local_8c.left < 0) {
      iVar13 = 0;
    }
    else {
      ceil((double)CONCAT44(uVar2,(undefined2 *)local_20));
      iVar13 = ftol();
      iVar13 = iVar13 - local_8c.left;
    }
    iVar9 = iVar4 / iVar11;
    if (iVar4 / iVar11 < iVar13 / iVar11) {
      iVar9 = iVar13 / iVar11;
    }
    iVar11 = iVar9 * 2 + 2;
  }
  else {
    local_8c.right = local_8c.right - iVar13;
LAB_0054060d:
    iVar11 = local_8c.right / iVar11 + 1;
  }
  puVar14 = *(undefined4 **)(*(int *)(param_1 + 0x18) + 4);
  local_78 = (LPCSTR)*puVar14;
  _Str = (wchar_t *)puVar14[1];
  local_20 = (double)((ulonglong)local_20 & 0xffffffff00000000);
  if (_Str == (wchar_t *)0x0) {
    iVar4 = lstrlenA(local_78);
    iVar13 = iVar4 * iVar11;
    pvVar6 = GlobalAlloc(0x40,iVar13 + 1);
    puVar8 = GlobalLock(pvVar6);
    if (puVar8 == (undefined2 *)0x0) {
      if (local_40 != (HGDIOBJ)0x0) {
        DeleteObject(local_40);
      }
      if (local_3c == (HDC)0x0) {
        return -0x7ff8fff2;
      }
      DeleteDC(local_3c);
      return -0x7ff8fff2;
    }
    puVar7 = puVar8;
    if (0 < iVar11) {
      do {
        iVar9 = 0;
        if (0 < iVar4) {
          do {
            iVar10 = iVar9 + 1;
            *(undefined1 *)(iVar9 + (int)puVar7) =
                 *(undefined1 *)(**(int **)(*(int *)(param_1 + 0x18) + 4) + -1 + iVar10);
            iVar9 = iVar10;
          } while (iVar10 < iVar4);
        }
        iVar11 = iVar11 + -1;
        puVar7 = (undefined2 *)((int)puVar7 + iVar4);
      } while (iVar11 != 0);
    }
    *(undefined1 *)(iVar13 + (int)puVar8) = 0;
    **(undefined4 **)(*(int *)(param_1 + 0x18) + 4) = puVar8;
    puVar7 = (undefined2 *)local_20;
  }
  else {
    sVar5 = wcslen(_Str);
    local_20 = (double)CONCAT44(local_20._4_4_,sVar5 * iVar11);
    pvVar6 = GlobalAlloc(0x40,sVar5 * iVar11 * 2 + 2);
    puVar7 = GlobalLock(pvVar6);
    if (puVar7 == (undefined2 *)0x0) {
      if (local_40 != (HGDIOBJ)0x0) {
        DeleteObject(local_40);
      }
      if (local_3c != (HDC)0x0) {
        DeleteDC(local_3c);
      }
      return -0x7ff8fff2;
    }
    puVar8 = puVar7;
    if (0 < iVar11) {
      do {
        local_7c = iVar11;
        iVar11 = 0;
        puVar12 = puVar8;
        if (0 < (int)sVar5) {
          do {
            iVar11 = iVar11 + 1;
            *puVar12 = *(undefined2 *)
                        (*(int *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 4) + -2 + iVar11 * 2);
            puVar12 = puVar12 + 1;
          } while (iVar11 < (int)sVar5);
        }
        local_7c = local_7c + -1;
        puVar8 = puVar8 + sVar5;
        iVar11 = local_7c;
      } while (local_7c != 0);
    }
    puVar8 = (undefined2 *)0x0;
    puVar7[(int)(undefined2 *)local_20] = 0;
    *(undefined2 **)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 4) = puVar7;
  }
  iVar11 = FUN_0053f9e0(*(undefined4 *)(param_1 + 0x18),0,0,0,0);
  if ((((-1 < iVar11) &&
       (BVar3 = IntersectRect(&local_8c,&local_8c,(RECT *)(param_1 + 0x70)), BVar3 != 0)) &&
      (iVar11 = FUN_00540af0(&local_8c,&local_74,0), -1 < iVar11)) &&
     ((local_74 != 0 && (FUN_0053ffa0(&local_74,param_3,param_4), param_6 != (undefined4 *)0x0)))) {
    *param_6 = local_38;
    param_6[1] = local_34;
    param_6[2] = local_30;
    param_6[3] = local_2c;
  }
  **(undefined4 **)(*(int *)(param_1 + 0x18) + 4) = local_78;
  *(wchar_t **)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 4) = _Str;
  if (puVar8 == (undefined2 *)0x0) {
    if (puVar7 == (undefined2 *)0x0) goto LAB_0054087d;
    pvVar6 = GlobalHandle(puVar7);
    GlobalUnlock(pvVar6);
  }
  else {
    pvVar6 = GlobalHandle(puVar8);
    GlobalUnlock(pvVar6);
    puVar7 = puVar8;
  }
  pvVar6 = GlobalHandle(puVar7);
  GlobalFree(pvVar6);
LAB_0054087d:
  if (local_40 != (HGDIOBJ)0x0) {
    DeleteObject(local_40);
  }
  if (local_3c != (HDC)0x0) {
    DeleteDC(local_3c);
  }
  return iVar11;
}


