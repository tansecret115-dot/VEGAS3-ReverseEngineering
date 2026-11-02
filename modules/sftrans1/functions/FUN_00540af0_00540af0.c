/* Module: sftrans1.dll
   Function: FUN_00540af0
   Address: 00540af0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00540af0(int param_1,HDC param_2,HDC param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  HDC pHVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  HBITMAP local_18;
  HBITMAP local_14;
  
  piVar10 = &param_3->unused;
  uVar2 = (uint)(param_3 != (HDC)0x0);
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(uint *)(param_1 + 0xa4) = uVar2;
  *(uint *)(param_1 + 0xdc) = (uint)(param_4 != (int *)0x0);
  if ((uVar2 == 0) && ((param_4 != (int *)0x0) == 0)) {
    return -0x7fffbffb;
  }
  if (param_2 == (HDC)0x0) {
    return -0x7fffbffd;
  }
  piVar1 = (int *)(param_1 + 0x80);
  *piVar1 = param_2->unused;
  *(int *)(param_1 + 0x84) = param_2[1].unused;
  *(int *)(param_1 + 0x88) = param_2[2].unused;
  *(int *)(param_1 + 0x8c) = param_2[3].unused;
  iVar6 = *(int *)(param_1 + 0x88) - *piVar1;
  iVar9 = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84);
  if ((iVar6 < 1) || (iVar9 < 1)) {
    return -0x7ff8ffa9;
  }
  if ((((*piVar1 < *(int *)(param_1 + 0x70)) ||
       (*(int *)(param_1 + 0x78) < *(int *)(param_1 + 0x88))) ||
      (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x74))) ||
     (*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x8c))) {
    return -0x7fffbffb;
  }
  param_3 = (HDC)0x0;
  local_18 = (HBITMAP)0x0;
  param_2 = (HDC)0x0;
  local_14 = (HBITMAP)0x0;
  if (uVar2 == 0) {
LAB_00540c7a:
    if (*(int *)(param_1 + 0xdc) == 0) {
LAB_00540d0a:
      iVar4 = FUN_0053e140();
      if (-1 < iVar4) {
        if (*(int *)(param_1 + 0xa4) != 0) {
          iVar6 = *(int *)(param_1 + 0xd4);
          iVar9 = *(int *)(*(int *)(param_1 + 0x18) + 0xc);
          iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 8);
          if (*piVar10 == 0) {
            *piVar10 = 1;
          }
          else {
            if ((HGDIOBJ)piVar10[0xd] != (HGDIOBJ)0x0) {
              DeleteObject((HGDIOBJ)piVar10[0xd]);
            }
            if ((HDC)piVar10[0xe] != (HDC)0x0) {
              DeleteDC((HDC)piVar10[0xe]);
            }
          }
          piVar7 = (int *)(param_1 + 0xa8);
          piVar8 = piVar10;
          for (iVar5 = 0xb; piVar8 = piVar8 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar8 = *piVar7;
            piVar7 = piVar7 + 1;
          }
          piVar10[0xd] = (int)local_18;
          piVar10[0xc] = iVar6;
          piVar10[0xe] = (int)param_3;
          piVar10[0xf] = *piVar1;
          piVar10[0x10] = *(int *)(param_1 + 0x84);
          piVar10[0x11] = *(int *)(param_1 + 0x88);
          iVar6 = *(int *)(param_1 + 0x8c);
          piVar10[0x13] = iVar4;
          piVar10[0x12] = iVar6;
          piVar10[0x14] = iVar9;
        }
        if (*(int *)(param_1 + 0xdc) != 0) {
          iVar6 = *(int *)(param_1 + 0x10c);
          iVar9 = *(int *)(*(int *)(param_1 + 0x18) + 0xc);
          iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 8);
          if (*param_4 == 0) {
            *param_4 = 1;
          }
          else {
            if ((HGDIOBJ)param_4[0xd] != (HGDIOBJ)0x0) {
              DeleteObject((HGDIOBJ)param_4[0xd]);
            }
            if ((HDC)param_4[0xe] != (HDC)0x0) {
              DeleteDC((HDC)param_4[0xe]);
            }
          }
          piVar8 = (int *)(param_1 + 0xe0);
          piVar10 = param_4;
          for (iVar5 = 0xb; piVar10 = piVar10 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar10 = *piVar8;
            piVar8 = piVar8 + 1;
          }
          param_4[0xc] = iVar6;
          param_4[0xd] = (int)local_14;
          param_4[0xe] = (int)param_2;
          param_4[0xf] = *piVar1;
          param_4[0x10] = *(int *)(param_1 + 0x84);
          param_4[0x11] = *(int *)(param_1 + 0x88);
          iVar6 = *(int *)(param_1 + 0x8c);
          param_4[0x14] = iVar9;
          param_4[0x12] = iVar6;
          param_4[0x13] = iVar4;
        }
        return 0;
      }
    }
    else {
      pHVar3 = GetDC((HWND)0x0);
      param_2 = CreateCompatibleDC(pHVar3);
      ReleaseDC((HWND)0x0,pHVar3);
      if (param_2 == (HDC)0x0) {
        iVar4 = -0x7fffbffb;
      }
      else {
        iVar4 = FUN_004de3f0(param_1 + 0xe0,0x1c,iVar6,iVar9,0,0,0);
        if (-1 < iVar4) {
          local_14 = CreateDIBSection(param_2,(BITMAPINFO *)(param_1 + 0xe0),0,
                                      (void **)(param_1 + 0x10c),(HANDLE)0x0,0);
          *(void **)(param_1 + 0x110) = *(void **)(param_1 + 0x10c);
          if (local_14 != (HBITMAP)0x0) goto LAB_00540d0a;
          iVar4 = -0x7fffbffb;
        }
      }
    }
  }
  else {
    pHVar3 = GetDC((HWND)0x0);
    param_3 = CreateCompatibleDC(pHVar3);
    ReleaseDC((HWND)0x0,pHVar3);
    if (param_3 == (HDC)0x0) {
      return -0x7fffbffb;
    }
    iVar4 = FUN_004de3f0(param_1 + 0xa8,0x1c,iVar6,iVar9,0,0,0);
    if (iVar4 < 0) goto LAB_00540d33;
    local_18 = CreateDIBSection(param_3,(BITMAPINFO *)(param_1 + 0xa8),0,(void **)(param_1 + 0xd4),
                                (HANDLE)0x0,0);
    *(void **)(param_1 + 0xd8) = *(void **)(param_1 + 0xd4);
    if (local_18 != (HBITMAP)0x0) goto LAB_00540c7a;
    iVar4 = -0x7fffbffb;
  }
  if (local_18 != (HBITMAP)0x0) {
    DeleteObject(local_18);
  }
  if (local_14 != (HBITMAP)0x0) {
    DeleteObject(local_14);
  }
LAB_00540d33:
  if (param_3 != (HDC)0x0) {
    DeleteDC(param_3);
  }
  if (param_2 != (HDC)0x0) {
    DeleteDC(param_2);
  }
  return iVar4;
}


