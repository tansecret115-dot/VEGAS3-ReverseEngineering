/* Module: vegas30.exe
   Function: FUN_005e3030
   Address: 005e3030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e3030(HWND param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  HWND pHVar2;
  WPARAM wParam;
  LRESULT LVar3;
  long lVar4;
  UINT Msg;
  LPARAM lParam;
  
  if (param_2 == 1) {
    pHVar2 = GetDlgItem(param_1,0x436);
    wParam = SendMessageA(pHVar2,0x147,0,0);
    if (wParam != 0xffffffff) {
      LVar3 = SendMessageA(pHVar2,0x150,wParam,0);
      puVar1 = (undefined4 *)(param_3 + 0x23c);
      if (*(int *)(param_3 + 0x23c) == LVar3) {
        *(undefined4 *)(param_3 + 0xd4c) = 0;
        return;
      }
      if (LVar3 == 1) {
        lVar4 = Mixer_GetNumMainBuses((ISFMixer *)0x0);
        *puVar1 = 1;
        *(long *)(param_3 + 0x350) = lVar4;
      }
      else if (LVar3 == 2) {
        *puVar1 = 2;
        *(undefined4 *)(param_3 + 0x350) = 2;
      }
      else if (LVar3 == 3) {
        *puVar1 = 3;
        *(undefined4 *)(param_3 + 0x350) = 3;
      }
      FUN_005e2950(param_1,puVar1);
      if (*(int *)(param_3 + 0xd30) == 0) {
        lParam = 0;
        Msg = 0x468;
        pHVar2 = GetParent(param_1);
        SendMessageA(pHVar2,Msg,(WPARAM)param_1,lParam);
      }
      *(undefined4 *)(param_3 + 0xd4c) = 1;
    }
  }
  return;
}


