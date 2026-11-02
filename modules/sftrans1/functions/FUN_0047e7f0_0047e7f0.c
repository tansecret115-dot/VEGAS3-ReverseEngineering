/* Module: sftrans1.dll
   Function: FUN_0047e7f0
   Address: 0047e7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0047e7f0(int param_1,int param_2)

{
  bool bVar1;
  HWND hWnd;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  UINT Msg;
  WPARAM wParam;
  undefined4 local_78;
  uint local_74 [29];
  
  puVar4 = local_74;
  for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_74;
  wParam = 1;
  Msg = 0x43a;
  local_74[0] = 0x74;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x643);
  SendMessageA(hWnd,Msg,wParam,(LPARAM)puVar4);
  bVar1 = true;
  if (param_2 == 0x9c49) {
    if (((local_74[1] & 1) == 0) || ((local_74[2] & 1) == 0)) {
      FUN_0052d290(0x9c49,5);
    }
    else {
      FUN_0052d290(0x9c49,4);
      bVar1 = false;
    }
    local_78 = 1;
    uVar3 = 1;
  }
  else {
    uVar3 = local_78;
    if (param_2 != 0x9c4a) goto LAB_0047e8ca;
    if (((local_74[1] & 2) == 0) || ((local_74[2] & 2) == 0)) {
      FUN_0052d290(0x9c4a,5);
      local_78 = 2;
      uVar3 = 2;
    }
    else {
      FUN_0052d290(0x9c4a,4);
      local_78 = 2;
      bVar1 = false;
      uVar3 = 2;
    }
  }
  if (!bVar1) {
    puVar4 = local_74;
    for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_74[2] = 0;
    local_74[0] = 0x74;
    local_74[1] = local_78;
    FUN_0047e000(local_74,1);
    return;
  }
LAB_0047e8ca:
  puVar4 = local_74;
  for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_74[0] = 0x74;
  local_74[1] = local_78;
  local_74[2] = uVar3;
  FUN_0047e000(local_74,1);
  return;
}


