/* Module: sfnetmedia.dll
   Function: FUN_0040c500
   Address: 0040c500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall FUN_0040c500(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  LPCVOID pMem;
  HWND pHVar3;
  LRESULT LVar4;
  LRESULT LVar5;
  HGLOBAL pvVar6;
  int iVar7;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar8;
  WPARAM WVar9;
  uint uVar10;
  uint uVar11;
  WINDOWPLACEMENT *pWVar12;
  BYTE *pBVar13;
  DWORD DVar14;
  int local_15c [9];
  LPCVOID local_138;
  WINDOWPLACEMENT local_130;
  BYTE local_104 [260];
  
  local_15c[0] = param_1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),600);
  LVar4 = SendMessageA(pHVar3,0x1004,0,0);
  piVar8 = local_15c;
  for (iVar7 = 10; piVar8 = (int *)((int)piVar8 + 4), iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar8 = 0;
  }
  WVar9 = 0;
  local_15c[1] = 4;
  if (0 < LVar4) {
    do {
      local_15c[3] = 0;
      local_15c[2] = WVar9;
      LVar5 = SendMessageA(pHVar3,0x1005,0,(LPARAM)(local_15c + 1));
      if (LVar5 != 0) {
        SendMessageA(pHVar3,0x1008,WVar9,0);
        pMem = local_138;
        if (local_138 != (LPCVOID)0x0) {
          pvVar6 = GlobalHandle(local_138);
          GlobalUnlock(pvVar6);
          pvVar6 = GlobalHandle(pMem);
          GlobalFree(pvVar6);
          param_1 = local_15c[0];
        }
      }
      WVar9 = WVar9 + 1;
    } while ((int)WVar9 < LVar4);
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x3e9);
  LVar4 = SendMessageA(pHVar3,0x1004,0,0);
  WVar9 = 0;
  local_15c[1] = 4;
  if (0 < LVar4) {
    do {
      local_15c[2] = WVar9;
      LVar5 = SendMessageA(pHVar3,0x1005,0,(LPARAM)(local_15c + 1));
      if (LVar5 != 0) {
        SendMessageA(pHVar3,0x1008,WVar9,0);
      }
      WVar9 = WVar9 + 1;
    } while ((int)WVar9 < LVar4);
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x25a);
  uVar10 = 0x3ed;
  do {
    local_104[0] = '\0';
    LVar4 = SendMessageA(pHVar3,0x148,uVar10 - 0x3ed,(LPARAM)local_104);
    if (LVar4 != -1) {
      pBVar13 = local_104;
      uVar11 = uVar10;
      iVar7 = FUN_00401310();
      FUN_0041a5b0(iVar7,uVar11,pBVar13);
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x3ef);
  local_130.length = 0x2c;
  GetWindowPlacement(*(HWND *)(param_1 + 4),&local_130);
  pWVar12 = &local_130;
  DVar14 = 0x2c;
  uVar10 = 0x3ef;
  iVar7 = FUN_00401310();
  FUN_0041a420(iVar7,uVar10,(BYTE *)pWVar12,DVar14);
  pBVar13 = (BYTE *)(param_1 + 0xa8);
  DVar14 = 4;
  uVar10 = 0x3f4;
  iVar7 = FUN_00401310();
  FUN_0041a420(iVar7,uVar10,pBVar13,DVar14);
  puVar1 = *(undefined4 **)(param_1 + 0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    local_15c[0] = 0;
    iVar7 = (**(code **)*puVar1)(puVar1,&DAT_0043c7f0,local_15c);
    if (-1 < iVar7) {
      iVar7 = (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,&DAT_0043c780,&stack0xfffffe94);
      if (-1 < iVar7) {
        (**(code **)(*unaff_ESI + 0x18))(unaff_ESI,uVar2);
      }
    }
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    *(undefined4 *)(param_1 + 0x44) = 0xfefefefe;
    (**(code **)(**(int **)(param_1 + 0x4c) + 8))(*(int **)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return 0;
}


