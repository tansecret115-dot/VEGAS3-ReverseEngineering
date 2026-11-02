/* Module: vegas30.exe
   Function: FUN_00551070
   Address: 00551070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551070(HWND param_1,int param_2)

{
  int iVar1;
  LPARAM lParam;
  uint uVar2;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  SendMessageA(param_1,0x438,1,0);
  _DAT_00644f68 = param_2;
  *(undefined **)(param_2 + 0x57c) = &DAT_00644f68;
  FUN_0054c340(param_2,*(undefined4 *)(param_2 + 0x56c),*(undefined4 *)(param_2 + 0x570));
  *(undefined4 **)(param_2 + 0x54c) = &DAT_00657628;
  *(undefined4 *)(param_2 + 0x550) = DAT_00644e20;
  *(undefined4 *)(param_2 + 0x554) = 0;
  if (*(undefined4 **)(param_2 + 0xb4) != (undefined4 *)0x0) {
    *(undefined4 *)(param_2 + 0x554) = **(undefined4 **)(param_2 + 0xb4);
  }
  local_20 = *(undefined4 *)(param_2 + 0x548);
  local_30 = *(uint *)(param_2 + 0x550);
  uVar2 = 0;
  local_28 = 0;
  local_24 = &DAT_00657628;
  if (local_30 != 0) {
    iVar1 = 0;
    do {
      uVar2 = uVar2 + 1;
      *(undefined2 *)((int)&DAT_0065762c + iVar1 + 2) =
           (&DAT_006577c8)[*(ushort *)((int)&DAT_00657630 + iVar1)];
      iVar1 = iVar1 + 0x10;
    } while (uVar2 < local_30);
  }
  local_2c = local_30;
  SendMessageA(param_1,0x40b,0,(LPARAM)&local_30);
  SendMessageA(param_1,0x42e,0,4);
  local_1c = 1;
  local_18 = 0xff00;
  local_14 = 0xffffffff;
  local_10 = 0xffffffff;
  local_c = 4;
  local_8 = 0;
  local_4 = 2;
  SendMessageA(param_1,0x437,0,(LPARAM)&local_1c);
  lParam = FUN_0054c2f0(param_2,*(undefined4 *)(param_2 + 0x56c));
  SendMessageA(param_1,0x43b,*(WPARAM *)(param_2 + 0x570),lParam);
  SendMessageA(param_1,0x419,0,0x644f68);
  SendMessageA(param_1,0x438,0,0);
  return;
}


