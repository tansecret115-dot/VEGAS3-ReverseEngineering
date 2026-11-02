/* Module: vegas30k.dll
   Function: FUN_011344f0
   Address: 011344f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011344f0(int param_1,int param_2)

{
  HWND hWnd;
  HWND hWnd_00;
  char cVar1;
  LRESULT LVar2;
  WPARAM wParam;
  uint *puVar3;
  LPARAM LVar4;
  LPCSTR lpsz;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint *puVar11;
  HWND *ppHVar12;
  int local_6b8 [5];
  undefined1 *local_6a4;
  undefined4 *local_6a0;
  HWND local_698;
  WPARAM local_694;
  undefined4 local_690;
  int local_684;
  undefined1 local_678 [12];
  undefined4 local_66c;
  undefined4 local_668;
  uint local_650 [65];
  undefined1 local_54c [520];
  undefined4 local_344 [131];
  uint local_138;
  uint local_134;
  undefined1 local_104 [260];
  
  hWnd = *(HWND *)(param_1 + 0x18);
  hWnd_00 = *(HWND *)(param_1 + 0x1c);
  LVar2 = SendMessageA(hWnd,0x110a,9,0);
  piVar9 = local_6b8;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  local_6b8[2] = FUN_0112eb70(hWnd,LVar2);
  iVar5 = FUN_0112fff0(hWnd,LVar2,local_54c);
  local_54c[iVar5] = 0x5c;
  puVar10 = local_344;
  for (iVar6 = 0x90; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_698 = hWnd_00;
  if (param_2 == -1) {
    local_6a4 = local_54c;
    local_6a0 = local_344;
    local_650[0]._0_1_ = '\0';
    local_6b8[0] = 2;
    _SfList_CreateExZ_32((int *)(param_1 + 0x498),4,0x10,0x10,0x40000002,0,0,0);
    if (*(int *)(param_1 + 0x498) == 0) {
      return;
    }
    for (wParam = SendMessageA(hWnd_00,0x100c,0xffffffff,2); wParam != 0xffffffff;
        wParam = SendMessageA(hWnd_00,0x100c,wParam,2)) {
      local_6b8[3] = FUN_011317a0(hWnd_00,wParam);
      puVar3 = *(uint **)(*(int *)(local_6b8[2] + 8) + local_6b8[3] * 4);
      if ((*puVar3 & 0x10000) == 0) {
        local_138 = puVar3[3];
        local_134 = *puVar3;
        uVar8 = puVar3[4];
        piVar9 = *(int **)(param_1 + 0x3c);
        puVar3 = puVar3 + 5;
        puVar11 = (uint *)(local_54c + iVar5 + 1);
        for (uVar7 = (uint)(ushort)((ushort)uVar8 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar8 = (ushort)uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(char *)puVar11 = (char)*puVar3;
          puVar3 = (uint *)((int)puVar3 + 1);
          puVar11 = (uint *)((int)puVar11 + 1);
        }
        (**(code **)(*piVar9 + 0xc))(piVar9,local_6b8);
        _SfList_AllocAndInsertItem_20(*(undefined4 *)(param_1 + 0x498),local_344,0x240,0xffffffff,0)
        ;
      }
      else {
        uVar8 = puVar3[4];
        puVar3 = puVar3 + 5;
        puVar11 = local_650;
        for (uVar7 = (uint)(ushort)((ushort)uVar8 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar8 = (ushort)uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(char *)puVar11 = (char)*puVar3;
          puVar3 = (uint *)((int)puVar3 + 1);
          puVar11 = (uint *)((int)puVar11 + 1);
        }
      }
    }
    if (**(int **)(param_1 + 0x498) == 0) {
      _SfList_Destroy_4(*(int **)(param_1 + 0x498));
      *(int *)(param_1 + 0x498) = 0;
      if ((char)local_650[0] == '\0') {
        return;
      }
      SendMessageA(hWnd,0x1102,2,LVar2);
      puVar3 = local_650;
      cVar1 = (char)local_650[0];
      do {
        if (cVar1 == '\0') {
LAB_01134762:
          LVar4 = FUN_0112fbb0(hWnd,LVar2,local_650);
          SendMessageA(hWnd,0x110b,9,LVar4);
          LVar2 = SendMessageA(hWnd_00,0x1004,0,0);
          if (LVar2 == 0) {
            return;
          }
          local_668 = 0xf;
          local_66c = 1;
          SendMessageA(hWnd_00,0x102b,0,(LPARAM)local_678);
          return;
        }
        if (cVar1 == '\t') {
          *(CHAR *)puVar3 = '\0';
          goto LAB_01134762;
        }
        puVar3 = (uint *)CharNextA((LPCSTR)puVar3);
        cVar1 = (char)*puVar3;
      } while( true );
    }
    FUN_011319b0(param_1);
    ppHVar12 = &local_698;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppHVar12 = (HWND)0x0;
      ppHVar12 = ppHVar12 + 1;
    }
    local_684 = *(int *)(param_1 + 0x498);
    local_694 = *(WPARAM *)(param_1 + 0x2c);
    local_690 = 0x1e;
    LVar2 = SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_694,(LPARAM)&local_698);
    if (LVar2 != 0) {
      return;
    }
  }
  else {
    local_6b8[3] = FUN_011317a0(hWnd_00,param_2);
    puVar3 = *(uint **)(*(int *)(local_6b8[2] + 8) + local_6b8[3] * 4);
    uVar8 = GetWindowLongA(*(HWND *)(param_1 + 4),-0x10);
    if ((((uVar8 & 0x40) != 0) && (iVar6 = FUN_0112e9d0(param_1,local_104), iVar6 != 0)) &&
       (uVar8 = GetWindowLongA(*(HWND *)(param_1 + 4),-0x10), (uVar8 & 0x40) != 0)) {
      FUN_0112e520(param_1,local_104,local_54c);
      return;
    }
    if ((*puVar3 & 0x10000) != 0) {
      SendMessageA(hWnd,0x1102,2,LVar2);
      uVar8 = puVar3[4];
      lpsz = local_54c;
      puVar3 = puVar3 + 5;
      puVar11 = (uint *)local_54c;
      for (uVar7 = (uint)(ushort)((ushort)uVar8 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = (ushort)uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(char *)puVar11 = (char)*puVar3;
        puVar3 = (uint *)((int)puVar3 + 1);
        puVar11 = (uint *)((int)puVar11 + 1);
      }
      do {
        if (local_54c[0] == '\0') {
LAB_01134896:
          LVar4 = FUN_0112fbb0(hWnd,LVar2,local_54c);
          SendMessageA(hWnd,0x110b,9,LVar4);
          LVar2 = SendMessageA(hWnd_00,0x1004,0,0);
          if (LVar2 == 0) {
            return;
          }
          local_668 = 0xf;
          local_66c = 1;
          SendMessageA(hWnd_00,0x102b,0,(LPARAM)local_678);
          return;
        }
        if (local_54c[0] == '\t') {
          *lpsz = '\0';
          goto LAB_01134896;
        }
        lpsz = CharNextA(lpsz);
        local_54c[0] = *lpsz;
      } while( true );
    }
    local_138 = puVar3[3];
    local_134 = *puVar3;
    FUN_011319b0(param_1);
    uVar8 = puVar3[4];
    local_6a0 = local_344;
    puVar3 = puVar3 + 5;
    puVar11 = (uint *)(local_54c + iVar5 + 1);
    for (uVar7 = (uint)(ushort)((ushort)uVar8 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar11 = puVar11 + 1;
    }
    piVar9 = *(int **)(param_1 + 0x3c);
    for (uVar8 = (ushort)uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar11 = (char)*puVar3;
      puVar3 = (uint *)((int)puVar3 + 1);
      puVar11 = (uint *)((int)puVar11 + 1);
    }
    local_6a4 = local_54c;
    local_6b8[0] = 2;
    (**(code **)(*piVar9 + 0xc))(piVar9,local_6b8);
    piVar9 = (int *)(param_1 + 0x498);
    _SfList_CreateExZ_32(piVar9,4,1,1,0x40000002,0,0,0);
    if (*piVar9 == 0) {
      return;
    }
    _SfList_AllocAndInsertItem_20(*piVar9,local_344,0x240,0xffffffff,0);
    ppHVar12 = &local_698;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppHVar12 = (HWND)0x0;
      ppHVar12 = ppHVar12 + 1;
    }
    local_694 = *(WPARAM *)(param_1 + 0x2c);
    local_684 = *piVar9;
    local_690 = 0x1e;
    LVar2 = SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_694,(LPARAM)&local_698);
    if (LVar2 != 0) goto LAB_011349e1;
  }
  _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x498));
LAB_011349e1:
  *(undefined4 *)(param_1 + 0x498) = 0;
  return;
}


