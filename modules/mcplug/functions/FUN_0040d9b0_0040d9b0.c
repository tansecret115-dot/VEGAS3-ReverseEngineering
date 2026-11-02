/* Module: mcplug.dll
   Function: FUN_0040d9b0
   Address: 0040d9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d9b0(HWND param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  HWND pHVar1;
  float10 fVar2;
  double local_60;
  double local_58;
  undefined8 local_50;
  uchar local_48 [68];
  
  if (param_3 == 0) {
    local_58 = 1140000.0;
    if (param_5 != 1) {
      local_58 = 192000.0;
    }
  }
  else {
    pHVar1 = GetDlgItem(param_1,param_3);
    GetWindowTextA(pHVar1,(LPSTR)local_48,0x40);
    fVar2 = FUN_00430830((LPCSTR)local_48,(undefined4 *)0x0);
    local_58 = (double)fVar2;
  }
  if (param_4 == 0) {
    switch(param_5) {
    case 0:
      local_60 = 104857200.0;
      break;
    case 1:
      local_60 = 1151929.0;
      break;
    case 2:
      switch(param_6) {
      case 0:
        local_60 = 80000000.0;
        break;
      case 1:
        local_60 = 60000000.0;
        break;
      case 2:
        local_60 = 15000000.0;
        break;
      case 3:
        local_60 = 4000000.0;
      }
      break;
    case 3:
      local_60 = 2600000.0;
      break;
    case 4:
      local_60 = 9800000.0;
    }
  }
  else {
    pHVar1 = GetDlgItem(param_1,param_4);
    GetWindowTextA(pHVar1,(LPSTR)local_48,0x40);
    fVar2 = FUN_00430830((LPCSTR)local_48,(undefined4 *)0x0);
    local_60 = (double)fVar2;
  }
  pHVar1 = GetDlgItem(param_1,param_2);
  GetWindowTextA(pHVar1,(LPSTR)local_48,0x40);
  fVar2 = FUN_00430830((LPCSTR)local_48,(undefined4 *)0x0);
  local_50 = (double)fVar2;
  if ((float10)local_58 <= fVar2) {
    if ((float10)local_60 < fVar2) {
      local_50 = local_60;
    }
  }
  else {
    local_50 = local_58;
  }
  FUN_0042fbb0(local_48,(undefined4)local_50,local_50._4_4_,0,1);
  SetWindowTextA(pHVar1,(LPCSTR)local_48);
  return;
}


