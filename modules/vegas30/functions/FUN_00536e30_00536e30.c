/* Module: vegas30.exe
   Function: FUN_00536e30
   Address: 00536e30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00536f58) */
/* WARNING: Removing unreachable block (ram,0x00536f64) */
/* WARNING: Removing unreachable block (ram,0x00536f6c) */
/* WARNING: Removing unreachable block (ram,0x00536f8b) */
/* WARNING: Removing unreachable block (ram,0x00536fee) */
/* WARNING: Removing unreachable block (ram,0x00537001) */
/* WARNING: Removing unreachable block (ram,0x00537004) */
/* WARNING: Removing unreachable block (ram,0x00537013) */
/* WARNING: Removing unreachable block (ram,0x0053701a) */
/* WARNING: Removing unreachable block (ram,0x0053702d) */
/* WARNING: Removing unreachable block (ram,0x00537030) */
/* WARNING: Removing unreachable block (ram,0x00537032) */
/* WARNING: Removing unreachable block (ram,0x00537006) */
/* WARNING: Removing unreachable block (ram,0x0053703d) */
/* WARNING: Removing unreachable block (ram,0x00537062) */
/* WARNING: Removing unreachable block (ram,0x00536f60) */
/* WARNING: Removing unreachable block (ram,0x00537073) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00536e30(HWND param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  LRESULT LVar5;
  uint uVar6;
  uint unaff_EBP;
  int *unaff_ESI;
  WPARAM WVar7;
  int *piVar8;
  UINT UVar9;
  WPARAM WVar10;
  LPARAM LVar11;
  uint local_350;
  uint local_344;
  
  LVar11 = 0;
  WVar10 = 0;
  UVar9 = 0x14b;
  pHVar2 = GetDlgItem(param_1,0x3ec);
  SendMessageA(pHVar2,UVar9,WVar10,LVar11);
  local_344 = 0xffffffff;
  iVar4 = *(int *)(param_2 + 0x1460);
  iVar1 = *(int *)(param_2 + 0x1464);
  _DAT_006573b0 = DAT_0060f218;
  _DAT_006573b4 = DAT_0060f21c;
  _DAT_006573bc = DAT_0060f224;
  local_350 = 0;
  _DAT_006573b8 = DAT_0060f220;
  iVar3 = (**(code **)*DAT_0064b510)(DAT_0064b510,&DAT_0060f078);
  if ((-1 < iVar3) && (unaff_ESI != (int *)0x0)) {
    if (iVar4 != 0) {
      (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,0,2);
    }
    if (iVar1 != 0) {
      (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,0x10);
    }
    piVar8 = (int *)0x2;
    iVar4 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,&DAT_006573b0,1,0x20);
    if (-1 < iVar4) {
      (**(code **)(*piVar8 + 0x38))(piVar8,&stack0xfffffca4);
    }
    (**(code **)(*piVar8 + 8))(piVar8);
  }
  LVar11 = 0;
  WVar10 = 0;
  UVar9 = 0x146;
  pHVar2 = GetDlgItem(param_1,0x3ec);
  LVar5 = SendMessageA(pHVar2,UVar9,WVar10,LVar11);
  if (unaff_EBP == 0xffffffff) {
    if ((*(int *)(param_2 + 0x1448) == 0) && (*(int *)(param_2 + 0x1468) == 0)) {
      local_350 = local_344;
    }
    unaff_EBP = ((int)local_350 < 0) - 1 & local_350;
  }
  WVar7 = 0;
  WVar10 = 0;
  if (0 < LVar5) {
    do {
      LVar11 = 0;
      UVar9 = 0x150;
      WVar10 = WVar7;
      pHVar2 = GetDlgItem(param_1,0x3ec);
      uVar6 = SendMessageA(pHVar2,UVar9,WVar10,LVar11);
      WVar10 = WVar7;
      if (unaff_EBP == uVar6) break;
      WVar7 = WVar7 + 1;
      WVar10 = 0;
    } while ((int)WVar7 < LVar5);
  }
  LVar11 = 0;
  UVar9 = 0x14e;
  pHVar2 = GetDlgItem(param_1,0x3ec);
  SendMessageA(pHVar2,UVar9,WVar10,LVar11);
  return;
}


