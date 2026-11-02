/* Module: vegas30.exe
   Function: FUN_0052b020
   Address: 0052b020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0052b020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_34;
  int local_30;
  undefined4 local_2c [7];
  tagRECT local_10;
  
  if (DAT_0064762c == 0) {
    return 0x8004e00f;
  }
  puVar3 = local_2c;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_2c[1] = 0;
  local_2c[0] = 0x2c;
  local_2c[2] = 1;
  GetClientRect(DAT_00647624,&local_10);
  iVar2 = FUN_0052afd0(&local_34);
  if (iVar2 < 0) {
    local_34 = 0x200;
    local_30 = 0x100;
  }
  InflateRect(&local_10,-(((local_10.right - local_10.left) - local_34) / 2),
              -(((local_10.bottom - local_10.top) - local_30) / 2));
  MapWindowPoints(DAT_00647624,(HWND)0x0,(LPPOINT)&local_10,2);
  _SfForceRectOntoDesktop_12(&local_10,0,0);
  GetFocus();
  uVar1 = FUN_0052ae10(param_1,param_2,param_3,param_4,param_5,param_6 + 300,param_8,local_2c,
                       param_9);
  return uVar1;
}


