/* Module: vegas30.exe
   Function: FUN_0041c3c0
   Address: 0041c3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c3c0(ISFMixerIn *param_1)

{
  int *piVar1;
  ISFMixerIn *pIVar2;
  long lVar3;
  tagPOINT local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ISFMixerIn *local_28;
  tagPOINT local_24;
  tagPOINT local_1c;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  pIVar2 = param_1;
  SendMessageA(*(HWND *)(param_1 + 0x204),0x433,0x192,(LPARAM)&local_24);
  local_38.x = local_24.x;
  local_38.y = local_1c.y;
  ClientToScreen(*(HWND *)(pIVar2 + 0x204),&local_38);
  ClientToScreen(*(HWND *)(pIVar2 + 0x204),&local_24);
  ClientToScreen(*(HWND *)(pIVar2 + 0x204),&local_1c);
  lVar3 = Mixer_GetDevice(&param_1,4,*(ulong *)(pIVar2 + 0x88));
  if (-1 < lVar3) {
    piVar1 = *(int **)(pIVar2 + 0x354);
    local_14 = &LAB_0041c290;
    local_10 = &LAB_0041c2c0;
    local_c = &LAB_0041c300;
    local_8 = &LAB_0041c320;
    local_4 = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    local_2c = *(undefined4 *)(pIVar2 + 0x88);
    *(ISFMixerIn **)(pIVar2 + 0x354) = param_1;
    local_28 = pIVar2;
    local_30 = 2;
    FUN_00505da0(&local_30,&local_14,pIVar2 + 0xa8,DAT_00647624,&local_24,
                 *(undefined4 *)(pIVar2 + 0x1c8));
  }
  return;
}


