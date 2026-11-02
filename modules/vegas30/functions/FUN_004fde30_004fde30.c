/* Module: vegas30.exe
   Function: FUN_004fde30
   Address: 004fde30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004fde30(HWND param_1,undefined4 param_2,LONG param_3,LONG param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  tagPOINT local_38;
  undefined1 local_30 [48];
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,0);
  local_38.x = param_3;
  local_38.y = param_4;
  ScreenToClient((HWND)*puVar1,&local_38);
  FUN_004fded0(puVar1,local_38.x,local_38.y,local_30);
  switch(param_5) {
  case 0:
    return 0x7f88;
  case 2:
  case 3:
    return 1;
  case 4:
  }
  return 0;
}


