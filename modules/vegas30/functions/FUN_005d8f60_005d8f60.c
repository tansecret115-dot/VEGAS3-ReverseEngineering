/* Module: vegas30.exe
   Function: FUN_005d8f60
   Address: 005d8f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d8f60(HWND param_1,int param_2,int param_3)

{
  HWND pHVar1;
  HWND hWnd;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  UINT Msg;
  CHAR *pCVar6;
  LPARAM lParam;
  int local_130;
  int local_12c;
  undefined4 local_128 [6];
  undefined4 local_110;
  undefined4 local_10c;
  CHAR local_100 [256];
  
  pCVar6 = local_100;
  puVar3 = (undefined4 *)(param_2 + 0xd08);
  puVar4 = local_128;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = 0x100;
  local_110 = 0;
  local_10c = 0;
  pHVar1 = GetDlgItem(param_1,0x47a);
  iVar2 = GetWindowTextA(pHVar1,pCVar6,iVar2);
  if (iVar2 != 0) {
    uVar5 = _SfTextToNanoTimeToken_16(local_100,local_128,0,0);
    local_130 = -(int)uVar5;
    local_12c = -((int)((ulonglong)uVar5 >> 0x20) + (uint)((int)uVar5 != 0));
  }
  if ((local_130 != *(int *)(param_2 + 0xd20)) || (local_12c != *(int *)(param_2 + 0xd24))) {
    *(int *)(param_2 + 0xd20) = local_130;
    *(int *)(param_2 + 0xd24) = local_12c;
    if (*(int *)(param_2 + 0xd58) == 0) {
      if (*(int *)(param_2 + 0xd30) == 0) {
        lParam = 0;
        Msg = 0x468;
        pHVar1 = param_1;
        hWnd = GetParent(param_1);
        SendMessageA(hWnd,Msg,(WPARAM)pHVar1,lParam);
      }
      *(undefined4 *)(param_2 + 0xd4c) = 1;
    }
  }
  if (param_3 == 0x200) {
    _SfNanoTimeToText_20(local_100,local_128,-local_130,-(local_12c + (uint)(local_130 != 0)),0);
    pCVar6 = local_100;
    pHVar1 = GetDlgItem(param_1,0x47a);
    SfSetWindowText(pHVar1,pCVar6);
  }
  return 1;
}


