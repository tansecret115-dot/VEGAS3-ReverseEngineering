/* Module: vegas30.exe
   Function: FUN_005d6bc0
   Address: 005d6bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d6bc0(HWND param_1,HWND param_2,int param_3,int param_4)

{
  WPARAM WVar1;
  LRESULT LVar2;
  HWND pHVar3;
  float10 fVar4;
  UINT UVar5;
  LPARAM LVar6;
  CHAR local_30 [44];
  
  if (param_4 == 1) {
    WVar1 = SendMessageA(param_2,0x147,0,0);
    if (WVar1 == 0xffffffff) {
      return 1;
    }
    LVar2 = SendMessageA(param_2,0x150,WVar1,0);
    *(undefined4 *)(param_3 + 0xd80) = *(undefined4 *)(&DAT_00646990 + LVar2 * 5);
    *(undefined4 *)(param_3 + 0xd84) = *(undefined4 *)((int)&DAT_00646990 + LVar2 * 0x28 + 4);
    if (*(int *)(param_3 + 0xd30) == 0) {
      LVar6 = 0;
      UVar5 = 0x468;
      pHVar3 = GetParent(param_1);
      SendMessageA(pHVar3,UVar5,(WPARAM)param_1,LVar6);
    }
  }
  else {
    if (param_4 != 5) {
      if (param_4 != 4) {
        return 1;
      }
      local_30[0] = '\0';
      GetWindowTextA(param_2,local_30,0x28);
      fVar4 = (float10)_SfTextToDoubleTokenEx_32
                                 (local_30,*(undefined4 *)(param_3 + 0xd80),
                                  *(undefined4 *)(param_3 + 0xd84),DAT_0062a180,DAT_0062a184,
                                  DAT_0062a188,DAT_0062a18c,0);
      if (fVar4 != (float10)*(double *)(param_3 + 0xd80)) {
        *(double *)(param_3 + 0xd80) = (double)fVar4;
      }
      WVar1 = FUN_005d66e0((double)fVar4);
      if (WVar1 != 0xffffffff) {
        SendMessageA(param_2,0x14e,WVar1,0);
        return 1;
      }
      SfSetWindowText(param_2,&DAT_0061aedc,(double)fVar4);
      return 1;
    }
    if (*(int *)(param_3 + 0xd30) == 0) {
      LVar6 = 0;
      UVar5 = 0x468;
      pHVar3 = GetParent(param_1);
      SendMessageA(pHVar3,UVar5,(WPARAM)param_1,LVar6);
      *(undefined4 *)(param_3 + 0xd4c) = 1;
      return 1;
    }
  }
  *(undefined4 *)(param_3 + 0xd4c) = 1;
  return 1;
}


