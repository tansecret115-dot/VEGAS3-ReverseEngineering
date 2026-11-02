/* Module: sfppack1.dll
   Function: FUN_5cde8cb0
   Address: 5cde8cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cde8cb0(byte *param_1,WPARAM param_2,undefined4 param_3,uint param_4,int *param_5,
                 undefined4 param_6)

{
  HWND pHVar1;
  int iVar2;
  HWND local_20;
  WPARAM local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  int *local_4;
  
  if ((*param_1 & 2) != 0) {
    local_20 = *(HWND *)(param_1 + 0x30);
    local_8 = param_4;
    local_1c = param_2;
    local_14 = *(undefined4 *)(param_1 + 0x11c);
    local_4 = param_5;
    local_10 = *(undefined4 *)(param_1 + 0x24);
    local_18 = 0xffffff98;
    local_c = param_6;
    if (*(HWND *)(param_1 + 0x38) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x38),0x4e,param_2,(LPARAM)&local_20);
      return;
    }
    pHVar1 = GetParent(local_20);
    SendMessageA(pHVar1,0x4e,local_1c,(LPARAM)&local_20);
    return;
  }
  if ((param_4 == 5) || (param_4 == 4)) {
    iVar2 = *param_5;
  }
  else {
    iVar2 = 0;
  }
  pHVar1 = *(HWND *)(param_1 + 0x38);
  if ((param_1[0xc] & 8) != 0) {
    if (pHVar1 == (HWND)0x0) {
      pHVar1 = GetParent(*(HWND *)(param_1 + 0x30));
    }
    SendMessageA(pHVar1,0x115,iVar2 << 0x10 | param_4 & 0xffff,*(LPARAM *)(param_1 + 0x30));
    return;
  }
  if (pHVar1 == (HWND)0x0) {
    pHVar1 = GetParent(*(HWND *)(param_1 + 0x30));
  }
  SendMessageA(pHVar1,0x114,iVar2 << 0x10 | param_4 & 0xffff,*(LPARAM *)(param_1 + 0x30));
  return;
}


