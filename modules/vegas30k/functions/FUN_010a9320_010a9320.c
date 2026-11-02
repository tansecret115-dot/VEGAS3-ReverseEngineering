/* Module: vegas30k.dll
   Function: FUN_010a9320
   Address: 010a9320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010a9320(int param_1,HDC param_2,int *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  LONG LVar1;
  HBRUSH hbr;
  HGDIOBJ pvVar2;
  HGDIOBJ pvVar3;
  int x;
  LONG LVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  tagRECT local_20;
  tagRECT local_10;
  
  if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
    if (param_5 == 0) {
      iVar8 = -4;
      iVar6 = 0;
      local_20.left = *param_3;
      local_20.top = param_3[1];
      local_20.right = param_3[2];
      local_20.bottom = param_3[3];
      goto LAB_010a945c;
    }
    if (param_6 == 0) {
      local_20.left = *param_3;
      local_20.right = param_3[2];
      local_20.top = param_4 + 3;
      local_20.bottom = param_3[3] + -3;
    }
    else {
      local_20.left = *param_3;
      local_20.right = param_3[2];
      local_20.bottom = param_4 + -1;
      local_20.top = param_3[1] + 3;
    }
  }
  else if (param_5 == 0) {
    iVar8 = 0;
    iVar6 = -4;
    local_20.left = *param_3;
    local_20.top = param_3[1];
    local_20.right = param_3[2];
    local_20.bottom = param_3[3];
LAB_010a945c:
    InflateRect(&local_20,iVar6,iVar8);
  }
  else if (param_6 == 0) {
    local_20.top = param_3[1];
    local_20.left = param_4 + 3;
    local_20.right = param_3[2] + -3;
    local_20.bottom = param_3[3];
  }
  else {
    local_20.top = param_3[1];
    local_20.bottom = param_3[3];
    local_20.right = param_4 + -1;
    local_20.left = *param_3 + 3;
  }
  iVar7 = param_3[2] - *param_3;
  iVar5 = param_3[3] - param_3[1];
  local_10.left = *param_3;
  local_10.top = param_3[1];
  local_10.right = param_3[2];
  local_10.bottom = param_3[3];
  InflateRect(&local_10,-*(int *)(param_1 + 0x84),-*(int *)(param_1 + 0x88));
  hbr = (HBRUSH)_SfGetUIBrush_4(0xf);
  FillRect(param_2,&local_10,hbr);
  pvVar2 = (HGDIOBJ)_SfGetUIBrush_4(6);
  pvVar2 = SelectObject(param_2,pvVar2);
  iVar6 = iVar7 + -2;
  PatBlt(param_2,*param_3 + 1,param_3[1],iVar6,1,0xf00021);
  PatBlt(param_2,*param_3 + 1,param_3[3] + -1,iVar6,1,0xf00021);
  iVar8 = iVar5 + -2;
  PatBlt(param_2,*param_3,param_3[1] + 1,1,iVar8,0xf00021);
  PatBlt(param_2,param_3[2] + -1,param_3[1] + 1,1,iVar8,0xf00021);
  if (param_5 != 0) {
    if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
      iVar5 = 1;
      if (param_6 == 0) goto LAB_010a958f;
      iVar9 = param_3[3] + -1;
LAB_010a9592:
      x = *param_3;
    }
    else {
      iVar7 = 1;
      if (param_6 == 0) {
LAB_010a958f:
        iVar9 = param_3[1];
        goto LAB_010a9592;
      }
      iVar9 = param_3[1];
      x = param_3[2] + -1;
    }
    PatBlt(param_2,x,iVar9,iVar7,iVar5,0xf00021);
  }
  pvVar3 = (HGDIOBJ)_SfGetUIBrush_4(0x10);
  SelectObject(param_2,pvVar3);
  PatBlt(param_2,param_3[2] + -2,param_3[1] + 1,1,iVar8,0xf00021);
  PatBlt(param_2,*param_3 + 1,param_3[3] + -2,iVar6,1,0xf00021);
  LVar1 = local_20.top;
  LVar4 = local_20.left;
  if (param_7 != 0) {
    if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
      iVar7 = local_20.bottom - local_20.top;
      iVar5 = (local_20.right - local_20.left) / 2 + -1 + local_20.left;
      PatBlt(param_2,iVar5 + -4,local_20.top,1,iVar7,0xf00021);
      PatBlt(param_2,iVar5,LVar1 + 1,1,iVar7 + -2,0xf00021);
      PatBlt(param_2,iVar5 + 4,LVar1,1,iVar7,0xf00021);
      if (param_5 != 0) {
        iVar9 = local_10.right - local_10.left;
        iVar7 = 1;
        LVar4 = local_10.left;
        iVar5 = param_4;
        goto LAB_010a9712;
      }
    }
    else {
      iVar7 = local_20.right - local_20.left;
      iVar5 = (local_20.bottom - local_20.top) / 2 + -1 + local_20.top;
      PatBlt(param_2,local_20.left,iVar5 + -4,iVar7,1,0xf00021);
      PatBlt(param_2,LVar4 + 1,iVar5,iVar7 + -2,1,0xf00021);
      PatBlt(param_2,LVar4,iVar5 + 4,iVar7,1,0xf00021);
      if (param_5 != 0) {
        iVar7 = local_10.bottom - local_10.top;
        iVar9 = 1;
        LVar4 = param_4;
        iVar5 = local_10.top;
LAB_010a9712:
        PatBlt(param_2,LVar4,iVar5,iVar9,iVar7,0xf00021);
      }
    }
  }
  pvVar3 = (HGDIOBJ)_SfGetUIBrush_4(0x14);
  SelectObject(param_2,pvVar3);
  PatBlt(param_2,*param_3 + 1,param_3[1] + 1,1,iVar8,0xf00021);
  PatBlt(param_2,*param_3 + 1,param_3[1] + 1,iVar6,1,0xf00021);
  LVar1 = local_20.top;
  LVar4 = local_20.left;
  if (param_7 != 0) {
    if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
      iVar6 = local_20.bottom - local_20.top;
      iVar8 = (local_20.right - local_20.left) / 2 + local_20.left;
      PatBlt(param_2,iVar8 + -4,local_20.top,1,iVar6,0xf00021);
      PatBlt(param_2,iVar8,LVar1 + 1,1,iVar6 + -2,0xf00021);
      PatBlt(param_2,iVar8 + 4,LVar1,1,iVar6,0xf00021);
      if (param_5 == 0) goto LAB_010a9876;
      iVar5 = local_10.right - local_10.left;
      iVar8 = 1;
      LVar4 = param_4 + 1;
      iVar6 = local_10.left;
    }
    else {
      iVar8 = (local_20.bottom - local_20.top) / 2 + local_20.top;
      iVar6 = local_20.right - local_20.left;
      PatBlt(param_2,local_20.left,iVar8 + -4,iVar6,1,0xf00021);
      PatBlt(param_2,LVar4 + 1,iVar8,iVar6 + -2,1,0xf00021);
      PatBlt(param_2,LVar4,iVar8 + 4,iVar6,1,0xf00021);
      if (param_5 == 0) goto LAB_010a9876;
      iVar8 = local_10.bottom - local_10.top;
      iVar5 = 1;
      iVar6 = param_4 + 1;
      LVar4 = local_10.top;
    }
    PatBlt(param_2,iVar6,LVar4,iVar5,iVar8,0xf00021);
  }
LAB_010a9876:
  SelectObject(param_2,pvVar2);
  return;
}


