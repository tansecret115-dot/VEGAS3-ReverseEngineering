/* Module: vidcap30.exe
   Function: FUN_00458660
   Address: 00458660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00458660(HWND param_1,int param_2,HWND param_3,LPPOINT param_4,int param_5)

{
  HMENU hmenu;
  uint uVar1;
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
  
  if ((param_4->x == 0) && (param_4->y == 0)) {
    param_4->x = 4;
    param_4->y = 4;
  }
  ClientToScreen(param_3,param_4);
  if (param_5 == -1) {
    local_2c = 0x9cc6;
    local_28 = 0x9cc8;
    local_24 = 0x9cca;
    local_20 = 0x9d58;
    local_1c = 0x9d5a;
    local_18 = 0x9ccc;
    local_14 = 0x9d54;
    local_10 = 0x9ccd;
    local_c = 0x9d89;
    local_8 = 0x9d8a;
    hmenu = (HMENU)FUN_00404200(400,0);
    if (hmenu != (HMENU)0x0) {
      _SfCullMenu_16(hmenu,&local_2c,10,1);
      CheckMenuRadioItem(hmenu,0x9cc9,0x9ccb,(-(uint)(DAT_005bb21c != 0) & 0xfffffffe) + 0x9ccb,0);
    }
  }
  else {
    local_2c = 0x9d57;
    local_28 = 0x9d91;
    local_24 = 0x9d42;
    local_20 = 0x9d53;
    local_1c = 0x9cd0;
    local_18 = 0x9d88;
    local_14 = 0x9d56;
    local_10 = 0x9d54;
    local_c = 0x9cc3;
    local_8 = 0x9d52;
    local_4 = 0x9d82;
    hmenu = (HMENU)FUN_00404200(0x191,0);
    if (hmenu != (HMENU)0x0) {
      _SfCullMenu_16(hmenu,&local_2c,0xb,1);
    }
  }
  EnableMenuItem(hmenu,0x9cc5,(uint)(*(int *)(param_2 + 0xc) == 0));
  EnableMenuItem(hmenu,0x9cc4,(uint)(*(int *)(param_2 + 0xc) == 0));
  EnableMenuItem(hmenu,0x9d81,(uint)(*(int *)(param_2 + 0xc) == 0));
  EnableMenuItem(hmenu,0x9d80,(uint)(*(int *)(param_2 + 0xc) == 0));
  uVar1 = FUN_00404270(param_1,hmenu,param_4,2);
  SendMessageA(param_1,0x111,uVar1 & 0xffff,0);
  return;
}


