/* Module: vegas30.exe
   Function: FUN_00470f70
   Address: 00470f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00470f70(HDC param_1,int *param_2,undefined4 param_3,uint param_4,int param_5,int param_6,
                 COLORREF param_7,undefined4 param_8,undefined4 param_9)

{
  HPEN h;
  HGDIOBJ pvVar1;
  int iVar2;
  COLORREF CVar3;
  int nSavedDC;
  int iVar4;
  int iVar5;
  int iVar6;
  RECT local_10;
  
  iVar2 = param_2[3];
  iVar4 = param_2[1];
  h = CreatePen(0,0,param_7);
  pvVar1 = SelectObject(param_1,h);
  if (param_4 < 2) {
    iVar6 = param_2[1];
    iVar4 = (iVar2 - iVar4) / 2;
    iVar2 = param_6 / iVar4;
    param_6 = 1;
    if (0 < iVar2) {
      param_6 = iVar2;
    }
    CVar3 = SetBkColor(param_1,0x808080);
    local_10.right = param_2[2];
    iVar4 = iVar4 + iVar6;
    local_10.left = *param_2;
    local_10.bottom = iVar4 + 1;
    local_10.top = iVar4;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    SetBkColor(param_1,CVar3);
    iVar2 = SaveDC(param_1);
    IntersectClipRect(param_1,*param_2,param_2[1],param_2[2],param_2[3]);
    FUN_00471200(param_1,param_5,param_4,param_9,param_3,iVar4,param_6,param_8,0,param_9);
    RestoreDC(param_1,iVar2);
  }
  else {
    iVar6 = param_2[1];
    param_7 = 1;
    iVar2 = ((iVar2 - iVar4) + -1) / 2;
    iVar4 = iVar2 / 2;
    if (0 < param_6 / iVar4) {
      param_7 = param_6 / iVar4;
    }
    CVar3 = SetBkColor(param_1,0x808080);
    local_10.right = param_2[2];
    local_10.left = *param_2;
    iVar5 = iVar4 + iVar6;
    local_10.bottom = iVar5 + 1;
    local_10.top = iVar5;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.left = *param_2;
    local_10.right = param_2[2];
    local_10.top = iVar5 + 1 + iVar2;
    local_10.bottom = local_10.top + 1;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    SetBkColor(param_1,CVar3);
    PatBlt(param_1,*param_2,iVar2 + iVar6,param_2[2] - *param_2,1,0x42);
    param_6 = param_5;
    param_5 = 2;
    do {
      nSavedDC = SaveDC(param_1);
      IntersectClipRect(param_1,*param_2,iVar6,param_2[2],(iVar2 - iVar4) + iVar5);
      FUN_00471200(param_1,param_6,param_4,param_9,param_3,iVar5,param_7,param_8,0,param_9);
      RestoreDC(param_1,nSavedDC);
      iVar6 = iVar6 + iVar2 + 1;
      iVar5 = iVar5 + iVar2 + 1;
      param_6 = param_6 + 4;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  pvVar1 = SelectObject(param_1,pvVar1);
  DeleteObject(pvVar1);
  return;
}


