/* Module: vegas30.exe
   Function: FUN_00504380
   Address: 00504380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00504380(HWND param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  HWND pHVar2;
  HWND hWnd;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  LONG dwNewLong;
  int iVar6;
  undefined4 uVar7;
  
  puVar4 = param_3;
  hWnd = param_1;
  uVar7 = 0;
  uVar1 = param_3[2];
  if (uVar1 < 0xffffff37) {
    if (uVar1 == 0xffffff36) {
      dwNewLong = FUN_00504180(param_1,param_2);
      SetWindowLongA(hWnd,0,dwNewLong);
      GetParent(hWnd);
      return 1;
    }
    if ((uVar1 == 0x12) || ((0x13 < uVar1 && (uVar1 < 0x16)))) {
      iVar5 = FUN_005030c0(param_1);
      FUN_00503080(iVar5,0,&param_1);
      piVar3 = param_2;
      uVar1 = puVar4[4];
      if (*(int *)(*param_2 + 0xfec) + 1U <= uVar1) {
        return 0;
      }
      pHVar2 = (HWND)puVar4[3];
      if (param_1 <= pHVar2) {
        return 0;
      }
      if (uVar1 == 0) {
        iVar6 = *(int *)(iVar5 + 4);
        *(HWND *)(iVar5 + 4) = pHVar2;
      }
      else {
        iVar6 = *(int *)(iVar5 + 4 + uVar1 * 4);
        *(HWND *)(iVar5 + 4 + uVar1 * 4) = pHVar2;
      }
      uVar7 = 1;
      if (iVar6 != puVar4[3]) {
        SendMessageA((HWND)*puVar4,0x422,0xffffffff,0x1ffff);
        FUN_00503110(hWnd,piVar3,1);
        SetWindowLongA(hWnd,0,0);
        return 1;
      }
LAB_00504491:
      SetWindowLongA(hWnd,0,0);
      return uVar7;
    }
  }
  else if (uVar1 == 0xffffff37) {
    SetWindowLongA(param_1,0,0);
    uVar7 = 1;
  }
  else if (uVar1 == 0xffffff38) goto LAB_00504491;
  return uVar7;
}


