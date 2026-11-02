/* Module: vegas30.exe
   Function: FUN_004c2a40
   Address: 004c2a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c2a40(undefined4 param_1,HDC param_2,int *param_3,int param_4,uint param_5,int param_6,
                 RECT *param_7)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  RECT local_30;
  RECT local_20;
  tagRECT local_10;
  
  iVar3 = param_6;
  if ((*(byte *)(param_4 + 0x20) & 1) != 0) {
    param_5 = param_5 + 1;
  }
  local_30.left = *(int *)(param_4 + 0x14);
  iVar1 = *param_3;
  local_30.bottom = param_3[1] + param_6;
  iVar5 = param_3[1] * param_5;
  local_30.right = local_30.left + iVar1;
  local_30.top = param_6;
  IntersectRect(&local_10,&local_30,param_7);
  FUN_0044f090(param_2,&local_10,param_3 + 2,(*param_3 - local_30.left) + local_10.left + iVar1 * 2,
               (local_10.top - local_30.top) + iVar5);
  if ((int)param_5 < 2) {
    param_5 = (uint)DAT_00613754;
    uVar4 = param_5;
    iVar5 = *(int *)(param_4 + 0x10);
    bVar2 = (byte)(DAT_00613754 >> 8);
    if ((iVar5 < 1) || (9 < iVar5)) {
      if (iVar5 == 10) {
        param_5 = CONCAT31((uint3)bVar2,0x30);
        uVar4 = param_5;
      }
    }
    else {
      param_5 = (uint)CONCAT11(bVar2,(char)iVar5 + '0');
      uVar4 = param_5;
    }
    param_5 = uVar4;
    local_20.left = *(int *)(param_4 + 0x14);
    local_20.right = local_20.left + iVar1;
    local_20.top = iVar3;
    local_20.bottom = param_3[1] + -2 + iVar3;
    IntersectRect(&local_10,&local_20,param_7);
    SetTextColor(param_2,0xffffff);
    SetBkMode(param_2,1);
    SetTextAlign(param_2,0);
    ExtTextOutA(param_2,local_20.left + 1,local_20.top,4,&local_10,(LPCSTR)&param_5,1,(INT *)0x0);
  }
  return;
}


