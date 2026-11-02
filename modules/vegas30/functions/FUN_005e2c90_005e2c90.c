/* Module: vegas30.exe
   Function: FUN_005e2c90
   Address: 005e2c90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005e2c90(HWND param_1,int param_2,int param_3)

{
  HWND pHVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  UINT UVar6;
  WPARAM wParam;
  HWND pHVar7;
  LPARAM LVar8;
  CHAR local_10 [16];
  
  iVar3 = param_3;
  pHVar7 = param_1;
  if (param_2 == 1) {
    if (*(int *)(param_3 + 0xd30) == 0) {
      LVar8 = 0;
      UVar6 = 0x468;
      pHVar1 = GetParent(param_1);
      SendMessageA(pHVar1,UVar6,(WPARAM)pHVar7,LVar8);
      *(undefined4 *)(iVar3 + 0xd4c) = 1;
      return 1;
    }
  }
  else if (param_2 == 5) {
    if (*(int *)(param_3 + 0xd30) == 0) {
      LVar8 = 0;
      UVar6 = 0x468;
      pHVar1 = GetParent(param_1);
      SendMessageA(pHVar1,UVar6,(WPARAM)pHVar7,LVar8);
      *(undefined4 *)(iVar3 + 0xd4c) = 1;
      return 1;
    }
  }
  else {
    if (param_2 != 4) {
      return 1;
    }
    GetDlgItemTextA(param_1,0x455,local_10,0xf);
    uVar2 = _SfTextToLongToken_8(local_10,0);
    if (uVar2 < 2000) {
      uVar2 = 2000;
    }
    else {
      if (DAT_0064b4e0 == 0) {
        iVar3 = FUN_00601ab0(&param_2,&param_1,1);
        if (iVar3 < 0) {
          DAT_0064b4f0 = 1;
        }
        else if ((int)DAT_0064b4e0 <= (int)((uint)param_1 & 0xff)) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = param_2;
          DAT_0064b4e0 = (uint)param_1 & 0xff;
        }
      }
      uVar5 = 48000;
      if (0x3f < (int)DAT_0064b4e0) {
        uVar5 = 96000;
      }
      if (uVar5 < uVar2) {
        if (DAT_0064b4e0 == 0) {
          iVar3 = FUN_00601ab0(&param_2,&param_1,1);
          if (iVar3 < 0) {
            DAT_0064b4f0 = 1;
          }
          else if ((int)DAT_0064b4e0 <= (int)((uint)param_1 & 0xff)) {
            DAT_0064b4f0 = 0;
            _DAT_0064b4f4 = param_2;
            DAT_0064b4e0 = (uint)param_1 & 0xff;
          }
        }
        uVar2 = 48000;
        if (0x3f < (int)DAT_0064b4e0) {
          uVar2 = 96000;
        }
      }
    }
    iVar3 = param_3;
    if (*(uint *)(param_3 + 0x35c) == uVar2) {
      return 1;
    }
    *(uint *)(param_3 + 0x35c) = uVar2;
    FUN_005e2490(pHVar7,param_3);
    GetDlgItemTextA(pHVar7,0x455,local_10,0xf);
    uVar4 = _SfTextToLongToken_8(local_10,0);
    LVar8 = 0;
    wParam = 0;
    UVar6 = 0x147;
    *(undefined4 *)(iVar3 + 0x35c) = uVar4;
    pHVar1 = GetDlgItem(pHVar7,0x455);
    SendMessageA(pHVar1,UVar6,wParam,LVar8);
    if (*(int *)(iVar3 + 0xd30) == 0) {
      LVar8 = 0;
      UVar6 = 0x468;
      pHVar1 = GetParent(pHVar7);
      SendMessageA(pHVar1,UVar6,(WPARAM)pHVar7,LVar8);
    }
  }
  *(undefined4 *)(iVar3 + 0xd4c) = 1;
  return 1;
}


