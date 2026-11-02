/* Module: vegas30k.dll
   Function: FUN_011b8490
   Address: 011b8490
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011b8490(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  bool bVar9;
  undefined4 local_764 [2];
  uchar auStack_75c [256];
  int iStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  uchar auStack_64c [264];
  int *piStack_544;
  int aiStack_534 [4];
  undefined4 uStack_524;
  int iStack_31c;
  CHAR aCStack_318 [63];
  undefined1 uStack_2d9;
  int iStack_218;
  int iStack_204;
  WCHAR aWStack_200 [256];
  
  puVar7 = local_764;
  for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar3 = 4;
  piVar8 = (int *)(param_2 + 4);
  bVar9 = true;
  local_764[0] = 0x230;
  piVar5 = piVar8;
  piVar6 = &DAT_011dab90;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar9 = *piVar5 == *piVar6;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar9);
  iVar3 = 1;
  if ((bVar9) ||
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x220) + 0x28))
                        (*(int **)(param_1 + 0x220),*piVar8,*(undefined4 *)(param_2 + 8)),
     pcVar4 = _mbscpy_exref, iVar3 != 0)) {
    iVar2 = lstrlenA((LPCSTR)(param_2 + 0x14));
    if (iVar2 != 0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x220) + 0x2c))();
    }
    pcVar4 = _mbscpy_exref;
    if (iVar3 != 0) {
      iVar2 = lstrlenA((LPCSTR)(param_2 + 0x114));
      if (iVar2 != 0) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x220) + 0x2c))();
      }
      pcVar4 = _mbscpy_exref;
      if (iVar3 != 0) {
        uVar1 = *(undefined4 *)(param_2 + 0xc);
        puVar7 = local_764;
        for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        uStack_658 = *(undefined4 *)(param_2 + 8);
        iStack_65c = *piVar8;
        uStack_650 = *(undefined4 *)(param_2 + 0x10);
        local_764[0] = 0x230;
        uStack_654 = uVar1;
        _mbscpy(auStack_75c,(uchar *)(param_2 + 0x14));
        _mbscpy(auStack_64c,(uchar *)(param_2 + 0x114));
        iVar3 = (**(code **)(**(int **)(param_1 + 0x220) + 0xc))();
        if (iVar3 != 0) {
          return iVar3;
        }
      }
    }
  }
  if (piStack_544 == (int *)0x0) {
    return -0x7fff0001;
  }
  iVar3 = 0;
  do {
    piVar8 = aiStack_534;
    for (iVar2 = 0xcd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    aiStack_534[0] = 0x334;
    iVar2 = (**(code **)(*piStack_544 + 0x10))(piStack_544);
    if (((iVar2 == 0) &&
        (((*(int *)(param_2 + 0x31c) == -1 || (*(int *)(param_2 + 0x218) == -1)) ||
         (iStack_31c == *(int *)(param_2 + 0x218))))) &&
       (iVar2 = (**(code **)(*piStack_544 + 0xc))(), -1 < iVar2)) {
      iStack_218 = *(int *)(param_2 + 0x31c);
      if (*(int *)(param_2 + 0x31c) == -1) {
        iStack_218 = iStack_31c;
      }
      aiStack_534[2] = uStack_658;
      aiStack_534[3] = uStack_654;
      aiStack_534[1] = iStack_65c;
      uStack_524 = uStack_650;
      iStack_204 = iVar3;
      (*pcVar4)();
      (*pcVar4)();
      if ((&stack0x00000000 == (undefined1 *)0x200) || (aWStack_200[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_200,-1,aCStack_318,0x40,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x318) {
        aCStack_318[0] = '\0';
      }
      uStack_2d9 = 0;
      _SfList_AllocAndInsertItem_20(*(undefined4 *)(param_1 + 0x14));
      pcVar4 = _mbscpy_exref;
      if (*(int *)(param_2 + 0x31c) != -1) break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar2 == 0);
  if (iVar2 == 1) {
    iVar2 = 0;
  }
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x14);
    return iVar2;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return iVar2;
}


