/* Module: vegas30k.dll
   Function: FUN_01138590
   Address: 01138590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01138590(HWND param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int *piVar4;
  int iVar5;
  LRESULT LVar6;
  int *unaff_EBX;
  WPARAM WVar7;
  WPARAM unaff_retaddr;
  undefined1 *puVar8;
  undefined1 *lParam;
  UINT UVar9;
  WPARAM WVar10;
  LPARAM LVar11;
  int *piVar12;
  int *piVar13;
  int local_304 [56];
  undefined1 uStack_221;
  WCHAR aWStack_220 [4];
  undefined1 auStack_218 [536];
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,8);
  WVar7 = 0;
  piVar13 = local_304;
  local_304[0] = 0;
  piVar12 = (int *)*puVar1;
  (**(code **)(*piVar12 + 0xb8))();
  LVar11 = 0;
  WVar10 = 0;
  UVar9 = 0x18b;
  pHVar2 = GetDlgItem(param_1,0x426);
  LVar3 = SendMessageA(pHVar2,UVar9,WVar10,LVar11);
  if (0 < LVar3) {
    do {
      LVar11 = 0;
      UVar9 = 0x199;
      WVar10 = WVar7;
      pHVar2 = GetDlgItem(param_1,0x426);
      piVar4 = (int *)SendMessageA(pHVar2,UVar9,WVar10,LVar11);
      (**(code **)(*piVar4 + 8))();
      WVar7 = WVar7 + 1;
    } while ((int)WVar7 < LVar3);
  }
  LVar11 = 0;
  WVar7 = 0;
  UVar9 = 0x184;
  pHVar2 = GetDlgItem(param_1,0x426);
  SendMessageA(pHVar2,UVar9,WVar7,LVar11);
  LVar11 = 0;
  WVar7 = 0;
  UVar9 = 0x14b;
  pHVar2 = GetDlgItem(param_1,0x427);
  SendMessageA(pHVar2,UVar9,WVar7,LVar11);
  if (unaff_EBX != (int *)0x0) {
    lParam = &stack0xfffffcf0;
    piVar4 = (int *)0x0;
    iVar5 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,1);
    while (iVar5 == 0) {
      (**(code **)(*piVar12 + 0x28))(piVar12,auStack_218);
      if ((&stack0x00000000 == (undefined1 *)0x220) || (aWStack_220[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_220,-1,&stack0xfffffce0,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x320) {
        piVar12 = (int *)((uint)piVar12 & 0xffffff00);
      }
      puVar8 = &stack0xfffffce0;
      uStack_221 = 0;
      WVar7 = 0;
      UVar9 = 0x180;
      pHVar2 = GetDlgItem(param_1,0x426);
      WVar7 = SendMessageA(pHVar2,UVar9,WVar7,(LPARAM)puVar8);
      UVar9 = 0x19a;
      puVar8 = lParam;
      pHVar2 = GetDlgItem(param_1,0x426);
      SendMessageA(pHVar2,UVar9,WVar7,(LPARAM)lParam);
      iVar5 = (**(code **)(*piVar4 + 0xc))(piVar4,1,&stack0xfffffcd8,0);
      lParam = puVar8;
    }
    (**(code **)(*piVar13 + 8))(piVar13);
  }
  LVar11 = 0;
  WVar7 = 0;
  UVar9 = 0x18b;
  pHVar2 = GetDlgItem(param_1,0x426);
  LVar3 = SendMessageA(pHVar2,UVar9,WVar7,LVar11);
  if (LVar3 != 0) {
    if (unaff_retaddr == 0xffffffff) {
      LVar11 = 0;
      WVar7 = 0;
      UVar9 = 0x18b;
      pHVar2 = GetDlgItem(param_1,0x426);
      LVar6 = SendMessageA(pHVar2,UVar9,WVar7,LVar11);
      unaff_retaddr = LVar6 - 1;
    }
    if (LVar3 < (int)unaff_retaddr) {
      unaff_retaddr = LVar3 - 1;
    }
    LVar11 = 0;
    UVar9 = 0x186;
    pHVar2 = GetDlgItem(param_1,0x426);
    SendMessageA(pHVar2,UVar9,unaff_retaddr,LVar11);
  }
  return;
}


