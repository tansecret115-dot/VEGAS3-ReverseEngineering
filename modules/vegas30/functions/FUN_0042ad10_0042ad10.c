/* Module: vegas30.exe
   Function: FUN_0042ad10
   Address: 0042ad10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0042ae18) */
/* WARNING: Removing unreachable block (ram,0x0042ae21) */
/* WARNING: Removing unreachable block (ram,0x0042ae29) */
/* WARNING: Removing unreachable block (ram,0x0042ae48) */
/* WARNING: Removing unreachable block (ram,0x0042ae4e) */
/* WARNING: Removing unreachable block (ram,0x0042ae61) */
/* WARNING: Removing unreachable block (ram,0x0042ae64) */
/* WARNING: Removing unreachable block (ram,0x0042ae73) */
/* WARNING: Removing unreachable block (ram,0x0042ae7a) */
/* WARNING: Removing unreachable block (ram,0x0042ae8d) */
/* WARNING: Removing unreachable block (ram,0x0042ae90) */
/* WARNING: Removing unreachable block (ram,0x0042ae92) */
/* WARNING: Removing unreachable block (ram,0x0042ae66) */
/* WARNING: Removing unreachable block (ram,0x0042ae9d) */
/* WARNING: Removing unreachable block (ram,0x0042aeff) */
/* WARNING: Removing unreachable block (ram,0x0042af04) */
/* WARNING: Removing unreachable block (ram,0x0042af33) */
/* WARNING: Removing unreachable block (ram,0x0042af46) */
/* WARNING: Removing unreachable block (ram,0x0042af49) */
/* WARNING: Removing unreachable block (ram,0x0042af4b) */
/* WARNING: Removing unreachable block (ram,0x0042af5e) */
/* WARNING: Removing unreachable block (ram,0x0042af61) */
/* WARNING: Removing unreachable block (ram,0x0042af63) */
/* WARNING: Removing unreachable block (ram,0x0042af76) */
/* WARNING: Removing unreachable block (ram,0x0042af79) */
/* WARNING: Removing unreachable block (ram,0x0042af09) */
/* WARNING: Removing unreachable block (ram,0x0042af0e) */
/* WARNING: Removing unreachable block (ram,0x0042af2c) */
/* WARNING: Removing unreachable block (ram,0x0042aef2) */
/* WARNING: Removing unreachable block (ram,0x0042af18) */
/* WARNING: Removing unreachable block (ram,0x0042af21) */
/* WARNING: Removing unreachable block (ram,0x0042af24) */
/* WARNING: Removing unreachable block (ram,0x0042af2a) */
/* WARNING: Removing unreachable block (ram,0x0042af7b) */
/* WARNING: Removing unreachable block (ram,0x0042af80) */
/* WARNING: Removing unreachable block (ram,0x0042afb1) */
/* WARNING: Removing unreachable block (ram,0x0042ae1a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ad10(HWND param_1,undefined4 param_2,int param_3)

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
  _DAT_0064bc18 = DAT_0060f218;
  _DAT_0064bc1c = DAT_0060f21c;
  _DAT_0064bc24 = DAT_0060f224;
  _DAT_0064bc20 = DAT_0060f220;
  iVar2 = (**(code **)*DAT_0064b510)(DAT_0064b510,&DAT_0060f078);
  if ((-1 < iVar2) && (unaff_ESI != (int *)0x0)) {
    if ((uVar6 >> 1 & 1) != 0) {
      (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,0,2);
    }
    piVar9 = (int *)0x2;
    iVar2 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,&DAT_0064bc18,1,0x20);
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


