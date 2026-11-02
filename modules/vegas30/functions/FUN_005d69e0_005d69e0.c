/* Module: vegas30.exe
   Function: FUN_005d69e0
   Address: 005d69e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d69e0(HWND param_1,HWND param_2,int param_3,int param_4)

{
  LRESULT LVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int iVar4;
  WPARAM wParam;
  double *pdVar5;
  float10 fVar6;
  UINT UVar7;
  undefined4 uVar8;
  LPARAM LVar9;
  undefined4 uVar10;
  undefined8 local_140;
  CHAR local_134 [40];
  CHAR local_10c [264];
  
  if (param_4 == 1) {
    LVar1 = SendMessageA(param_2,0x147,0,0);
    if (LVar1 == -1) {
      return 1;
    }
    *(undefined4 *)(param_3 + 0xda0) = *(undefined4 *)(&DAT_00646b68 + LVar1 * 2);
    *(undefined4 *)(param_3 + 0xda4) = *(undefined4 *)((int)&DAT_00646b68 + LVar1 * 0x10 + 4);
    if (*(int *)(param_3 + 0xd30) == 0) {
      LVar9 = 0;
      UVar7 = 0x468;
      pHVar2 = GetParent(param_1);
      SendMessageA(pHVar2,UVar7,(WPARAM)param_1,LVar9);
    }
  }
  else {
    if (param_4 != 5) {
      if (param_4 != 4) {
        return 1;
      }
      local_134[0] = '\0';
      GetWindowTextA(param_2,local_134,0x28);
      fVar6 = (float10)_SfTextToDoubleTokenEx_32
                                 (local_134,*(undefined4 *)(param_3 + 0xda0),
                                  *(undefined4 *)(param_3 + 0xda4),DAT_0062a170,DAT_0062a174,
                                  DAT_0062a178,DAT_0062a17c,0);
      local_140 = (double)fVar6;
      pdVar5 = (double *)&DAT_00646b68;
      do {
        uVar10 = *(undefined4 *)((int)pdVar5 + 4);
        uVar8 = *(undefined4 *)pdVar5;
        uVar3 = _SfGetString_8(DAT_00647204,*(undefined4 *)(pdVar5 + -1));
        SfPrintF(local_10c,uVar3,uVar8,uVar10);
        iVar4 = lstrcmpA(local_134,local_10c);
        if (iVar4 == 0) {
          local_140 = *pdVar5;
        }
        pdVar5 = pdVar5 + 2;
      } while (pdVar5 < s___0_0_0000_00000_0_0_00646bce + 10);
      if (local_140 != *(double *)(param_3 + 0xda0)) {
        *(undefined4 *)(param_3 + 0xda0) = (undefined4)local_140;
        *(undefined4 *)(param_3 + 0xda4) = local_140._4_4_;
      }
      wParam = FUN_005d6780((undefined4)local_140,local_140._4_4_);
      if (wParam == 0xffffffff) {
        SfSetWindowText(param_2,&DAT_0062a218,(undefined4)local_140,local_140._4_4_);
        return 1;
      }
      SendMessageA(param_2,0x14e,wParam,0);
      return 1;
    }
    if (*(int *)(param_3 + 0xd30) == 0) {
      LVar9 = 0;
      UVar7 = 0x468;
      pHVar2 = GetParent(param_1);
      SendMessageA(pHVar2,UVar7,(WPARAM)param_1,LVar9);
      *(undefined4 *)(param_3 + 0xd4c) = 1;
      return 1;
    }
  }
  *(undefined4 *)(param_3 + 0xd4c) = 1;
  return 1;
}


