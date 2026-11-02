/* Module: vegas30.exe
   Function: FUN_00429cf0
   Address: 00429cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00429cf0(HWND param_1,int param_2,undefined4 param_3,int param_4,int *param_5)

{
  UINT UVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  undefined4 uVar5;
  UINT Msg;
  WPARAM WVar6;
  LPARAM LVar7;
  undefined4 uVar8;
  
  switch(param_2) {
  case 0x5e9:
    if (param_4 == 1) {
      LVar7 = 0;
      WVar6 = 0;
      UVar1 = 0x147;
      pHVar2 = GetDlgItem(param_1,param_2);
      WVar6 = SendMessageA(pHVar2,UVar1,WVar6,LVar7);
      LVar7 = 0;
      UVar1 = 0x150;
      pHVar2 = GetDlgItem(param_1,param_2);
      LVar3 = SendMessageA(pHVar2,UVar1,WVar6,LVar7);
      FUN_004296a0(*param_5,LVar3);
      if (LVar3 < 0) {
        uVar8 = 0;
        uVar5 = 0;
      }
      else {
        if (DAT_0064b57c == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *DAT_0064b57c;
        }
        if (iVar4 + -1 < LVar3) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(DAT_0064b57c[2] + LVar3 * 4);
        }
        uVar5 = *(undefined4 *)(iVar4 + 0x1a8);
        uVar8 = *(undefined4 *)(*param_5 + 0x3118);
      }
      pHVar2 = GetDlgItem(param_1,0x61a);
      FUN_00429810(pHVar2,uVar5,uVar8);
      LVar7 = 0;
      UVar1 = 0x468;
      pHVar2 = GetParent(param_1);
      SendMessageA(pHVar2,UVar1,(WPARAM)param_1,LVar7);
      param_5[2] = 1;
      return 0;
    }
    break;
  default:
    return 1;
  case 0x61a:
    if (param_4 == 1) {
      LVar7 = 0;
      WVar6 = 0;
      UVar1 = 0x147;
      pHVar2 = GetDlgItem(param_1,param_2);
      WVar6 = SendMessageA(pHVar2,UVar1,WVar6,LVar7);
      LVar7 = 0;
      UVar1 = 0x150;
      pHVar2 = GetDlgItem(param_1,param_2);
      LVar3 = SendMessageA(pHVar2,UVar1,WVar6,LVar7);
      LVar7 = 0;
      UVar1 = 0x468;
      *(LRESULT *)(*param_5 + 0x3118) = LVar3;
      pHVar2 = GetParent(param_1);
      SendMessageA(pHVar2,UVar1,(WPARAM)param_1,LVar7);
      param_5[2] = 1;
      return 0;
    }
    break;
  case 0x61b:
    uVar5 = FUN_00429c10(param_1,param_5);
    return uVar5;
  case 0x622:
    UVar1 = IsDlgButtonChecked(param_1,0x622);
    LVar7 = 0;
    Msg = 0x468;
    *(UINT *)(*param_5 + 0x322c) = UVar1;
    pHVar2 = GetParent(param_1);
    SendMessageA(pHVar2,Msg,(WPARAM)param_1,LVar7);
    param_5[2] = 1;
  }
  return 0;
}


