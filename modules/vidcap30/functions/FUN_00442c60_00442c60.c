/* Module: vidcap30.exe
   Function: FUN_00442c60
   Address: 00442c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00442c60(int param_1)

{
  HMENU hmenu;
  uint uVar1;
  UINT check;
  
  hmenu = (HMENU)FUN_00404200(0x230,0);
  if (hmenu == (HMENU)0x0) {
    return 0x8004e003;
  }
  if (DAT_005bb558 == 2) {
    check = 0x9d8c;
  }
  else if (DAT_005bb558 == 0) {
    check = 0x9d8e;
  }
  else {
    check = 0x9d8d;
  }
  CheckMenuRadioItem(hmenu,0x9d8c,0x9d8e,check,0);
  uVar1 = FUN_00404270(*(undefined4 *)(param_1 + 8),hmenu,&stack0x00000008,2);
  SendMessageA(*(HWND *)(param_1 + 8),0x111,uVar1 & 0xffff,0);
  return 0;
}


