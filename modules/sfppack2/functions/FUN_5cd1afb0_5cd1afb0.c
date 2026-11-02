/* Module: sfppack2.dll
   Function: FUN_5cd1afb0
   Address: 5cd1afb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd1afb0(int param_1,HDC param_2,int *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  LONG LVar1;
  HBRUSH pHVar2;
  HGDIOBJ h;
  int x;
  LONG LVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  tagRECT local_20;
  tagRECT local_10;
  
  if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
    if (param_5 == 0) {
      iVar7 = -4;
      iVar5 = 0;
      local_20.left = *param_3;
      local_20.top = param_3[1];
      local_20.right = param_3[2];
      local_20.bottom = param_3[3];
      goto LAB_5cd1b0ec;
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
    iVar7 = 0;
    iVar5 = -4;
    local_20.left = *param_3;
    local_20.top = param_3[1];
    local_20.right = param_3[2];
    local_20.bottom = param_3[3];
LAB_5cd1b0ec:
    InflateRect(&local_20,iVar5,iVar7);
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
  iVar6 = param_3[2] - *param_3;
  iVar4 = param_3[3] - param_3[1];
  local_10.left = *param_3;
  local_10.top = param_3[1];
  local_10.right = param_3[2];
  local_10.bottom = param_3[3];
  InflateRect(&local_10,-*(int *)(param_1 + 0x84),-*(int *)(param_1 + 0x88));
  pHVar2 = FUN_5cd2cb10(0xf);
  FillRect(param_2,&local_10,pHVar2);
  pHVar2 = FUN_5cd2cb10(6);
  h = SelectObject(param_2,pHVar2);
  iVar5 = iVar6 + -2;
  PatBlt(param_2,*param_3 + 1,param_3[1],iVar5,1,0xf00021);
  PatBlt(param_2,*param_3 + 1,param_3[3] + -1,iVar5,1,0xf00021);
  iVar7 = iVar4 + -2;
  PatBlt(param_2,*param_3,param_3[1] + 1,1,iVar7,0xf00021);
  PatBlt(param_2,param_3[2] + -1,param_3[1] + 1,1,iVar7,0xf00021);
  if (param_5 != 0) {
    if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
      iVar4 = 1;
      if (param_6 == 0) goto LAB_5cd1b21f;
      iVar8 = param_3[3] + -1;
LAB_5cd1b222:
      x = *param_3;
    }
    else {
      iVar6 = 1;
      if (param_6 == 0) {
LAB_5cd1b21f:
        iVar8 = param_3[1];
        goto LAB_5cd1b222;
      }
      iVar8 = param_3[1];
      x = param_3[2] + -1;
    }
    PatBlt(param_2,x,iVar8,iVar6,iVar4,0xf00021);
  }
  pHVar2 = FUN_5cd2cb10(0x10);
  SelectObject(param_2,pHVar2);
  PatBlt(param_2,param_3[2] + -2,param_3[1] + 1,1,iVar7,0xf00021);
  PatBlt(param_2,*param_3 + 1,param_3[3] + -2,iVar5,1,0xf00021);
  LVar1 = local_20.top;
  LVar3 = local_20.left;
  if (param_7 != 0) {
    if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
      iVar6 = local_20.bottom - local_20.top;
      iVar4 = (local_20.right - local_20.left) / 2 + -1 + local_20.left;
      PatBlt(param_2,iVar4 + -4,local_20.top,1,iVar6,0xf00021);
      PatBlt(param_2,iVar4,LVar1 + 1,1,iVar6 + -2,0xf00021);
      PatBlt(param_2,iVar4 + 4,LVar1,1,iVar6,0xf00021);
      if (param_5 != 0) {
        iVar8 = local_10.right - local_10.left;
        iVar6 = 1;
        LVar3 = local_10.left;
        iVar4 = param_4;
        goto LAB_5cd1b3a2;
      }
    }
    else {
      iVar6 = local_20.right - local_20.left;
      iVar4 = (local_20.bottom - local_20.top) / 2 + -1 + local_20.top;
      PatBlt(param_2,local_20.left,iVar4 + -4,iVar6,1,0xf00021);
      PatBlt(param_2,LVar3 + 1,iVar4,iVar6 + -2,1,0xf00021);
      PatBlt(param_2,LVar3,iVar4 + 4,iVar6,1,0xf00021);
      if (param_5 != 0) {
        iVar6 = local_10.bottom - local_10.top;
        iVar8 = 1;
        LVar3 = param_4;
        iVar4 = local_10.top;
LAB_5cd1b3a2:
        PatBlt(param_2,LVar3,iVar4,iVar8,iVar6,0xf00021);
      }
    }
  }
  pHVar2 = FUN_5cd2cb10(0x14);
  SelectObject(param_2,pHVar2);
  PatBlt(param_2,*param_3 + 1,param_3[1] + 1,1,iVar7,0xf00021);
  PatBlt(param_2,*param_3 + 1,param_3[1] + 1,iVar5,1,0xf00021);
  LVar1 = local_20.top;
  LVar3 = local_20.left;
  if (param_7 != 0) {
    if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
      iVar5 = local_20.bottom - local_20.top;
      iVar7 = (local_20.right - local_20.left) / 2 + local_20.left;
      PatBlt(param_2,iVar7 + -4,local_20.top,1,iVar5,0xf00021);
      PatBlt(param_2,iVar7,LVar1 + 1,1,iVar5 + -2,0xf00021);
      PatBlt(param_2,iVar7 + 4,LVar1,1,iVar5,0xf00021);
      if (param_5 == 0) goto LAB_5cd1b506;
      iVar4 = local_10.right - local_10.left;
      iVar7 = 1;
      LVar3 = param_4 + 1;
      iVar5 = local_10.left;
    }
    else {
      iVar7 = (local_20.bottom - local_20.top) / 2 + local_20.top;
      iVar5 = local_20.right - local_20.left;
      PatBlt(param_2,local_20.left,iVar7 + -4,iVar5,1,0xf00021);
      PatBlt(param_2,LVar3 + 1,iVar7,iVar5 + -2,1,0xf00021);
      PatBlt(param_2,LVar3,iVar7 + 4,iVar5,1,0xf00021);
      if (param_5 == 0) goto LAB_5cd1b506;
      iVar7 = local_10.bottom - local_10.top;
      iVar4 = 1;
      iVar5 = param_4 + 1;
      LVar3 = local_10.top;
    }
    PatBlt(param_2,iVar5,LVar3,iVar4,iVar7,0xf00021);
  }
LAB_5cd1b506:
  SelectObject(param_2,h);
  return;
}


