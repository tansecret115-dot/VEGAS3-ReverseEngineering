/* Module: sftrans1.dll
   Function: FUN_0054a590
   Address: 0054a590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0054a590(int param_1,HDC param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 in_stack_00000020;
  undefined4 uVar12;
  LPPOINT lppt;
  
  if (param_3 == 0) {
    lppt = (LPPOINT)0x0;
    iVar4 = ftol();
    iVar5 = ftol();
    MoveToEx(param_2,iVar5,iVar4,lppt);
    iVar4 = ftol();
    iVar5 = ftol();
    LineTo(param_2,iVar5,iVar4);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x140) - *(int *)(param_1 + 0x138);
  iVar10 = *(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x13c);
  ftol();
  ftol();
  ftol();
  ftol();
  uVar12 = 1;
  uVar6 = ftol(1,in_stack_00000020);
  uVar7 = ftol(uVar6);
  uVar8 = ftol();
  uVar9 = ftol();
  FUN_00550b00(uVar9,uVar8,uVar7,uVar6,uVar12,in_stack_00000020);
  iVar5 = FUN_00550d90();
  while (iVar5 != 0) {
    iVar5 = *(int *)(param_1 + 0x1484);
    iVar11 = *(int *)(param_1 + 0x1480);
    if ((((-1 < iVar5) && (iVar5 < iVar10)) && (-1 < iVar11)) && (iVar11 < iVar4)) {
      iVar11 = ((iVar10 - iVar5) + -1) * iVar4 + iVar11;
      uVar6 = *(undefined4 *)(param_3 + iVar11 * 4);
      ftol();
      ftol();
      ftol();
      uVar1 = ftol();
      uVar2 = ftol();
      uVar3 = ftol();
      *(uint *)(param_3 + iVar11 * 4) =
           CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar6 >> 0x18),uVar1),uVar2),uVar3);
    }
    iVar5 = FUN_00550d90();
  }
  return;
}


