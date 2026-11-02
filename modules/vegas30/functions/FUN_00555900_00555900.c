/* Module: vegas30.exe
   Function: FUN_00555900
   Address: 00555900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555900(HWND param_1,int param_2)

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
     (iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 8) + 8) + LVar3 * 4), *(int *)(iVar1 + 0x60) != 0
     )) {
    local_30[0] = '\0';
    pHVar2 = GetDlgItem(param_1,0x633);
    GetWindowTextA(pHVar2,local_30,0x28);
    fVar5 = (float10)_SfTextToDoubleTokenEx_32
                               (local_30,*(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x5c)
                                ,DAT_0061aea0,DAT_0061aea4,DAT_0061aea8,DAT_0061aeac,0);
    WVar6 = 0;
    if (0 < DAT_0062a1ac) {
      pdVar4 = (double *)&DAT_00646b68;
      do {
        if ((fVar5 - (float10)_DAT_00612af8 <= (float10)*pdVar4) &&
           ((float10)*pdVar4 <= fVar5 + (float10)_DAT_00612af8)) {
          *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(&DAT_00646b68 + WVar6 * 2);
          *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)((int)&DAT_00646b68 + WVar6 * 0x10 + 4);
          if (WVar6 != 0xffffffff) {
            SendMessageA(pHVar2,0x14e,WVar6,0);
            return;
          }
          break;
        }
        WVar6 = WVar6 + 1;
        pdVar4 = pdVar4 + 2;
      } while ((int)WVar6 < DAT_0062a1ac);
    }
    *(double *)(iVar1 + 0x58) = (double)fVar5;
    SfSetWindowText(pHVar2,&DAT_00619d20,(double)fVar5);
  }
  return;
}


