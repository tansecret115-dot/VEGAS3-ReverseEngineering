/* Module: sftrans1.dll
   Function: FUN_00491330
   Address: 00491330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00491330(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  HWND hWnd;
  uint uVar1;
  LRESULT LVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar4 = param_4 & 0xffff;
  switch(param_3) {
  case 1:
    FUN_004911f0();
  case 0:
  case 4:
  case 5:
    hWnd = GetDlgItem((HWND)param_1[0xc],0x6af);
    if (hWnd != (HWND)0x0) {
      uVar1 = param_1[0xd3];
      if ((int)uVar4 <= param_1[0xd3]) {
        uVar1 = uVar4;
      }
      param_1[0xd3] = uVar1;
      iVar3 = (uVar4 - 1) + (param_4 >> 0x10);
      if (iVar3 < param_1[0xd4]) {
        iVar3 = param_1[0xd4];
      }
      param_1[0xd4] = iVar3;
      local_c = 0;
      local_14 = 0xffffffff;
      local_10 = 0xffffffff;
      local_8 = 0;
      local_4 = 0;
      LVar2 = SendMessageA(hWnd,0xb16,0,(LPARAM)&local_14);
      uVar4 = LVar2 + local_c;
      if ((uVar4 != 0) &&
         (((uVar1 = param_1[0xcc], uVar1 == 0 || (uVar1 < uVar4)) ||
          ((uVar1 != 100 && (uVar4 < uVar1 - 100)))))) {
        iVar3 = FUN_00491270(param_1 + 0xce,uVar4,local_c);
        param_1[0xcc] = iVar3;
      }
      LVar2 = SendMessageA(hWnd,0xb12,0,0);
      local_8 = param_1[0xce];
      param_1[0xcd] = LVar2 + -1;
      local_4 = param_1[0xcc];
      LVar2 = SendMessageA(hWnd,0xb17,0,(LPARAM)&local_14);
      if (LVar2 != 0) {
        if (param_1[0xd1] != 0) {
          param_1[0xd2] = 1;
          return 0;
        }
        (**(code **)(*param_1 + 0x2c))(param_1);
      }
    }
    return 0;
  case 2:
    return 0;
  case 3:
    FUN_004911f0();
    return 0;
  case 6:
    param_1[0xd1] = 1;
    break;
  case 7:
    param_1[0xd1] = 0;
    if (param_1[0xd2] != 0) {
      (**(code **)(*param_1 + 0x2c))(param_1);
      param_1[0xd2] = 0;
      return 1;
    }
  }
  return 1;
}


