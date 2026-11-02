/* Module: sfppack1.dll
   Function: FUN_5cde6750
   Address: 5cde6750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cde6750(uint *param_1,HDC param_2,int *param_3,int *param_4,HGDIOBJ param_5)

{
  uint uVar1;
  uint uVar2;
  HDC hdc;
  int iVar3;
  HBRUSH pHVar4;
  HGDIOBJ h;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int y;
  int w;
  int h_00;
  int local_8;
  int local_4;
  
  hdc = param_2;
  if ((param_1[3] & 0x20) != 0) {
    return 0;
  }
  if ((param_1[3] & 8) == 0) {
    iVar7 = *param_3;
    iVar5 = param_3[1] + -5;
    if (param_3[1] + -5 <= param_4[1]) {
      iVar5 = param_4[1];
    }
    local_8 = param_3[2];
    local_4 = param_4[3];
    if (param_3[3] + 5 < param_4[3]) {
      local_4 = param_3[3] + 5;
    }
  }
  else {
    iVar5 = param_3[1];
    local_4 = param_3[3];
    iVar7 = *param_3 + -5;
    if (*param_3 + -5 <= *param_4) {
      iVar7 = *param_4;
    }
    local_8 = param_4[2];
    if (param_3[2] + 5 < param_4[2]) {
      local_8 = param_3[2] + 5;
    }
  }
  iVar3 = local_8 - iVar7;
  uVar1 = param_1[0x1f];
  uVar2 = param_1[0x1e];
  iVar8 = local_4 - iVar5;
  bVar9 = (*param_1 & 0xf00) != 0x100;
  pHVar4 = FUN_5cdf3ca0(6);
  h = SelectObject(param_2,pHVar4);
  if ((param_1[3] & 8) == 0) {
    PatBlt(param_2,iVar7 + -1 + uVar2,iVar5,1,iVar8,0xf00021);
    iVar6 = (local_8 + uVar2 * -2) - iVar7;
    param_2 = (HDC)(iVar6 / 10);
    iVar6 = iVar7 + uVar2 + -6 + (iVar6 % 10) / 2;
    if (0 < (int)param_2) {
      do {
        iVar6 = iVar6 + 10;
        PatBlt(hdc,iVar6,iVar5 + 1,1,iVar8 + -2,0xf00021);
        param_2 = (HDC)((int)&param_2[-1].unused + 3);
      } while (param_2 != (HDC)0x0);
    }
    w = 1;
    iVar6 = (local_8 - uVar2) + -1;
    y = iVar5;
    h_00 = iVar8;
  }
  else {
    PatBlt(param_2,iVar7,(uVar1 - 1) + iVar5,iVar3,1,0xf00021);
    iVar6 = (local_4 + uVar1 * -2) - iVar5;
    param_2 = (HDC)(iVar6 / 10);
    iVar6 = uVar1 + iVar5 + -6 + (iVar6 % 10) / 2;
    if (0 < (int)param_2) {
      do {
        iVar6 = iVar6 + 10;
        PatBlt(hdc,iVar7 + 1,iVar6,iVar3 + -2,1,0xf00021);
        param_2 = (HDC)((int)&param_2[-1].unused + 3);
      } while (param_2 != (HDC)0x0);
    }
    iVar6 = iVar7;
    y = (local_4 - uVar1) + -1;
    w = iVar3;
    h_00 = 1;
  }
  PatBlt(hdc,iVar6,y,w,h_00,0xf00021);
  pHVar4 = FUN_5cdf3ca0(0x14);
  SelectObject(hdc,pHVar4);
  if ((param_1[3] & 8) == 0) {
    PatBlt(hdc,iVar7 + uVar2,iVar5,1,iVar8,0xf00021);
    iVar6 = (local_8 + uVar2 * -2) - iVar7;
    iVar3 = iVar6 / 10;
    iVar7 = iVar7 + uVar2 + -5 + (iVar6 % 10) / 2;
    if (0 < iVar3) {
      do {
        iVar7 = iVar7 + 10;
        PatBlt(hdc,iVar7,iVar5 + 1,1,iVar8 + -2,0xf00021);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = 1;
    iVar7 = local_8 - uVar1;
  }
  else {
    PatBlt(hdc,iVar7,uVar1 + iVar5,iVar3,1,0xf00021);
    iVar6 = (local_4 + uVar1 * -2) - iVar5;
    iVar8 = iVar6 / 10;
    iVar5 = uVar1 + iVar5 + -5 + (iVar6 % 10) / 2;
    if (0 < iVar8) {
      do {
        iVar5 = iVar5 + 10;
        PatBlt(hdc,iVar7 + 1,iVar5,iVar3 + -2,1,0xf00021);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = 1;
    iVar5 = local_4 - uVar1;
  }
  PatBlt(hdc,iVar7,iVar5,iVar3,iVar8,0xf00021);
  SelectObject(hdc,param_5);
  if ((param_1[3] & 8) == 0) {
    PatBlt(hdc,*param_3,param_3[1] + -1,param_3[2] - *param_3,1,0xf00021);
    if (bVar9) goto LAB_5cde6b9f;
    iVar7 = *param_3;
    iVar8 = param_3[2] - iVar7;
    iVar3 = 1;
    iVar5 = param_3[3] + 1;
  }
  else {
    PatBlt(hdc,*param_3 + -1,param_3[1],1,param_3[3] - param_3[1],0xf00021);
    if (bVar9) goto LAB_5cde6b9f;
    iVar5 = param_3[1];
    iVar3 = param_3[3] - iVar5;
    iVar8 = 1;
    iVar7 = param_3[2] + 1;
  }
  PatBlt(hdc,iVar7,iVar5,iVar8,iVar3,0xf00021);
LAB_5cde6b9f:
  SelectObject(hdc,h);
  return 1;
}


