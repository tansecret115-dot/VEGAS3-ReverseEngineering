/* Module: sfppack2.dll
   Function: FUN_5cd0a774
   Address: 5cd0a774
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0a774(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  int iVar6;
  HCURSOR pHVar7;
  HCURSOR pHVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  HWND in_stack_0000001c;
  
  if ((unaff_EDI < *(int *)(unaff_ESI + 0x34)) || (*(int *)(unaff_ESI + 0x38) < unaff_EDI)) {
    iVar3 = FUN_5cd0a3f0(unaff_ESI,unaff_EDI,(uint *)0x0);
    if (iVar3 != 0) {
      MessageBeep(0);
      return;
    }
    *(int *)(unaff_ESI + 0x24) = unaff_EDI;
    pvVar4 = GlobalAlloc(0x42,8);
    puVar9 = GlobalLock(pvVar4);
    *(undefined4 **)(unaff_ESI + 0x28) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      iVar3 = *(int *)(unaff_ESI + 0xb4);
      *puVar9 = *(undefined4 *)(iVar3 + unaff_EDI * 8);
      puVar9[1] = *(undefined4 *)(iVar3 + 4 + unaff_EDI * 8);
      *(undefined4 *)(unaff_ESI + 0x2c) = 1;
    }
    SetCapture(in_stack_0000001c);
    pHVar7 = (HCURSOR)FUN_5cd2e7f0(4);
    pHVar8 = GetCursor();
    if (pHVar8 != pHVar7) {
      SetCursor(pHVar7);
    }
  }
  else {
    *(int *)(unaff_ESI + 0x24) = unaff_EDI;
    iVar3 = (*(int *)(unaff_ESI + 0x38) - *(int *)(unaff_ESI + 0x34)) + 1;
    *(undefined4 *)(unaff_ESI + 0x3c) = unaff_EBP;
    *(undefined4 *)(unaff_ESI + 0x40) = unaff_EBX;
    *(undefined4 *)(unaff_ESI + 0x50) = 1;
    pvVar4 = GlobalAlloc(0x42,iVar3 * 8);
    pvVar5 = GlobalLock(pvVar4);
    *(LPVOID *)(unaff_ESI + 0x28) = pvVar5;
    if (pvVar5 != (LPVOID)0x0) {
      iVar6 = 0;
      if (0 < iVar3) {
        do {
          iVar1 = *(int *)(unaff_ESI + 0xb4);
          iVar2 = *(int *)(unaff_ESI + 0x28);
          iVar10 = *(int *)(unaff_ESI + 0x34) + iVar6;
          iVar6 = iVar6 + 1;
          *(undefined4 *)(iVar2 + -8 + iVar6 * 8) = *(undefined4 *)(iVar1 + iVar10 * 8);
          *(undefined4 *)(iVar2 + -4 + iVar6 * 8) = *(undefined4 *)(iVar1 + 4 + iVar10 * 8);
        } while (iVar6 < iVar3);
      }
      *(int *)(unaff_ESI + 0x2c) = iVar3;
    }
    SetCapture(in_stack_0000001c);
    pHVar7 = (HCURSOR)FUN_5cd2e7f0(0x7f86);
    pHVar8 = GetCursor();
    if (pHVar8 != pHVar7) {
      SetCursor(pHVar7);
      return;
    }
  }
  return;
}


