/* Module: vidcap30.exe
   Function: FUN_0045ec60
   Address: 0045ec60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045ec60(HWND param_1,undefined4 *param_2)

{
  SHORT SVar1;
  undefined4 uVar2;
  WPARAM wParam;
  tagPOINT local_8;
  
  switch(*(undefined2 *)(param_2 + 3)) {
  case 0x26:
  case 0x28:
    SVar1 = GetKeyState(0x11);
    if (-1 < SVar1) {
      return;
    }
    wParam = (*(short *)(param_2 + 3) != 0x26) + 0x4bc;
    break;
  default:
    return;
  case 0x2d:
    SendMessageA(param_1,0x111,0x4ba,0);
    return;
  case 0x2e:
    SendMessageA(param_1,0x111,0x4bb,0);
    return;
  case 0x5d:
    uVar2 = FUN_0041f9c0(*param_2,1);
    FUN_0041f9f0(*param_2,uVar2,&local_8);
    MapWindowPoints((HWND)*param_2,(HWND)0x0,&local_8,1);
    FUN_0045e5f0(param_1,local_8.x,local_8.y);
    return;
  case 0x71:
    wParam = 0x4d4;
    break;
  case 0x79:
    SVar1 = GetKeyState(0x10);
    if (-1 < SVar1) {
      return;
    }
    uVar2 = FUN_0041f9c0(*param_2,1);
    FUN_0041f9f0(*param_2,uVar2,&local_8);
    MapWindowPoints((HWND)*param_2,(HWND)0x0,&local_8,1);
    FUN_0045e5f0(param_1,local_8.x,local_8.y);
    return;
  }
  SendMessageA(param_1,0x111,wParam,0);
  return;
}


