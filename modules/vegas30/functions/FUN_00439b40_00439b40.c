/* Module: vegas30.exe
   Function: FUN_00439b40
   Address: 00439b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00439b40(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_2 < 0x9d9e) || (0x9da1 < param_2)) {
    if (((param_2 < 0x9e66) || (0x9e77 < param_2)) && (param_2 != 0xa76b)) {
      if ((0xc4b7 < param_2) && (param_2 < 0xc4bc)) {
        if ((param_2 == 0xc4b9) || (param_2 == 0xc4b8)) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
        if ((param_2 == 0xc4b8) || (param_2 == 0xc4ba)) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
        FUN_004399f0(param_1,uVar2,uVar1);
      }
    }
    else {
      SendMessageA(DAT_00647624,0x111,param_2,0);
    }
  }
  else {
    DAT_00647808 = param_2 - 0x9d9e;
    local_10 = *(undefined4 *)(param_1 + 0x90);
    local_c = *(undefined4 *)(param_1 + 0x94);
    local_8 = *(undefined4 *)(param_1 + 0x98);
    local_4 = *(undefined4 *)(param_1 + 0x9c);
    FUN_00438f30(param_1,DAT_00647808);
    FUN_004396c0(param_1,&local_10);
  }
  if (*(HWND *)(param_1 + 8) != (HWND)0x0) {
    RedrawWindow(*(HWND *)(param_1 + 8),(RECT *)0x0,(HRGN)0x0,1);
    return;
  }
  FUN_004c56d0(DAT_00647630,0);
  return;
}


