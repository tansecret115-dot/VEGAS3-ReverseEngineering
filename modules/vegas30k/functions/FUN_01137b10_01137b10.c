/* Module: vegas30k.dll
   Function: FUN_01137b10
   Address: 01137b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01137b10(HWND param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  HWND pHVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_ESI;
  code *pcVar7;
  code *pcVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  BOOL BVar14;
  UINT UVar15;
  int iVar16;
  int *piVar17;
  WPARAM WVar18;
  LPARAM lParam;
  int *piVar19;
  int local_310 [53];
  undefined1 uStack_239;
  WCHAR aWStack_238 [8];
  undefined1 auStack_228 [552];
  
  piVar2 = (int *)GetWindowLongA(param_1,8);
  lParam = 0;
  WVar18 = 0;
  UVar15 = 0x14b;
  pHVar3 = GetDlgItem(param_1,0x423);
  pcVar7 = SendMessageA_exref;
  SendMessageA(pHVar3,UVar15,WVar18,lParam);
  piVar19 = piVar2 + 0xb;
  WVar18 = 0;
  UVar15 = 0x143;
  pHVar3 = GetDlgItem(param_1,0x423);
  WVar18 = SendMessageA(pHVar3,UVar15,WVar18,(LPARAM)piVar19);
  piVar19 = piVar2 + 3;
  UVar15 = 0x151;
  pHVar3 = GetDlgItem(param_1,0x423);
  SendMessageA(pHVar3,UVar15,WVar18,(LPARAM)piVar19);
  local_310[0] = DAT_011dab90;
  local_310[1] = DAT_011dab94;
  local_310[3] = DAT_011dab9c;
  local_310[2] = DAT_011dab98;
  if (*(int *)(*piVar2 + 0x3a0) != 0) {
    iVar6 = *(int *)(*piVar2 + 0x39c);
    local_310[0] = *(int *)(iVar6 + 0x204);
    local_310[1] = *(undefined4 *)(iVar6 + 0x208);
    local_310[2] = *(undefined4 *)(iVar6 + 0x20c);
    local_310[3] = *(undefined4 *)(iVar6 + 0x210);
  }
  for (puVar1 = (undefined4 *)piVar2[2]; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1
      ) {
    if (puVar1[1] == 4) {
      GetDlgItem(param_1,0x423);
      uVar4 = (*pcVar7)();
      uVar12 = 0x151;
      puVar13 = puVar1;
      pHVar3 = GetDlgItem(param_1,0x423);
      (*pcVar7)(pHVar3,uVar12,uVar4,puVar13);
      iVar6 = 4;
      piVar19 = local_310;
      piVar2 = puVar1 + 4;
      do {
        pcVar7 = SendMessageA_exref;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        iVar9 = *piVar2;
        iVar16 = *piVar19;
        piVar19 = piVar19 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar16 == iVar9);
    }
  }
  piVar19 = (int *)0x0;
  iVar16 = 0x146;
  GetDlgItem(param_1,0x423);
  iVar6 = (*pcVar7)();
  BVar14 = 0;
  if (iVar6 == 0) {
    pHVar3 = GetDlgItem(param_1,0x423);
    pcVar8 = EnableWindow_exref;
    EnableWindow(pHVar3,BVar14);
  }
  else {
    uVar4 = 0x14e;
    pHVar3 = GetDlgItem(param_1,0x423);
    (*pcVar7)(pHVar3,uVar4,unaff_ESI);
    pcVar8 = EnableWindow_exref;
  }
  iVar6 = 0;
  uVar4 = 0;
  piVar2 = (int *)0x14b;
  pHVar3 = GetDlgItem(param_1,0x427);
  (*pcVar7)(pHVar3,piVar2,uVar4);
  if (iVar16 != 0) {
    piVar17 = (int *)0x0;
    piVar5 = *(int **)(*(int *)(*piVar19 + 0x39c) + 0x218);
    iVar16 = (**(code **)(*piVar5 + 0x34))(piVar5,&stack0xfffffcc4);
    if (iVar16 == 0) {
      piVar19 = *(int **)(*(int *)(*piVar19 + 0x39c) + 0x218);
      (**(code **)(*piVar19 + 0x40))(piVar19,&stack0xfffffcc0);
      iVar16 = 0;
      if (0 < iVar6) {
        do {
          piVar5 = *(int **)(*(int *)(*piVar17 + 0x39c) + 0x218);
          (**(code **)(*piVar5 + 0x38))(piVar5,iVar16,auStack_228,0x100);
          if ((&stack0x00000000 == (undefined1 *)0x238) || (aWStack_238[0] != L'\0')) {
            WideCharToMultiByte(0,0,aWStack_238,-1,&stack0xfffffcc8,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          puVar10 = &stack0xfffffcc8;
          uStack_239 = 0;
          uVar12 = 0;
          uVar4 = 0x143;
          pHVar3 = GetDlgItem(param_1,0x427);
          uVar4 = (*pcVar7)(pHVar3,uVar4,uVar12,puVar10);
          uVar12 = 0x151;
          iVar9 = iVar16;
          pHVar3 = GetDlgItem(param_1,0x427);
          (*pcVar7)(pHVar3,uVar12,uVar4,iVar9);
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar6);
      }
      uVar11 = 0;
      uVar12 = 0;
      uVar4 = 0x146;
      pHVar3 = GetDlgItem(param_1,0x427);
      iVar6 = (*pcVar7)(pHVar3,uVar4,uVar12,uVar11);
      if (iVar6 == 0) {
        pHVar3 = GetDlgItem(param_1,0x427);
        EnableWindow(pHVar3,iVar6);
        return;
      }
      if (piVar19 == (int *)0xffffffff) {
        iVar16 = 0;
        piVar19 = (int *)0x0;
      }
      else {
        uVar11 = 0;
        uVar12 = 0;
        uVar4 = 0x146;
        pHVar3 = GetDlgItem(param_1,0x427);
        iVar6 = (*pcVar7)(pHVar3,uVar4,uVar12,uVar11);
        iVar16 = 0;
        if (0 < iVar6) {
          do {
            uVar12 = 0;
            uVar4 = 0x150;
            iVar9 = iVar16;
            pHVar3 = GetDlgItem(param_1,0x427);
            piVar5 = (int *)(*pcVar7)(pHVar3,uVar4,iVar9,uVar12);
            if (piVar19 == piVar5) break;
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar6);
        }
      }
      piVar2 = *(int **)(*(int *)(*piVar2 + 0x39c) + 0x218);
      (**(code **)(*piVar2 + 0x3c))(piVar2,piVar19);
      uVar12 = 0;
      uVar4 = 0x14e;
      pHVar3 = GetDlgItem(param_1,0x427);
      (*pcVar7)(pHVar3,uVar4,iVar16,uVar12);
      BVar14 = 1;
      pHVar3 = GetDlgItem(param_1,0x427);
      EnableWindow(pHVar3,BVar14);
      return;
    }
  }
  uVar4 = 0;
  pHVar3 = GetDlgItem(param_1,0x427);
  (*pcVar8)(pHVar3,uVar4);
  return;
}


