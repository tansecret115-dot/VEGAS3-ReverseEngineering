/* Module: vegas30.exe
   Function: FUN_004c2b90
   Address: 004c2b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c2b90(undefined4 param_1,HDC param_2,int *param_3,int param_4,uint param_5,int param_6,
                 int param_7,RECT *param_8)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  RECT local_30;
  RECT local_20;
  tagRECT local_10;
  
  iVar4 = param_7;
  iVar3 = param_6;
  iVar1 = *param_3;
  iVar6 = param_3[1] * param_5;
  local_30.bottom = param_3[1] + param_6;
  local_30.right = param_7 + 1;
  local_30.left = (param_7 - iVar1) + 1;
  local_30.top = param_6;
  IntersectRect(&local_10,&local_30,param_8);
  FUN_0044f090(param_2,&local_10,param_3 + 2,(local_10.left - local_30.left) + iVar1 * 2,
               (local_10.top - local_30.top) + iVar6);
  if ((int)param_5 < 2) {
    param_5 = (uint)DAT_00613754;
    uVar5 = param_5;
    iVar1 = *(int *)(param_4 + 0x10);
    bVar2 = (byte)(DAT_00613754 >> 8);
    if ((iVar1 < 1) || (9 < iVar1)) {
      if (iVar1 == 10) {
        param_5 = CONCAT31((uint3)bVar2,0x30);
        uVar5 = param_5;
      }
    }
    else {
      param_5 = (uint)CONCAT11(bVar2,(char)iVar1 + '0');
      uVar5 = param_5;
    }
    param_5 = uVar5;
    local_20.top = iVar3;
    local_20.bottom = param_3[1] + -2 + iVar3;
    local_20.left = (iVar4 - *param_3) + 1;
    local_20.right = iVar4;
    IntersectRect(&local_10,&local_20,param_8);
    SetTextColor(param_2,0xffffff);
    SetBkMode(param_2,1);
    SetTextAlign(param_2,0);
    ExtTextOutA(param_2,local_20.left + 1,local_20.top,4,&local_10,(LPCSTR)&param_5,1,(INT *)0x0);
  }
  return;
}


