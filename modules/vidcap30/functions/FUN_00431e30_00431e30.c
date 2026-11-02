/* Module: vidcap30.exe
   Function: FUN_00431e30
   Address: 00431e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00431e30(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x1fc) {
    if (param_2 == 0x1fb) {
      FUN_00431dd0(param_1,0xc4df);
      return;
    }
    switch(param_2) {
    case 0x1ce:
      FUN_00431dd0(param_1,0xa2f0);
      return;
    case 0x1cf:
      FUN_00431dd0(param_1,0xc55f);
      return;
    case 0x1d0:
      FUN_00431dd0(param_1,0xc4f0);
      return;
    case 0x1d1:
      FUN_00431dd0(param_1,0xc4bf);
      return;
    case 0x1d2:
      FUN_00431dd0(param_1,0xc4be);
      return;
    case 0x1d6:
      FUN_00431dd0(param_1,0xa2e8);
      return;
    case 0x1d7:
      FUN_00431dd0(param_1,0xa2ea);
      return;
    case 0x1d8:
      FUN_00431dd0(param_1,0xa2eb);
      return;
    case 0x1d9:
      FUN_00431dd0(param_1,0xa2ed);
      return;
    case 0x1da:
      FUN_00431dd0(param_1,0xa2ec);
      return;
    case 0x1db:
      FUN_00431dd0(param_1,0xa2ee);
      return;
    case 0x1dd:
      FUN_00431dd0(param_1,0xa2ef);
      return;
    case 0x1df:
      FUN_00431dd0(param_1,0xc557);
      return;
    }
  }
  else if (param_2 < 0x4bb) {
    if (param_2 == 0x4ba) {
      FUN_00431dd0(param_1,0xc4d7);
      return;
    }
    switch(param_2) {
    case 0x205:
      FUN_00431dd0(param_1,0xc4e0);
      return;
    case 0x206:
      FUN_00431dd0(param_1,0xc4e1);
      return;
    case 0x207:
      FUN_00431dd0(param_1,0xc4f1);
      return;
    case 0x208:
      FUN_00431dd0(param_1,0xc4f2);
      return;
    case 0x215:
      FUN_00431dd0(param_1,0xc583);
      return;
    case 0x216:
      FUN_00431dd0(param_1,0xa2bf);
      return;
    case 0x217:
      FUN_00431dd0(param_1,0xc566);
      return;
    case 0x229:
      FUN_00431dd0(param_1,0xc586);
      return;
    case 0x22a:
      FUN_00431dd0(param_1,0xc587);
      return;
    case 0x22b:
      FUN_00431dd0(param_1,0xc588);
      return;
    case 0x22c:
      FUN_00431dd0(param_1,0xc589);
      return;
    case 0x22d:
      FUN_00431dd0(param_1,0xc58a);
      return;
    }
  }
  else if (param_2 < 0x9c68) {
    if (param_2 == 0x9c67) {
      FUN_00431dd0(param_1,0x9cb9);
      return;
    }
    if (param_2 < 0x4be) {
      if (param_2 == 0x4bd) {
        FUN_00431dd0(param_1,0xc4da);
        return;
      }
      if (param_2 == 0x4bb) {
        FUN_00431dd0(param_1,0xc4d8);
        return;
      }
      if (param_2 == 0x4bc) {
        FUN_00431dd0(param_1,0xc4d9);
        return;
      }
    }
    else {
      if (param_2 == 0x9c61) {
        FUN_00431dd0(param_1,0x9cb3);
        return;
      }
      if (param_2 == 0x9c62) {
        FUN_00431dd0(param_1,0x9cb4);
        return;
      }
    }
  }
  else {
    switch(param_2) {
    case 0x9cdc:
      FUN_00431dd0(param_1,0xc4dd);
      return;
    case 0x9cdd:
      FUN_00431dd0(param_1,0xc4f3);
      return;
    case 0x9cde:
      uVar1 = 0xc4de;
      break;
    case 0x9d88:
      FUN_00431dd0(param_1,0xc537);
      return;
    case 0x9d89:
      FUN_00431dd0(param_1,0xc574);
      return;
    }
  }
  FUN_00431dd0(param_1,uVar1);
  return;
}


