/* Module: vidcap30.exe
   Function: FUN_00432b60
   Address: 00432b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00432b60(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  UINT Msg;
  WPARAM WVar4;
  
  uVar1 = param_1;
  iVar3 = 0;
  uVar2 = 0;
  if (param_2 < 0x9cc9) {
    if (param_2 == 0x9cc8) {
      WVar4 = 0x9c6a;
LAB_00432c86:
      SendMessageA(*(HWND *)(param_1 + 0x184),0x111,WVar4,0);
      FUN_00404910(0,0);
      return;
    }
    if (param_2 < 0x9cc5) {
      if (param_2 == 0x9cc4) {
        SendMessageA(*(HWND *)(param_1 + 0x184),0x611,0,0);
        FUN_00404910(0,0);
        return;
      }
      if ((param_2 == 0) || (param_2 == 2)) {
        WVar4 = 0;
        Msg = 0x1f;
LAB_00432bc6:
        SendMessageA(*(HWND *)(param_1 + 0x184),Msg,WVar4,0);
        FUN_00404910(0,0);
        return;
      }
      if (param_2 == 0x9cc3) {
        SendMessageA(*(HWND *)(param_1 + 0x184),0x615,0,0);
        FUN_00404910(0,0);
        return;
      }
    }
    else {
      if (param_2 == 0x9cc5) {
        SendMessageA(*(HWND *)(param_1 + 0x184),0x610,0,0);
        FUN_00404910(0,0);
        return;
      }
      if (param_2 == 0x9cc6) {
        WVar4 = 0x9c68;
        Msg = 0x111;
        goto LAB_00432bc6;
      }
      if (param_2 == 0x9cc7) {
        WVar4 = 0x9c69;
        goto LAB_00432c86;
      }
    }
  }
  else {
    switch(param_2) {
    case 0x9ccc:
      SendMessageA(*(HWND *)(param_1 + 0x184),0x60c,0,0x586c70);
      FUN_00404910(0,0);
      return;
    case 0x9ccd:
      SendMessageA(*(HWND *)(param_1 + 0x184),0x614,0,0);
      FUN_00404910(0,0);
      return;
    case 0x9d42:
      uVar2 = 0xb;
      iVar3 = FUN_00434210(*(undefined4 *)(param_1 + 0x184),&param_1,1);
      if (-1 < iVar3) {
        uVar2 = FUN_00434360(param_1,1);
        FUN_00417990(param_1);
        FUN_00404910(uVar2,0xb);
        return;
      }
      break;
    case 0x9d54:
      iVar3 = FUN_00434280(*(undefined4 *)(param_1 + 0x184),&param_2);
      if ((-1 < iVar3) &&
         (iVar3 = FUN_00434210(*(undefined4 *)(uVar1 + 0x184),&param_1,1), -1 < iVar3)) {
        FUN_004342c0(*(undefined4 *)(uVar1 + 0x184),~-(uint)(*(int *)(uVar1 + 0x188) != 0) & param_1
                     ,param_2);
      }
      if (param_2 != 0) {
        FUN_00417990(param_2);
      }
      if (param_1 != 0) {
        FUN_00417990(param_1);
      }
      break;
    case 0x9d57:
      uVar2 = 0xb;
      iVar3 = FUN_00434210(*(undefined4 *)(param_1 + 0x184),&param_1,1);
      if (-1 < iVar3) {
        uVar2 = FUN_00434360(param_1,0);
        FUN_00417990(param_1);
        FUN_00404910(uVar2,0xb);
        return;
      }
      break;
    case 0x9d58:
      WVar4 = 0x9c6c;
      Msg = 0x111;
      goto LAB_00432bc6;
    case 0x9d5a:
      WVar4 = 0x9c6b;
      goto LAB_00432c86;
    }
  }
  FUN_00404910(iVar3,uVar2);
  return;
}


