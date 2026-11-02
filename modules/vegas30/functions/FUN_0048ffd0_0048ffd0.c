/* Module: vegas30.exe
   Function: FUN_0048ffd0
   Address: 0048ffd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048ffd0(int param_1,uint param_2,uint param_3)

{
  if (((*(uint *)(param_1 + 0x80) & 4) != 0) &&
     (((*(uint *)(param_1 + 0x100) & param_2) != 0 || ((*(uint *)(param_1 + 0x104) & param_3) != 0))
     )) {
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 8;
  }
  switch(*(undefined4 *)(param_1 + 0x94)) {
  case 1:
    if ((param_3 & 0x25) == 0) {
      if ((((param_3 & 0x20100) != 0) || ((param_3 & 0x40) != 0)) || ((param_3 & 0x80) != 0))
      goto LAB_004900ea;
    }
    else {
      FUN_0048f940(DAT_0064b138,0,1);
    }
    break;
  case 2:
    if (((param_3 & 0xc0) == 0) && ((param_3 & 0x100) == 0)) break;
    goto LAB_004900ea;
  case 3:
    if ((param_3 & 0x10000) != 0) {
      FUN_0048f940(DAT_0064b138,0,3);
    }
    break;
  case 4:
    if ((param_3 & 0x10000) != 0) {
      FUN_0048f940(DAT_0064b138,0,4);
    }
    break;
  case 5:
    if ((param_3 & 0x10000) != 0) {
      FUN_0048f940(DAT_0064b138,0,5);
    }
    break;
  case 6:
    if ((param_3 & 0x10000) != 0) {
      FUN_0048f940(DAT_0064b138,0,6);
    }
    break;
  case 7:
    if ((param_3 & 0x10000) != 0) {
      FUN_0048f940(DAT_0064b138,0,7);
    }
  }
  if ((param_2 & 2) != 0) {
LAB_004900ea:
    SendMessageA(*(HWND *)(param_1 + 0xdc),0x422,0xffffffff,0xffff);
  }
  return;
}


