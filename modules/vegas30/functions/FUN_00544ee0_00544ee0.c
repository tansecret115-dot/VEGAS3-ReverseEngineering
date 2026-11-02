/* Module: vegas30.exe
   Function: FUN_00544ee0
   Address: 00544ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00544ee0(int param_1,HDC param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int nDenominator;
  HGDIOBJ pvVar3;
  int iVar4;
  HGDIOBJ pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_3 != 0) {
    pvVar3 = (HGDIOBJ)_SfGetUIPenWithStyle_8(8,1);
    pvVar3 = SelectObject(param_2,pvVar3);
    nDenominator = DAT_006495ac;
    iVar9 = DAT_006495a8;
    iVar1 = *(int *)(param_1 + 0x1cc);
    iVar2 = *(int *)(param_1 + 0x1d0);
    iVar6 = *(int *)(param_1 + 0x1c8);
    iVar7 = *(int *)(param_1 + 0x1d4);
    iVar8 = 1;
    if (1 < DAT_006495a8) {
      do {
        iVar4 = MulDiv(iVar2 - iVar6,iVar8,iVar9);
        iVar4 = iVar4 + *(int *)(param_1 + 0x1c8);
        MoveToEx(param_2,iVar4,iVar1,(LPPOINT)0x0);
        LineTo(param_2,iVar4,iVar7);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar9);
    }
    iVar2 = *(int *)(param_1 + 0x1d0);
    iVar6 = *(int *)(param_1 + 0x1c8);
    iVar9 = 1;
    if (1 < nDenominator) {
      do {
        iVar8 = MulDiv(iVar7 - iVar1,iVar9,nDenominator);
        iVar8 = iVar8 + *(int *)(param_1 + 0x1cc);
        MoveToEx(param_2,iVar6,iVar8,(LPPOINT)0x0);
        LineTo(param_2,iVar2,iVar8);
        iVar9 = iVar9 + 1;
      } while (iVar9 < nDenominator);
    }
    SelectObject(param_2,pvVar3);
  }
  if (param_4 != 0) {
    pvVar3 = (HGDIOBJ)_SfGetUIPenWithStyle_8(8,1);
    pvVar3 = SelectObject(param_2,pvVar3);
    pvVar5 = GetStockObject(5);
    pvVar5 = SelectObject(param_2,pvVar5);
    iVar1 = *(int *)(param_1 + 0x1d0);
    iVar6 = ftol();
    iVar2 = *(int *)(param_1 + 0x1d4);
    iVar7 = ftol();
    Rectangle(param_2,*(int *)(param_1 + 0x1c8) + -1 + iVar6,*(int *)(param_1 + 0x1cc) + iVar7,
              (iVar1 - iVar6) + 1,iVar2 - iVar7);
    Rectangle(param_2,iVar6 + *(int *)(param_1 + 0x1c8),*(int *)(param_1 + 0x1cc) + -1 + iVar7,
              *(int *)(param_1 + 0x1d0) - iVar6,(*(int *)(param_1 + 0x1d4) - iVar7) + 1);
    iVar1 = *(int *)(param_1 + 0x1d0);
    iVar6 = ftol();
    iVar2 = *(int *)(param_1 + 0x1d4);
    iVar7 = ftol();
    Rectangle(param_2,*(int *)(param_1 + 0x1c8) + -1 + iVar6,*(int *)(param_1 + 0x1cc) + iVar7,
              (iVar1 - iVar6) + 1,iVar2 - iVar7);
    Rectangle(param_2,iVar6 + *(int *)(param_1 + 0x1c8),*(int *)(param_1 + 0x1cc) + -1 + iVar7,
              *(int *)(param_1 + 0x1d0) - iVar6,(*(int *)(param_1 + 0x1d4) - iVar7) + 1);
    SelectObject(param_2,pvVar5);
    SelectObject(param_2,pvVar3);
  }
  return;
}


