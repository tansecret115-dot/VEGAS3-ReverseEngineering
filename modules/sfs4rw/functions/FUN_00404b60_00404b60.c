/* Module: sfs4rw.dll
   Function: FUN_00404b60
   Address: 00404b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404b60(HWND param_1,int param_2)

{
  LPSTR lpString1;
  HWND pHVar1;
  int iVar2;
  LRESULT LVar3;
  int *piVar4;
  code *pcVar5;
  UINT UVar6;
  WPARAM WVar7;
  LPARAM LVar8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  uchar local_80 [128];
  
  local_e0 = 0x1b84;
  local_d0 = param_2 + 0x80;
  local_c4 = param_2 + 799;
  local_d8 = 0x80;
  local_cc = 0x80;
  local_c0 = 0x80;
  local_b8 = param_2 + 0x100;
  local_b4 = 0x80;
  local_ac = param_2 + 0x180;
  local_a8 = 0x80;
  local_9c = 0x80;
  local_90 = 0x80;
  local_dc = param_2;
  local_d4 = 0xe3c;
  local_c8 = 0x1b88;
  local_bc = 0x1b85;
  local_b0 = 0x1b86;
  local_a4 = 0x1b7c;
  local_a0 = param_2 + 0x200;
  local_98 = 0x1b87;
  local_94 = param_2 + 0x280;
  local_8c = 0x1b7a;
  local_88 = param_2 + 0x305;
  local_84 = 0x15;
  piVar4 = &local_e0;
  local_e4 = 8;
  do {
    pcVar5 = GetDlgItem_exref;
    pHVar1 = GetDlgItem(param_1,*piVar4);
    if (pHVar1 != (HWND)0x0) {
      GetDlgItemTextA(param_1,*piVar4,(LPSTR)local_80,0x80);
      FUN_00404ae0(local_80);
      iVar2 = piVar4[2];
      lpString1 = (LPSTR)piVar4[1];
      lstrcpynA(lpString1,(LPCSTR)local_80,iVar2);
      lpString1[iVar2 + -1] = '\0';
      pcVar5 = GetDlgItem_exref;
    }
    piVar4 = piVar4 + 3;
    local_e4 = local_e4 + -1;
  } while (local_e4 != 0);
  iVar2 = (*pcVar5)(param_1,0x1b89);
  if (iVar2 != 0) {
    LVar8 = 0;
    WVar7 = 0;
    UVar6 = 0x147;
    pHVar1 = (HWND)(*pcVar5)(param_1,0x1b89);
    LVar3 = SendMessageA(pHVar1,UVar6,WVar7,LVar8);
    lstrcpynA((LPSTR)(param_2 + 0x300),&DAT_004a4884 + LVar3 * 8,5);
    *(undefined1 *)(param_2 + 0x304) = 0;
  }
  iVar2 = (*pcVar5)(param_1,0x1b8a);
  if (iVar2 != 0) {
    LVar8 = 0;
    WVar7 = 0;
    UVar6 = 0x147;
    pHVar1 = (HWND)(*pcVar5)(param_1,0x1b8a);
    LVar3 = SendMessageA(pHVar1,UVar6,WVar7,LVar8);
    lstrcpynA((LPSTR)(param_2 + 0x31a),&DAT_004a4b14 + LVar3 * 8,5);
    *(undefined1 *)(param_2 + 0x31e) = 0;
  }
  iVar2 = (*pcVar5)(param_1,0xe3f);
  if (iVar2 != 0) {
    UVar6 = IsDlgButtonChecked(param_1,0xe3f);
    if (UVar6 == 1) {
      *(undefined4 *)(param_2 + 0x440) = 1;
    }
    else {
      *(undefined4 *)(param_2 + 0x440) = 0;
    }
  }
  iVar2 = (*pcVar5)(param_1,0xe40);
  if (iVar2 != 0) {
    UVar6 = IsDlgButtonChecked(param_1,0xe40);
    if (UVar6 == 1) {
      *(undefined4 *)(param_2 + 0x444) = 1;
      return;
    }
    *(undefined4 *)(param_2 + 0x444) = 0;
  }
  return;
}


