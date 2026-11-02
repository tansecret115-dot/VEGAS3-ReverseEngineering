/* Module: vidcap30.exe
   Function: FUN_0045fe40
   Address: 0045fe40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045fe40(HWND param_1,undefined4 param_2,uint param_3,int param_4)

{
  LONG LVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  undefined4 uVar5;
  UINT UVar6;
  WPARAM wParam;
  LPARAM LVar7;
  
  uVar5 = 0;
  LVar1 = GetWindowLongA(param_1,8);
  switch(param_2) {
  case 0x4e:
    if (*(int *)(param_4 + 8) == -0xcb) {
      *(undefined4 *)(LVar1 + 0x2ac) = 0;
      return 0;
    }
    if (*(int *)(param_4 + 8) == -0xca) {
      *(undefined4 *)(LVar1 + 0x2a8) = 1;
      FUN_00460140(param_1,LVar1);
      iVar4 = (**(code **)(LVar1 + 0x24))(LVar1);
      SetWindowLongA(param_1,0,(uint)(iVar4 == 0));
      return 1;
    }
    break;
  case 0x53:
    FUN_0041f690(0,param_1,0,*(undefined4 *)(param_4 + 8),&DAT_005b6238,0);
    uVar5 = 1;
    break;
  case 0x110:
    iVar4 = FUN_00460090(param_1,param_4);
    *(undefined4 *)(iVar4 + 0x2b8) = 1;
    FUN_004600e0(param_1,iVar4);
    *(undefined4 *)(iVar4 + 0x2b8) = 0;
    return 0;
  case 0x111:
    if ((short)param_3 == -0x63a9) {
      LVar7 = 0;
      wParam = 0;
      UVar6 = 0xf0;
      pHVar2 = GetDlgItem(param_1,0x9c57);
      LVar3 = SendMessageA(pHVar2,UVar6,wParam,LVar7);
      *(LRESULT *)(LVar1 + 700) = LVar3;
      return 0;
    }
    param_3 = param_3 >> 0x10;
    if (((param_3 == 1) || (param_3 == 5)) || ((param_3 == 0x300 && (*(int *)(LVar1 + 0x2b8) == 0)))
       ) {
      if (*(int *)(LVar1 + 0x2a4) == 0) {
        LVar7 = 0;
        UVar6 = 0x468;
        pHVar2 = GetParent(param_1);
        SendMessageA(pHVar2,UVar6,(WPARAM)param_1,LVar7);
      }
      *(undefined4 *)(LVar1 + 0x2ac) = 1;
      return 0;
    }
  }
  return uVar5;
}


