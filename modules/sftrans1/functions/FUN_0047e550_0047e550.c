/* Module: sftrans1.dll
   Function: FUN_0047e550
   Address: 0047e550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047e550(int param_1)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *puVar5;
  UINT UVar6;
  LPARAM LVar7;
  undefined4 uVar8;
  WPARAM local_158;
  HWND local_154;
  CHAR local_150 [31];
  undefined1 local_131;
  undefined4 local_130;
  uint local_12c;
  byte local_128;
  int local_124;
  WCHAR local_116 [45];
  undefined4 local_bc;
  byte local_b8;
  short local_a4;
  
  local_154 = GetDlgItem(*(HWND *)(param_1 + 4),0x643);
  puVar5 = &local_130;
  for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_130 = 0x74;
  SendMessageA(local_154,0x43a,1,(LPARAM)&local_130);
  if ((local_12c & 0x20000000) == 0) {
    LVar7 = 0;
    WVar2 = 0xffffffff;
    UVar6 = 0x14e;
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x645);
LAB_0047e639:
    SendMessageA(pHVar1,UVar6,WVar2,LVar7);
  }
  else {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x645);
    if ((&stack0x00000000 == (undefined1 *)0x116) || (local_116[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_116,-1,local_150,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x150) {
      local_150[0] = '\0';
    }
    local_131 = 0;
    local_158 = SendMessageA(pHVar1,0x147,0,0);
    WVar2 = SendMessageA(pHVar1,0x158,0,(LPARAM)local_150);
    if (local_158 != WVar2) {
      LVar7 = 0;
      UVar6 = 0x14e;
      goto LAB_0047e639;
    }
  }
  if ((local_12c & 0x80000000) == 0) {
    pHVar1 = *(HWND *)(param_1 + 4);
    WVar2 = 0xffffffff;
    UVar6 = 0x14e;
  }
  else {
    UVar6 = GetDlgItemInt(*(HWND *)(param_1 + 4),0x646,(BOOL *)&local_158,1);
    if (local_124 / 0x14 == UVar6) goto LAB_0047e6b3;
    SetDlgItemInt(*(HWND *)(param_1 + 4),0x646,local_124 / 0x14,0);
    pHVar1 = *(HWND *)(param_1 + 4);
    WVar2 = 0;
    UVar6 = 0x142;
  }
  LVar7 = 0;
  pHVar1 = GetDlgItem(pHVar1,0x646);
  SendMessageA(pHVar1,UVar6,WVar2,LVar7);
LAB_0047e6b3:
  if ((local_12c & 1) == 0) {
    uVar8 = 0x14;
  }
  else if ((local_128 & 1) == 0) {
    uVar8 = 4;
  }
  else {
    uVar8 = 5;
  }
  FUN_0052d290(0x9c49,uVar8);
  if (((byte)local_12c & 2) == 0) {
    uVar8 = 0x14;
  }
  else if ((local_128 & 2) == 0) {
    uVar8 = 4;
  }
  else {
    uVar8 = 5;
  }
  FUN_0052d290(0x9c4a,uVar8);
  puVar5 = &local_bc;
  for (iVar4 = 0x2f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_bc = 0xbc;
  LVar3 = SendMessageA(local_154,0x43d,0,(LPARAM)&local_bc);
  if ((local_b8 & 8) == 0) {
    FUN_0052d290(0x9c4b,4);
    FUN_0052d290(0x9c4d,4);
    iVar4 = 4;
  }
  else {
    FUN_0052d290(0x9c4b,CONCAT31((int3)((uint)LVar3 >> 8),local_a4 == 1) + 4);
    FUN_0052d290(0x9c4d,CONCAT31((int3)((uint)extraout_ECX >> 8),local_a4 == 3) + 4);
    iVar4 = CONCAT31((int3)((uint)extraout_EDX >> 8),local_a4 == 2) + 4;
  }
  FUN_0052d290(0x9c4c,iVar4);
  return;
}


