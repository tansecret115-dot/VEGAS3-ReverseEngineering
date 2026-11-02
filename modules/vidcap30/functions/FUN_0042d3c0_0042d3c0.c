/* Module: vidcap30.exe
   Function: FUN_0042d3c0
   Address: 0042d3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042d3c0(HWND param_1,HWND param_2,int param_3)

{
  ushort uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  uint uVar4;
  HGLOBAL hMem;
  int *piVar5;
  int iVar6;
  uint uVar7;
  HWND pHVar8;
  int *piVar9;
  int *piVar10;
  int local_44;
  HWND local_40;
  int local_2c [11];
  
  pHVar8 = param_1;
  local_44 = 0;
  if (param_1[9].unused == 0) {
    return -0x7fffbffd;
  }
  BVar2 = OpenClipboard(param_2);
  if (BVar2 == 0) {
    return 0;
  }
  BVar2 = EmptyClipboard();
  if (BVar2 == 0) goto LAB_0042d58c;
  local_40 = (HWND)pHVar8[9].unused;
  param_2 = pHVar8 + 10;
  uVar4 = pHVar8[8].unused;
  param_1 = (HWND)0x0;
  if ((param_3 != 0) && ((pHVar8[0x1a].unused != 0 || (pHVar8[0x1b].unused != 0x3ff00000)))) {
    uVar3 = ftol();
    local_44 = _SfDibAlloc_28(&param_1,0x1c,uVar3,pHVar8[0xc].unused,0,0,0);
    if (-1 < local_44) {
      local_44 = _SfDibCopy_36(param_1,0,0,0,param_2,pHVar8[9].unused,0,0,0x1000020);
      if (-1 < local_44) {
        param_2 = param_1;
        if (param_1[4].unused == 0) {
          if (((param_1[8].unused != 0) ||
              (uVar1 = *(ushort *)((int)&param_1[3].unused + 2), uVar1 == 0)) || (8 < uVar1))
          goto LAB_0042d4d0;
          iVar6 = param_1->unused + (1 << ((byte)uVar1 & 0x1f)) * 4;
LAB_0042d4d8:
          local_40 = (HWND)((int)&param_1->unused + iVar6);
        }
        else {
          if (param_1[4].unused != 3) {
LAB_0042d4d0:
            iVar6 = param_1->unused + param_1[8].unused * 4;
            goto LAB_0042d4d8;
          }
          local_40 = param_1 + 0xd;
        }
        uVar4 = (uint)*(ushort *)((int)&param_1[3].unused + 2) * param_1[1].unused + 0x1f;
        uVar4 = ((int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3) * param_1[2].unused;
      }
    }
  }
  hMem = GlobalAlloc(0x2042,uVar4 + 0x2c);
  if (hMem != (HGLOBAL)0x0) {
    piVar5 = GlobalLock(hMem);
    if (piVar5 == (int *)0x0) {
      GlobalFree(hMem);
    }
    else {
      piVar9 = local_2c;
      for (iVar6 = 10; piVar9 = piVar9 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = 0;
      }
      pHVar8 = param_2;
      piVar9 = local_2c;
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = pHVar8->unused;
        pHVar8 = pHVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      piVar9 = local_2c;
      piVar10 = piVar5;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar10 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar10 = piVar10 + 1;
      }
      piVar5 = (int *)(param_2->unused + (int)piVar5);
      for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *piVar5 = local_40->unused;
        local_40 = local_40 + 1;
        piVar5 = piVar5 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)piVar5 = (char)local_40->unused;
        local_40 = (HWND)((int)&local_40->unused + 1);
        piVar5 = (int *)((int)piVar5 + 1);
      }
      GlobalUnlock(hMem);
      SetClipboardData(8,hMem);
    }
  }
  if (param_1 != (HWND)0x0) {
    _SfDibFree_8(param_1,0);
  }
LAB_0042d58c:
  CloseClipboard();
  return local_44;
}


