/* Module: vegas30.exe
   Function: FUN_00482e60
   Address: 00482e60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00482f68) */
/* WARNING: Removing unreachable block (ram,0x00482f71) */
/* WARNING: Removing unreachable block (ram,0x00482f79) */
/* WARNING: Removing unreachable block (ram,0x00482f98) */
/* WARNING: Removing unreachable block (ram,0x00482f9e) */
/* WARNING: Removing unreachable block (ram,0x00482fb1) */
/* WARNING: Removing unreachable block (ram,0x00482fb4) */
/* WARNING: Removing unreachable block (ram,0x00482fc3) */
/* WARNING: Removing unreachable block (ram,0x00482fca) */
/* WARNING: Removing unreachable block (ram,0x00482fdd) */
/* WARNING: Removing unreachable block (ram,0x00482fe0) */
/* WARNING: Removing unreachable block (ram,0x00482fe2) */
/* WARNING: Removing unreachable block (ram,0x00482fb6) */
/* WARNING: Removing unreachable block (ram,0x00482fed) */
/* WARNING: Removing unreachable block (ram,0x0048304f) */
/* WARNING: Removing unreachable block (ram,0x00483054) */
/* WARNING: Removing unreachable block (ram,0x00483083) */
/* WARNING: Removing unreachable block (ram,0x00483096) */
/* WARNING: Removing unreachable block (ram,0x00483099) */
/* WARNING: Removing unreachable block (ram,0x0048309b) */
/* WARNING: Removing unreachable block (ram,0x004830ae) */
/* WARNING: Removing unreachable block (ram,0x004830b1) */
/* WARNING: Removing unreachable block (ram,0x004830b3) */
/* WARNING: Removing unreachable block (ram,0x004830c6) */
/* WARNING: Removing unreachable block (ram,0x004830c9) */
/* WARNING: Removing unreachable block (ram,0x00483059) */
/* WARNING: Removing unreachable block (ram,0x0048305e) */
/* WARNING: Removing unreachable block (ram,0x0048307c) */
/* WARNING: Removing unreachable block (ram,0x00483042) */
/* WARNING: Removing unreachable block (ram,0x00483068) */
/* WARNING: Removing unreachable block (ram,0x00483071) */
/* WARNING: Removing unreachable block (ram,0x00483074) */
/* WARNING: Removing unreachable block (ram,0x0048307a) */
/* WARNING: Removing unreachable block (ram,0x004830cb) */
/* WARNING: Removing unreachable block (ram,0x004830d0) */
/* WARNING: Removing unreachable block (ram,0x00483101) */
/* WARNING: Removing unreachable block (ram,0x00482f6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482e60(HWND param_1,undefined4 param_2,int param_3)

{
  HWND pHVar1;
  int iVar2;
  LRESULT LVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_EBX;
  int *unaff_ESI;
  uint uVar7;
  int unaff_retaddr;
  uint uVar8;
  int *piVar9;
  UINT UVar10;
  WPARAM WVar11;
  LPARAM LVar12;
  
  LVar12 = 0;
  WVar11 = 0;
  UVar10 = 0x14b;
  pHVar1 = GetDlgItem(param_1,0x435);
  SendMessageA(pHVar1,UVar10,WVar11,LVar12);
  uVar8 = DAT_00648cc4;
  uVar6 = *(uint *)(param_3 + 0x108);
  _DAT_0064bfe0 = DAT_0060f218;
  _DAT_0064bfe4 = DAT_0060f21c;
  _DAT_0064bfec = DAT_0060f224;
  _DAT_0064bfe8 = DAT_0060f220;
  iVar2 = (**(code **)*DAT_0064b510)(DAT_0064b510,&DAT_0060f078);
  if ((-1 < iVar2) && (unaff_ESI != (int *)0x0)) {
    if ((uVar6 >> 1 & 1) != 0) {
      (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,0,2);
    }
    piVar9 = (int *)0x2;
    iVar2 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,&DAT_0064bfe0,1,0x20);
    if (-1 < iVar2) {
      (**(code **)(*piVar9 + 0x38))(piVar9,&stack0xfffffca0);
    }
    (**(code **)(*piVar9 + 8))(piVar9);
  }
  LVar12 = 0;
  WVar11 = 0;
  UVar10 = 0x146;
  pHVar1 = GetDlgItem(param_1,0x435);
  LVar3 = SendMessageA(pHVar1,UVar10,WVar11,LVar12);
  uVar6 = ((int)(LVar3 - 1U) < 0) - 1 & LVar3 - 1U;
  if (LVar3 == 0) {
    uVar4 = _SfGetString_8(DAT_00647204,0x6e81);
    SfMsgBox(param_1,0x31,uVar4);
  }
  if (unaff_EBX == 0xffffffff) {
    if (*(int *)(unaff_retaddr + 0xa18) == 0) {
      unaff_EBX = 0;
    }
    else {
      unaff_EBX = ((int)uVar8 < 0) - 1 & uVar8;
    }
  }
  uVar7 = 0;
  uVar8 = uVar6;
  if (0 < LVar3) {
    do {
      LVar12 = 0;
      UVar10 = 0x150;
      uVar8 = uVar7;
      pHVar1 = GetDlgItem(param_1,0x435);
      uVar5 = SendMessageA(pHVar1,UVar10,uVar8,LVar12);
      uVar8 = uVar7;
      if (unaff_EBX == uVar5) break;
      uVar7 = uVar7 + 1;
      uVar8 = uVar6;
    } while ((int)uVar7 < LVar3);
  }
  LVar12 = 0;
  UVar10 = 0x14e;
  pHVar1 = GetDlgItem(param_1,0x435);
  SendMessageA(pHVar1,UVar10,uVar8,LVar12);
  uVar6 = (uint)(1 < LVar3);
  pHVar1 = GetDlgItem(param_1,0x435);
  EnableWindow(pHVar1,uVar6);
  return;
}


