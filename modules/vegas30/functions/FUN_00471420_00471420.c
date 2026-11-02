/* Module: vegas30.exe
   Function: FUN_00471420
   Address: 00471420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00471420(HDC param_1,int *param_2,uint param_3,int param_4,int param_5,COLORREF param_6)

{
  int iVar1;
  int *piVar2;
  COLORREF color;
  int iVar3;
  COLORREF CVar4;
  int iVar5;
  int w;
  int iVar6;
  int local_18;
  RECT local_10;
  
  iVar1 = param_4;
  piVar2 = param_2;
  w = param_2[2] - *param_2;
  iVar6 = param_2[3] - param_2[1];
  color = SetBkColor(param_1,param_6);
  if (param_3 < 2) {
    iVar1 = param_2[1];
    iVar3 = param_5 / (iVar6 / 2);
    param_5 = 1;
    if (0 < iVar3) {
      param_5 = iVar3;
    }
    CVar4 = SetBkColor(param_1,0x808080);
    local_10.left = *param_2;
    local_10.right = local_10.left + w;
    local_10.top = iVar1 + iVar6 / 2;
    local_10.bottom = local_10.top + 1;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    SetBkColor(param_1,CVar4);
    FUN_00471650(param_1,param_4,param_3,iVar1,iVar6,param_5,*param_2,0,w);
  }
  else {
    iVar3 = param_2[1];
    local_18 = 1;
    iVar6 = (iVar6 + -1) / 2;
    param_5 = param_5 / (iVar6 / 2);
    if (0 < param_5) {
      local_18 = param_5;
    }
    CVar4 = SetBkColor(param_1,0x808080);
    iVar5 = iVar3 + iVar6 / 2;
    local_10.left = *param_2;
    local_10.right = local_10.left + w;
    local_10.bottom = iVar5 + 1;
    local_10.top = iVar5;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.left = *param_2;
    local_10.right = local_10.left + w;
    local_10.top = iVar5 + 1 + iVar6;
    local_10.bottom = local_10.top + 1;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    SetBkColor(param_1,CVar4);
    PatBlt(param_1,*param_2,iVar3 + iVar6,w,1,0x42);
    param_4 = 2;
    param_5 = iVar1;
    param_2 = (int *)iVar3;
    do {
      FUN_00471650(param_1,param_5,param_3,param_2,iVar6,local_18,*piVar2,0,w);
      param_2 = (int *)((int)param_2 + iVar6 + 1);
      param_5 = param_5 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  SetBkColor(param_1,color);
  return;
}


