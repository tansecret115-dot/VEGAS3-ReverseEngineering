/* Module: vegas30k.dll
   Function: FUN_01143840
   Address: 01143840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01143840(HWND param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  POINT pt;
  BOOL BVar1;
  int iVar2;
  LONG *pLVar3;
  tagRECT local_30;
  LONG local_20 [4];
  LONG local_10;
  undefined4 local_c;
  
  pLVar3 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pLVar3 = 0;
    pLVar3 = pLVar3 + 1;
  }
  local_20[0] = *(LONG *)(param_2 + 4);
  local_20[1] = *(undefined4 *)(param_2 + 0x2c);
  local_20[3] = (LONG)(short)param_3;
  local_10 = (LONG)(short)((uint)param_3 >> 0x10);
  local_20[2] = 0x10;
  GetWindowRect(param_1,&local_30);
  pt.y = local_10;
  pt.x = local_20[3];
  BVar1 = PtInRect(&local_30,pt);
  if (BVar1 == 0) {
    local_20[3] = local_30.left;
    local_10 = local_30.top;
  }
  local_c = param_4;
  SendMessageA(*(HWND *)(param_2 + 8),0x4e,*(WPARAM *)(param_2 + 0x2c),(LPARAM)local_20);
  return;
}


