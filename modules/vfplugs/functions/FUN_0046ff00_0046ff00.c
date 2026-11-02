/* Module: vfplugs.dll
   Function: FUN_0046ff00
   Address: 0046ff00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046ff00(HDC param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  HBRUSH h;
  HBRUSH ho;
  HGDIOBJ h_00;
  int iVar5;
  HBRUSH pHVar6;
  int iVar7;
  int iVar8;
  tagRECT local_20;
  RECT local_10;
  
  local_20.left = *param_2;
  local_20.top = param_2[1];
  local_20.right = param_2[2];
  local_20.bottom = param_2[3];
  InflateRect(&local_20,-1,-1);
  SetBkColor(param_1,0);
  if ((((*param_2 <= local_20.left) && (param_2[1] <= local_20.top)) &&
      (local_20.right <= param_2[2])) && (local_20.bottom <= param_2[3])) {
    local_10.bottom = local_20.top;
    local_10.left = *param_2;
    local_10.top = param_2[1];
    local_10.right = param_2[2];
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    FUN_00471130(param_1,*param_2,local_20.bottom,param_2[2] - *param_2,param_2[3] - local_20.bottom
                );
    FUN_00471130(param_1,*param_2,local_20.top,local_20.left - *param_2,
                 local_20.bottom - local_20.top);
    FUN_00471130(param_1,local_20.right,local_20.top,param_2[2] - local_20.right,
                 local_20.bottom - local_20.top);
  }
  uVar2 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  h = CreateSolidBrush((uint)CONCAT11(uVar2,uVar3) << 8 | uVar4 & 0xff);
  uVar2 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  ho = CreateSolidBrush((uint)CONCAT11(uVar2,uVar3) << 8 | uVar4 & 0xff);
  h_00 = SelectObject(param_1,h);
  iVar8 = 0;
  if (local_20.bottom != local_20.top && -1 < local_20.bottom - local_20.top) {
    do {
      iVar1 = iVar8 + 1;
      uVar4 = ~(iVar1 / 5) & 1;
      pHVar6 = ho;
      if (uVar4 == 0) {
        pHVar6 = h;
      }
      SelectObject(param_1,pHVar6);
      iVar7 = 0;
      iVar5 = local_20.right - local_20.left;
      if (0 < iVar5) {
        do {
          iVar5 = iVar5 - iVar7;
          if (5 < iVar5) {
            iVar5 = 5;
          }
          PatBlt(param_1,local_20.left + iVar7,local_20.top + iVar8,iVar5,1,0xf00021);
          uVar4 = (uint)(uVar4 == 0);
          pHVar6 = ho;
          if (uVar4 == 0) {
            pHVar6 = h;
          }
          SelectObject(param_1,pHVar6);
          iVar7 = iVar7 + 5;
          iVar5 = local_20.right - local_20.left;
        } while (iVar7 < iVar5);
      }
      iVar8 = iVar1;
    } while (iVar1 < local_20.bottom - local_20.top);
  }
  SelectObject(param_1,h_00);
  DeleteObject(h);
  DeleteObject(ho);
  return;
}


