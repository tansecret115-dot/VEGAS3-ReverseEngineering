/* Module: vegas30.exe
   Function: FUN_0056a5a0
   Address: 0056a5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0056a5a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  int local_10 [2];
  int local_8 [2];
  
  piVar9 = (int *)(param_1 + 0x6ec);
  FUN_0044f240(piVar9);
  piVar1 = (int *)(param_1 + 0x6fc);
  FUN_0044f240(piVar1);
  FUN_0044f240(param_1 + 0x70c);
  FUN_0044f240(param_1 + 0x71c);
  FUN_0044f240(param_1 + 0x72c);
  *(undefined4 **)(param_1 + 0x6bc) = &DAT_0064b188;
  *(undefined **)(param_1 + 0x6c0) = &DAT_0064b1c8;
  *(undefined4 *)(param_1 + 0x2a8) = DAT_0064b30c;
  *(undefined4 *)(param_1 + 0x2ac) = DAT_0064b310;
  if (DAT_0064b238 != 0) {
    FUN_0044f280(piVar9,0xffffffff,0xffffffff,&DAT_0064b238,0,0);
  }
  if (DAT_0064b248 != 0) {
    FUN_0044f280(piVar1,0xffffffff,0xffffffff,&DAT_0064b248,0,0);
  }
  *(undefined4 *)(param_1 + 0x6cc) = 0x13;
  *(undefined4 *)(param_1 + 0x6d4) = 0x17;
  *(undefined4 *)(param_1 + 0x6d8) = 0x19;
  *(undefined4 *)(param_1 + 0x6d0) = 0x19;
  if (*piVar9 == 0) {
LAB_0056a6a3:
    if (*piVar1 != 0) goto LAB_0056a6a8;
  }
  else {
    *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(param_1 + 0x6f4);
    *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_1 + 0x6f8);
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_1 + 0x6f4);
      *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_1 + 0x6f8);
      goto LAB_0056a6a3;
    }
LAB_0056a6a8:
    *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_1 + 0x704);
    *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_1 + 0x708);
    if (*piVar9 == 0) {
      *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(param_1 + 0x704);
      *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_1 + 0x708);
    }
  }
  *(undefined4 *)(param_1 + 0x6e0) = 4;
  *(undefined4 *)(param_1 + 0x6dc) = 4;
  *(undefined4 *)(param_1 + 0x6e8) = 4;
  *(undefined4 *)(param_1 + 0x6e4) = 4;
  if (DAT_0064b1e8 == 0) {
LAB_0056a72d:
    if (DAT_0064b1f8 == 0) goto LAB_0056a76b;
  }
  else {
    uVar5 = *(undefined4 *)(DAT_0064b1e8 + 4);
    *(undefined4 *)(param_1 + 0x6dc) = uVar5;
    *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(DAT_0064b1e8 + 8);
    if (DAT_0064b1f8 == 0) {
      *(undefined4 *)(param_1 + 0x6e4) = uVar5;
      *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_1 + 0x6e0);
      goto LAB_0056a72d;
    }
  }
  *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(DAT_0064b1f8 + 4);
  uVar5 = *(undefined4 *)(DAT_0064b1f8 + 8);
  *(undefined4 *)(param_1 + 0x6e8) = uVar5;
  if (DAT_0064b1f8 == 0) {
    *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(param_1 + 0x6e4);
    *(undefined4 *)(param_1 + 0x6e0) = uVar5;
  }
LAB_0056a76b:
  if (((*(int **)(param_1 + 0x2b0) != (int *)0x0) &&
      (iVar2 = **(int **)(param_1 + 0x2b0), iVar2 != 0)) && (iVar4 = 0, 0 < iVar2)) {
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar4 * 4);
      iVar4 = iVar4 + 1;
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x10;
    } while (iVar4 < iVar2);
  }
  FUN_00568e80(*(undefined4 *)(param_1 + 0x6bc));
  if (*(HWND *)(param_1 + 0x24) != (HWND)0x0) {
    InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)0x0,0);
  }
  uVar5 = _SfGetLabeledStringFixed_16(0xfffffc40,1,0xfffffc40,0);
  piVar9 = local_10;
  uVar8 = 0xffffffff;
  uVar6 = _SfGetUIFont_4(0x6e);
  _SfGetTextExtent_16(uVar6,uVar5,uVar8,piVar9);
  piVar9 = local_8;
  uVar6 = 0xffffffff;
  pcVar7 = "-96.0";
  uVar5 = _SfGetUIFont_4(0x6e);
  _SfGetTextExtent_16(uVar5,pcVar7,uVar6,piVar9);
  if (local_10[0] <= local_8[0]) {
    local_10[0] = local_8[0];
  }
  iVar2 = (*(int *)(param_1 + 0x2a8) + 4) * 3;
  if (iVar2 <= local_10[0] * 2 + 2) {
    *(int *)(param_1 + 0x2c8) = local_10[0] * 2 + 8;
    return;
  }
  *(int *)(param_1 + 0x2c8) = iVar2 + 6;
  return;
}


