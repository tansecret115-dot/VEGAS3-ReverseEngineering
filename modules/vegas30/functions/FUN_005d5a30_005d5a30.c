/* Module: vegas30.exe
   Function: FUN_005d5a30
   Address: 005d5a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d5a30(HDC param_1,int *param_2,int *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  RECT *lprect;
  RECT local_20;
  RECT local_10;
  
  local_20.left = *param_3;
  local_20.top = param_3[1];
  local_20.right = param_3[2];
  local_20.bottom = param_3[3];
  uVar1 = ftol();
  uVar2 = ftol();
  uVar5 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  uVar6 = ftol();
  iVar7 = param_2[2] - *param_2;
  iVar11 = param_2[3] - param_2[1];
  iVar8 = iVar7;
  if (iVar11 <= iVar7) {
    iVar8 = iVar11;
  }
  iVar10 = 0;
  if (0 < iVar11) {
    do {
      iVar9 = 0;
      if (0 < iVar7) {
        do {
          if ((iVar9 / (iVar8 / 2) & 1U) == (iVar10 / (iVar8 / 2) & 1U)) {
            SetBkColor(param_1,(uint)CONCAT11(uVar1,uVar2) << 8 | uVar5 & 0xff);
            local_20.top = iVar10 + param_2[1];
            local_20.left = *param_2 + iVar9;
            local_20.right = local_20.left + 1;
            local_20.bottom = local_20.top + 1;
            lprect = &local_20;
          }
          else {
            SetBkColor(param_1,(uint)CONCAT11(uVar3,uVar4) << 8 | uVar6 & 0xff);
            local_10.top = iVar10 + param_2[1];
            local_10.left = *param_2 + iVar9;
            local_10.right = local_10.left + 1;
            local_10.bottom = local_10.top + 1;
            lprect = &local_10;
          }
          ExtTextOutA(param_1,0,0,2,lprect,(LPCSTR)0x0,0,(INT *)0x0);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar7);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
  }
  return;
}


