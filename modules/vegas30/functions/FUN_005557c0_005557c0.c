/* Module: vegas30.exe
   Function: FUN_005557c0
   Address: 005557c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005557c0(HWND param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  double *pdVar4;
  float10 fVar5;
  UINT Msg;
  WPARAM WVar6;
  LPARAM lParam;
  CHAR local_30 [44];
  
  lParam = 0;
  WVar6 = 0;
  Msg = 0x147;
  pHVar2 = GetDlgItem(param_1,0x4cf);
  LVar3 = SendMessageA(pHVar2,Msg,WVar6,lParam);
  if ((LVar3 != -1) &&
     (iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 8) + 8) + LVar3 * 4), *(int *)(iVar1 + 0x38) != 0
     )) {
    local_30[0] = '\0';
    pHVar2 = GetDlgItem(param_1,0x4d5);
    GetWindowTextA(pHVar2,local_30,0x28);
    fVar5 = (float10)_SfTextToDoubleTokenEx_32
                               (local_30,*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34)
                                ,DAT_0061aeb0,DAT_0061aeb4,DAT_0061aeb8,DAT_0061aebc,0);
    WVar6 = 0;
    if (0 < DAT_0062a1a8) {
      pdVar4 = (double *)&DAT_00646990;
      do {
        if ((fVar5 - (float10)_DAT_0061aec0 <= (float10)*pdVar4) &&
           ((float10)*pdVar4 <= (float10)_DAT_0061aec0 + fVar5)) {
          *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(&DAT_00646990 + WVar6 * 5);
          *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)((int)&DAT_00646990 + WVar6 * 0x28 + 4);
          if (WVar6 != 0xffffffff) {
            SendMessageA(pHVar2,0x14e,WVar6,0);
            return;
          }
          break;
        }
        WVar6 = WVar6 + 1;
        pdVar4 = pdVar4 + 5;
      } while ((int)WVar6 < DAT_0062a1a8);
    }
    *(double *)(iVar1 + 0x30) = (double)fVar5;
    SfSetWindowText(pHVar2,&DAT_0061aedc,(double)fVar5);
  }
  return;
}


