/* Module: sftrans1.dll
   Function: FUN_0054a220
   Address: 0054a220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054a220(int param_1,HDC param_2,undefined4 param_3,int param_4)

{
  HDC hdc;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  HPEN h;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  HGDIOBJ local_8;
  
  iVar1 = param_4;
  hdc = param_2;
  if (*(int *)(param_1 + 0x1cc) == 0) {
    uVar2 = ftol();
    iVar3 = ftol();
    h = CreatePen(0,1,*(COLORREF *)(param_1 + 0x180));
    local_8 = (HGDIOBJ)0x0;
    if (h != (HPEN)0x0) {
      local_8 = SelectObject(param_2,h);
    }
    if (*(char *)(param_4 + 0x38) != '\0') {
      if (*(char *)(param_4 + 0x39) == '\0') {
        uVar5 = ftol();
        uVar6 = ftol();
        FUN_005511c0(param_2,param_3,uVar2,iVar3,uVar5,uVar6);
        FUN_005509e0(param_2,uVar5,uVar6,*(undefined4 *)(param_1 + 0x180),0,0);
      }
      else {
        iVar9 = 0x7fff;
        if (_DAT_00555910 <= *(double *)(param_4 + 0x30)) {
          iVar9 = -0x8000;
        }
        iVar4 = *(int *)(param_1 + 0x144);
        param_2 = (HDC)iVar4;
        if ((iVar3 <= iVar4) && (param_2 = (HDC)iVar3, iVar3 < *(int *)(param_1 + 0x13c))) {
          param_2 = (HDC)*(int *)(param_1 + 0x13c);
        }
        if ((iVar4 < iVar9) || (iVar4 = *(int *)(param_1 + 0x13c), param_4 = iVar9, iVar9 < iVar4))
        {
          param_4 = iVar4;
        }
        FUN_005507c0(0x41,100);
        uVar10 = 0;
        FUN_005509a0(param_4);
        uVar5 = ftol(uVar10);
        FUN_00550960(uVar2);
        uVar6 = ftol(uVar5);
        FUN_005509a0(param_2);
        uVar7 = ftol(uVar6);
        FUN_00550960(uVar2);
        uVar8 = ftol(uVar7);
        FUN_0054a590(hdc,param_3,*(undefined4 *)(param_1 + 0x180),uVar8,uVar7,uVar6,uVar5,uVar10);
      }
    }
    if (*(char *)(iVar1 + 0x60) != '\0') {
      if (*(char *)(iVar1 + 0x61) == '\0') {
        uVar5 = ftol();
        uVar6 = ftol();
        FUN_005511c0(hdc,param_3,uVar2,iVar3,uVar5,uVar6);
        FUN_005509e0(hdc,uVar5,uVar6,*(undefined4 *)(param_1 + 0x180),0,0);
      }
      else {
        uVar5 = 0x7fff;
        if (_DAT_00555910 <= *(double *)(iVar1 + 0x58)) {
          uVar5 = 0xffff8000;
        }
        FUN_005511c0(hdc,param_3,uVar2,iVar3,uVar2,uVar5);
      }
    }
    if (local_8 != (HGDIOBJ)0x0) {
      SelectObject(hdc,local_8);
    }
    if (h != (HPEN)0x0) {
      DeleteObject(h);
    }
  }
  return;
}


