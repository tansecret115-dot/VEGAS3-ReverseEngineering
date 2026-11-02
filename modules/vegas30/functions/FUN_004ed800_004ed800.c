/* Module: vegas30.exe
   Function: FUN_004ed800
   Address: 004ed800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ed800(HWND param_1,undefined4 param_2)

{
  WPARAM wParam;
  
  switch(param_2) {
  case 0x1459:
    SendMessageA(param_1,0x111,0x9c68,0);
    return 1;
  case 0x145a:
    wParam = 0x9c69;
    break;
  case 0x145b:
    SendMessageA(param_1,0x111,0x9c6a,0);
    return 1;
  case 0x145c:
    SendMessageA(param_1,0x111,0x9c6b,0);
    return 1;
  case 0x145d:
    wParam = 0x9c6c;
    break;
  case 0x145e:
    SendMessageA(param_1,0x611,0,0);
    return 1;
  case 0x145f:
    SendMessageA(param_1,0x610,0,0);
    return 1;
  case 0x1460:
    SendMessageA(param_1,0x60c,0,0x60f98c);
    return 1;
  case 0x1461:
    SendMessageA(param_1,0x614,0,0);
    return 1;
  default:
    return 0;
  case 0x1463:
    SendMessageA(param_1,0x615,0,0);
    return 1;
  case 0x1469:
    SendMessageA(param_1,0x619,0,0);
    return 1;
  }
  SendMessageA(param_1,0x111,wParam,0);
  return 1;
}


