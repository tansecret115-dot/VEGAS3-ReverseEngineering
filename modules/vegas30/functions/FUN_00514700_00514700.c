/* Module: vegas30.exe
   Function: FUN_00514700
   Address: 00514700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00514700(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  HCURSOR hCursor;
  HCURSOR pHVar2;
  
  uVar1 = 0x7f00;
  if (((*(byte *)(*param_1 + 0xa8) & 1) != 0) && (param_3 == 1)) {
    if (param_2 == 0x12) {
      if (((*(uint *)(*(int *)(*param_1 + 0x98) + 4) & 0x1e000) == 0x2000) &&
         (uVar1 = 0x6f, (*(byte *)(param_1 + 3) & 4) != 0)) {
        uVar1 = 0x70;
      }
    }
    else {
      switch(param_2) {
      case 0:
      case 4:
        uVar1 = 0x6d;
        break;
      case 1:
      case 5:
        uVar1 = 0x6b;
        break;
      case 2:
      case 6:
        uVar1 = 0x6c;
        break;
      case 3:
      case 7:
        uVar1 = 0x6a;
        break;
      case 8:
        uVar1 = 0x71;
        break;
      case 9:
        uVar1 = 0x7e;
        break;
      case 10:
        uVar1 = 0x69;
        break;
      case 0xb:
      case 0xc:
      case 0x13:
        uVar1 = 0x6e;
        break;
      case 0xe:
      case 0x10:
        uVar1 = 0xc;
        break;
      case 0xf:
      case 0x11:
        uVar1 = 0xb;
      }
    }
    hCursor = (HCURSOR)_SfGetUICursor_4(uVar1);
    pHVar2 = GetCursor();
    if (pHVar2 != hCursor) {
      SetCursor(hCursor);
    }
    return 1;
  }
  return 0;
}


