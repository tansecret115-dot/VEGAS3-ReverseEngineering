/* Module: vegas30.exe
   Function: FUN_004903b0
   Address: 004903b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004903b0(HWND param_1,int param_2)

{
  int iVar1;
  LPARAM lParam;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  SendMessageA(param_1,0x438,1,0);
  iVar1 = FUN_004904f0(param_2,*(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_2 + 0x98));
  if (iVar1 < 0) {
    if (*(int *)(param_2 + 0x98) != 0) {
      *(undefined4 *)(param_2 + 0x98) = 0;
      FUN_004904f0(param_2,*(undefined4 *)(param_2 + 0x94),0);
    }
    FUN_004901f0(param_2,*(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_2 + 0x98));
  }
  local_30 = *(undefined4 *)(param_2 + 0xf8);
  local_24 = *(undefined4 *)(param_2 + 0xf4);
  local_20 = *(undefined4 *)(param_2 + 300);
  local_28 = 0;
  local_2c = local_30;
  FUN_0048f3b0(&local_30);
  *(undefined4 *)(param_2 + 300) = local_20;
  SendMessageA(param_1,0x40b,0,(LPARAM)&local_30);
  SendMessageA(param_1,0x42e,0,4);
  local_1c = 2;
  local_18 = 0xff00;
  local_14 = 0xffffffff;
  local_10 = 0xffffffff;
  local_c = 6;
  local_8 = 0;
  local_4 = 0;
  SendMessageA(param_1,0x437,0,(LPARAM)&local_1c);
  lParam = FUN_00489d40(param_2,*(undefined4 *)(param_2 + 0x120));
  SendMessageA(param_1,0x43b,*(WPARAM *)(param_2 + 0x124),lParam);
  _DAT_0063e3c8 = param_2;
  SendMessageA(param_1,0x419,0,0x63e3c8);
  SendMessageA(param_1,0x438,0,0);
  return;
}


