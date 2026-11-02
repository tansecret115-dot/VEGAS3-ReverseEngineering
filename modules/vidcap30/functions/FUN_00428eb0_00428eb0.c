/* Module: vidcap30.exe
   Function: FUN_00428eb0
   Address: 00428eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * FUN_00428eb0(int param_1)

{
  LPVOID *ppv;
  int iVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  HGLOBAL hMem;
  LPVOID pvVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  wchar_t **ppwVar10;
  bool bVar11;
  undefined8 uVar12;
  int *piStack_3b8;
  tagRECT tStack_3b4;
  wchar_t *pwStack_3a4;
  undefined1 *puStack_3a0;
  wchar_t *pwStack_39c;
  wchar_t awStack_218 [8];
  WCHAR local_208 [259];
  undefined2 local_2;
  
  if (*(int *)(param_1 + 0x360) == 0) {
    return (wchar_t *)0x8004e084;
  }
  if ((*(uint *)(param_1 + 0x148) & 0x8000000) != 0) {
    return (wchar_t *)0x1;
  }
  _SfGetPathNameFromFilePath_12();
  iVar1 = _SfCreateDirectory_8();
  if (iVar1 == 0) {
    return (wchar_t *)0x8004e009;
  }
  uVar12 = __allshl();
  uVar6 = (uint)((ulonglong)uVar12 >> 0x20) | *(uint *)(param_1 + 0x14c);
  *(uint *)(param_1 + 0x148) = (uint)uVar12 | *(uint *)(param_1 + 0x148) & 0xdfffffff;
  *(uint *)(param_1 + 0x14c) = uVar6;
  if ((uVar6 & 4) == 0) {
    pwStack_39c = L"莋δ";
    MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x684),-1,local_208,0x104);
    local_2 = 0;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x24))();
    if (iVar1 < 0) {
      return (wchar_t *)0x8004e002;
    }
    pwStack_39c = awStack_218;
    pwStack_3a4 = *(wchar_t **)(param_1 + 0x3b4);
    puStack_3a0 = &stack0xfffffc88;
    tStack_3b4.bottom = 0x4290bc;
    pwStack_3a4 = (wchar_t *)(**(code **)(*(int *)pwStack_3a4 + 0x14))();
  }
  else {
    puVar2 = (undefined4 *)FUN_00467e90();
    pwVar3 = (wchar_t *)(**(code **)*puVar2)();
    if ((int)pwVar3 < 0) {
      return pwVar3;
    }
    pwStack_39c = L"삅䒉ဤ谏ܹ";
    pwVar3 = (wchar_t *)(**(code **)*puVar2)();
    if ((int)pwVar3 < 0) {
      return pwVar3;
    }
    pwStack_3a4 = *(wchar_t **)(param_1 + 0x350);
    puStack_3a0 = *(undefined1 **)(param_1 + 0x3d8);
    pwStack_39c = L"SF:SF File Writer";
    tStack_3b4.bottom = 0x428fd8;
    pwVar3 = (wchar_t *)(**(code **)(*(int *)pwStack_3a4 + 0xc))();
    if ((int)pwVar3 < 0) {
      return pwVar3;
    }
    tStack_3b4.right = *(undefined4 *)(param_1 + 0x3dc);
    tStack_3b4.bottom = DAT_005bba6c;
    tStack_3b4.top = 0x428ff3;
    pwStack_39c = (wchar_t *)(**(code **)(*(int *)tStack_3b4.right + 0xc))();
    if ((int)pwStack_39c < 0) {
      return pwStack_39c;
    }
    tStack_3b4.left = *(undefined4 *)(param_1 + 0x3dc);
    tStack_3b4.top = DAT_005bb0e8;
    piStack_3b8 = (int *)0x42900d;
    pwStack_3a4 = (wchar_t *)(**(code **)(*(int *)tStack_3b4.left + 0x14))();
  }
  if ((int)pwStack_3a4 < 0) {
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xf7ffffff;
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
    return pwStack_3a4;
  }
  if ((*(uint *)(param_1 + 0x14c) & 4) == 0) {
    piVar8 = (int *)(param_1 + 0x3e0);
    piStack_3b8 = piVar8;
    pwStack_3a4 = (wchar_t *)
                  (**(code **)**(undefined4 **)(param_1 + 0x3d8))
                            (*(undefined4 **)(param_1 + 0x3d8),&DAT_005a1a48);
    if ((-1 < (int)pwStack_3a4) && (piVar9 = (int *)*piVar8, piVar9 != (int *)0x0)) {
      piStack_3b8 = (int *)0x1;
      (**(code **)(*piVar9 + 0x14))(piVar9);
      if (((*(uint *)(param_1 + 0x148) & 0x20000000) != 0) && (*(int *)(param_1 + 0x404) != 0)) {
        piStack_3b8 = *(int **)(param_1 + 0x514);
        (**(code **)(*(int *)*piVar8 + 0xc))((int *)*piVar8);
      }
    }
    pwStack_3a4 = (wchar_t *)0x0;
  }
  bVar11 = true;
  piStack_3b8 = *(int **)(param_1 + 0x3d8);
  iVar1 = 4;
  piVar8 = &DAT_005a35a8;
  piVar9 = (int *)(param_1 + 0x3b8);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar11 = *piVar8 == *piVar9;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  } while (bVar11);
  if (bVar11) {
    puVar2 = &DAT_005a35a8;
  }
  else {
    puVar2 = &DAT_005a35f8;
  }
  pwVar3 = (wchar_t *)
           (**(code **)(**(int **)(param_1 + 0x3b4) + 0x1c))
                     (*(int **)(param_1 + 0x3b4),&DAT_005a2438,puVar2,
                      *(undefined4 *)(param_1 + 0x360),0);
  if ((int)pwVar3 < 0) {
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xf7ffffff;
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
    goto LAB_0042969f;
  }
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x8000000;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  if (((*(uint *)(param_1 + 0x148) & 0x20000000) != 0) && (*(int *)(param_1 + 0x404) != 0)) {
    pwVar3 = (wchar_t *)
             (**(code **)(**(int **)(param_1 + 0x3b4) + 0x1c))
                       (*(int **)(param_1 + 0x3b4),&DAT_005a2438,&DAT_005a35e8,
                        *(int *)(param_1 + 0x404),0,*(undefined4 *)(param_1 + 0x3d8));
    if ((int)pwVar3 < 0) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xbfffffff;
      uVar4 = *(undefined4 *)(param_1 + 0x14c);
    }
    else {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x40000000;
      uVar4 = *(undefined4 *)(param_1 + 0x14c);
    }
    *(undefined4 *)(param_1 + 0x14c) = uVar4;
  }
  if ((int)pwVar3 < 0) goto LAB_0042969f;
  if ((((*(uint *)(param_1 + 0x148) & 0x10000) == 0) || (DAT_005bb564 == 0)) ||
     ((*(uint *)(param_1 + 0x14c) & 4) != 0)) {
LAB_00429299:
    if ((int)pwVar3 < 0) goto LAB_0042969f;
  }
  else {
    pwVar3 = (wchar_t *)
             (**(code **)(**(int **)(param_1 + 0x3b4) + 0x1c))
                       (*(int **)(param_1 + 0x3b4),&DAT_005a2408,0,*(undefined4 *)(param_1 + 0x360),
                        0,*(undefined4 *)(param_1 + 0x3d8));
    if ((int)pwVar3 < 0) {
      pwVar3 = (wchar_t *)
               (**(code **)(**(int **)(param_1 + 0x3b4) + 0x1c))
                         (*(int **)(param_1 + 0x3b4),&DAT_005a23b8,0,
                          *(undefined4 *)(param_1 + 0x360),0,*(undefined4 *)(param_1 + 0x3d8));
      goto LAB_00429299;
    }
  }
  iVar1 = FUN_00425e50(param_1);
  if (iVar1 == 0) {
    DAT_005ba4b4 = DAT_005ba4b4 | 0x80000;
    GetClientRect(*(HWND *)(param_1 + 4),&tStack_3b4);
    SendMessageA(*(HWND *)(param_1 + 4),5,0,
                 (tStack_3b4.bottom - tStack_3b4.top) * 0x10000 |
                 tStack_3b4.right - tStack_3b4.left & 0xffffU);
    DAT_005ba4b4 = DAT_005ba4b4 & 0xfff7ffff;
  }
  else {
    pwVar3 = (wchar_t *)FUN_00429710(param_1);
  }
  if ((int)pwVar3 < 0) goto LAB_0042969f;
  if ((DAT_005bb4b4 != 0) && ((*(uint *)(param_1 + 0x14c) & 2) == 0)) {
    ppv = (LPVOID *)(param_1 + 0x3ec);
    pwVar3 = (wchar_t *)
             CoCreateInstance((IID *)&DAT_005a1d88,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1ca8,ppv);
    if ((int)pwVar3 < 0) goto LAB_0042969f;
    puVar2 = (undefined4 *)(param_1 + 0x3f0);
    pwVar3 = (wchar_t *)(*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_005a1e98,puVar2);
    if (((int)pwVar3 < 0) ||
       (pwVar3 = (wchar_t *)
                 (**(code **)(**(int **)(param_1 + 0x350) + 0xc))
                           (*(int **)(param_1 + 0x350),*ppv,L"SF:SG-Sample Grabber"),
       (int)pwVar3 < 0)) goto LAB_0042969f;
    ppwVar10 = &pwStack_39c;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppwVar10 = (wchar_t *)0x0;
      ppwVar10 = ppwVar10 + 1;
    }
    puStack_3a0 = DAT_005a35f8;
    pwStack_39c = DAT_005a35fc;
    pwVar3 = (wchar_t *)(**(code **)(*(int *)*puVar2 + 0x10))((int *)*puVar2,&puStack_3a0);
    if ((int)pwVar3 < 0) goto LAB_0042969f;
    if ((*(uint *)(param_1 + 0x14c) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x840) == 0) {
        uVar4 = FUN_00425e50(param_1);
      }
      else {
        uVar4 = 0;
      }
      pwVar3 = (wchar_t *)FUN_0042a790(param_1,uVar4);
    }
    else {
      uVar4 = FUN_00425e50(param_1);
      pwVar3 = (wchar_t *)FUN_0042a480(param_1,uVar4);
    }
    if ((((int)pwVar3 < 0) ||
        (pwVar3 = (wchar_t *)(**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2,0), (int)pwVar3 < 0
        )) || (pwVar3 = (wchar_t *)(**(code **)(*(int *)*puVar2 + 0x18))((int *)*puVar2,0),
              (int)pwVar3 < 0)) goto LAB_0042969f;
    hMem = GlobalAlloc(0x40,0x80);
    pvVar5 = GlobalLock(hMem);
    if (pvVar5 == (LPVOID)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0042d650(param_1);
    }
    *(int *)(param_1 + 0x3f4) = iVar1;
    if (iVar1 != 0) {
      pwVar3 = (wchar_t *)(**(code **)(*(int *)*puVar2 + 0x24))((int *)*puVar2,iVar1 + 0xc,0);
    }
  }
  if ((int)pwVar3 < 0) goto LAB_0042969f;
  if ((*(uint *)(param_1 + 0x14c) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x820);
    puVar2 = (undefined4 *)(param_1 + 0x814 + iVar1 * 4);
    piStack_3b8 = (int *)(3 - iVar1);
    pwStack_3a4 = (wchar_t *)0x0;
    pwVar3 = (wchar_t *)
             FUN_00420460(&pwStack_3a4,2,0,0,0,*(undefined4 *)(param_1 + 0x3d8),puVar2,&piStack_3b8)
    ;
    if (-1 < (int)pwVar3) {
      iVar7 = *(int *)(param_1 + 0x820) + (int)piStack_3b8;
      *(int *)(param_1 + 0x820) = iVar7;
      if (iVar1 < iVar7) {
        do {
          (**(code **)(*(int *)*puVar2 + 0x18))((int *)*puVar2,puVar2 + -3);
          pwVar3 = (wchar_t *)
                   (**(code **)(**(int **)(param_1 + 0x350) + 0x24))
                             (*(int **)(param_1 + 0x350),*puVar2);
          if (((int)pwVar3 < 0) ||
             (pwVar3 = (wchar_t *)
                       (**(code **)(**(int **)(param_1 + 0x350) + 0x24))
                                 (*(int **)(param_1 + 0x350),puVar2[-3]), (int)pwVar3 < 0))
          goto LAB_0042969f;
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x820));
      }
      goto LAB_00429590;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x148) & 0x20000000) == 0) {
      uVar4 = 0;
LAB_0042953a:
      pwVar3 = (wchar_t *)FUN_0042a210(param_1,uVar4);
    }
    else if (DAT_005bb44c != 0) {
      uVar4 = 1;
      goto LAB_0042953a;
    }
    if (((int)pwVar3 < 0) || (pwVar3 = (wchar_t *)FUN_0042a040(param_1), (int)pwVar3 < 0))
    goto LAB_0042969f;
    if (DAT_005bb4d4 != 0) {
      pwVar3 = (wchar_t *)FUN_00429c50(param_1);
    }
    if ((int)pwVar3 < 0) goto LAB_0042969f;
    FUN_004285a0(param_1,DAT_005bb4d8);
    pwVar3 = (wchar_t *)FUN_00429e50(param_1);
LAB_00429590:
    if ((int)pwVar3 < 0) goto LAB_0042969f;
  }
  pwVar3 = (wchar_t *)FUN_004227d0(param_1);
  if (-1 < (int)pwVar3) {
    pwVar3 = (wchar_t *)
             (**(code **)(**(int **)(param_1 + 0x354) + 0x34))
                       (*(int **)(param_1 + 0x354),*(undefined4 *)(param_1 + 4),0x40d,param_1);
  }
LAB_0042969f:
  if (DAT_005bb578 == 0) {
    return pwVar3;
  }
  FUN_00411ba0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x350));
  return pwVar3;
}


