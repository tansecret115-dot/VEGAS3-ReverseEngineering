/* Module: vegas30.exe
   Function: FUN_005694b0
   Address: 005694b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005694b0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [4];
  LPCSTR local_8;
  int local_4;
  
  local_20 = 0x20;
  local_1c = 2;
  puVar2 = local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_8 = "Audio Properties...";
  if (param_3 < 3) {
    local_8 = "";
  }
  local_4 = lstrlenA(local_8);
  SendMessageA(*(HWND *)(param_1 + 0x3c0),0x442,0xa7b8,(LPARAM)&local_20);
  local_8 = "Insert FX...";
  if (param_3 < 2) {
    local_8 = "";
  }
  local_4 = lstrlenA(local_8);
  SendMessageA(*(HWND *)(param_1 + 0x3c0),0x442,0xa7a5,(LPARAM)&local_20);
  local_8 = "Insert Bus";
  if (param_3 < 1) {
    local_8 = "";
  }
  local_4 = lstrlenA(local_8);
  SendMessageA(*(HWND *)(param_1 + 0x3c0),0x442,0xa7a4,(LPARAM)&local_20);
  return;
}


