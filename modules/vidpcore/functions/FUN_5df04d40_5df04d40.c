/* Module: vidpcore.dll
   Function: FUN_5df04d40
   Address: 5df04d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df04d40(HDC param_1,int *param_2,int param_3,COLORREF param_4,HGDIOBJ param_5,
                 HGDIOBJ param_6,HGDIOBJ param_7)

{
  int iVar1;
  LONG LVar2;
  bool bVar3;
  POINT *pPVar4;
  LONG *pLVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  POINT local_48;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  iVar6 = param_2[1];
  iVar1 = *param_2;
  iVar7 = param_2[3] - iVar6;
  local_48.y = iVar7 / 3;
  iVar9 = param_2[2] - iVar1;
  local_48.x = 0;
  local_2c = iVar7 / 2;
  local_3c = local_48.y;
  local_34 = 0;
  local_40 = iVar9 / 2;
  local_14 = iVar7 - local_48.y;
  local_c = iVar7 - local_48.y;
  local_38 = local_40;
  local_20 = local_40;
  local_18 = local_40;
  local_30 = iVar9;
  local_28 = iVar9;
  local_24 = iVar7 - iVar7 / 2;
  local_1c = iVar7;
  local_10 = 0;
  local_8 = 0;
  local_4 = local_48.y;
  bVar3 = false;
  if (param_3 == 1) {
LAB_5df04df1:
    pLVar5 = &local_48.y;
    iVar8 = 9;
    do {
      LVar2 = ((POINT *)(pLVar5 + -1))->x;
      ((POINT *)(pLVar5 + -1))->x = *pLVar5;
      *pLVar5 = LVar2;
      pLVar5 = pLVar5 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  else if (param_3 != 2) {
    if (param_3 != 3) goto LAB_5df04e3f;
    bVar3 = true;
    goto LAB_5df04df1;
  }
  iVar8 = 9;
  pPVar4 = &local_48;
  do {
    iVar8 = iVar8 + -1;
    pPVar4->x = iVar9 - pPVar4->x;
    pPVar4 = pPVar4 + 1;
  } while (iVar8 != 0);
  if (bVar3) {
    pLVar5 = &local_48.y;
    iVar9 = 9;
    do {
      *pLVar5 = iVar7 - *pLVar5;
      pLVar5 = pLVar5 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
LAB_5df04e3f:
  pLVar5 = &local_48.y;
  iVar7 = 9;
  do {
    ((POINT *)(pLVar5 + -1))->x = ((POINT *)(pLVar5 + -1))->x + iVar1;
    *pLVar5 = *pLVar5 + iVar6;
    pLVar5 = pLVar5 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar6 = GetPolyFillMode(param_1);
  SetPolyFillMode(param_1,2);
  SelectObject(param_1,param_7);
  SelectObject(param_1,param_5);
  Polygon(param_1,&local_48,9);
  SelectObject(param_1,param_6);
  Polyline(param_1,&local_48,4);
  SetPixel(param_1,local_48.x,local_48.y,param_4);
  SetPixel(param_1,local_30,local_2c,param_4);
  SetPolyFillMode(param_1,iVar6);
  return;
}


