/* Module: vegas30.exe
   Function: FUN_004fc7e0
   Address: 004fc7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fc7e0(int param_1,HDC param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined8 local_38;
  int local_20;
  RECT local_10;
  
  iVar5 = param_4;
  iVar11 = 0;
  piVar10 = (int *)(param_4 + 0x130);
  param_4 = 0;
  iVar12 = *piVar10;
  iVar6 = *(int *)(iVar5 + 0x138);
  local_20 = *piVar10;
  iVar2 = *(int *)(iVar5 + 0x134);
  iVar8 = *(int *)(iVar5 + 0x138);
  iVar3 = *(int *)(iVar5 + 0x13c);
  if (((*(uint *)(param_1 + 0xc) & 0x3000) == 0) ||
     ((((*(int *)(param_3 + 0x150) != *(int *)(iVar5 + 0x104) || (-1 < *(int *)(param_1 + 0x1c0)))
       || ((*(byte *)(iVar5 + 0x11c) & 1) == 0)) &&
      (*(int *)(iVar5 + 0x104) != *(int *)(param_1 + 0x1c0))))) {
    iVar8 = (iVar12 + iVar6) / 2;
    iVar11 = ((*(int *)(iVar5 + 0x138) - iVar8) - *piVar10) + local_20;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x1b0);
    local_38 = 1.0;
    if (*(int *)(param_1 + 0x1b4) + iVar4 < *(int *)(param_1 + 0x1b8)) {
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      *(uint *)(param_1 + 0x1bc) = (uint)(*(int *)(param_1 + 0x1bc) == 0);
    }
    if (iVar4 < *(int *)(param_1 + 0x1b8)) {
      if (*(int *)(param_1 + 0x1bc) != 0) {
        iVar8 = local_20;
      }
    }
    else {
      local_38 = (double)*(int *)(param_1 + 0x1b8) / (double)iVar4;
      if (*(int *)(param_1 + 0x1bc) == 0) {
        iVar8 = ftol();
        iVar11 = ((*(int *)(iVar5 + 0x138) - iVar6) - *piVar10) + iVar12 + iVar8;
        iVar8 = iVar12 + iVar8;
      }
      else {
        local_20 = ftol();
        local_20 = iVar12 + local_20;
        param_4 = ((*(int *)(iVar5 + 0x138) - iVar8) - *piVar10) + local_20;
      }
    }
    local_10.left = *(LONG *)(iVar5 + 0x120);
    local_10.top = *(int *)(iVar5 + 0x124) + -8;
    local_10.bottom = *(int *)(iVar5 + 0x124) + -4;
    local_10.right = *(LONG *)(iVar5 + 0x128);
    FUN_004fc6e0(param_2,&local_10,(undefined4)local_38,local_38._4_4_,
                 *(int *)(param_1 + 0x1bc) == 0);
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
  }
  piVar7 = *(int **)(iVar5 + 0x150);
  if (piVar7 == (int *)0x0) {
    if (*(int *)(param_1 + 400) == 0) {
      SetBkColor(param_2,0x408080);
      local_10.top = *(LONG *)(iVar5 + 0x134);
      local_10.left = *piVar10;
      local_10.right = *(LONG *)(iVar5 + 0x138);
      local_10.bottom = *(LONG *)(iVar5 + 0x13c);
      ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      return;
    }
  }
  else {
    piVar9 = *(int **)(param_1 + 400);
    if (piVar9 != (int *)0x0) {
      if (piVar9[4] == 0) {
        if (((piVar9[8] != 0) || (uVar1 = *(ushort *)((int)piVar9 + 0xe), uVar1 == 0)) ||
           (8 < uVar1)) goto LAB_004fcaa7;
        iVar12 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fcaaa:
        piVar10 = (int *)(*piVar9 + iVar12 * 4 + (int)piVar9);
      }
      else {
        if (piVar9[4] != 3) {
LAB_004fcaa7:
          iVar12 = piVar9[8];
          goto LAB_004fcaaa;
        }
        piVar10 = piVar9 + 0xd;
      }
      iVar8 = iVar8 - local_20;
      iVar12 = 0;
      DrawDibDraw(DAT_0064b4a4,param_2,local_20,iVar2,iVar8,iVar3 - iVar2,piVar9,piVar10,param_4,0,
                  iVar8,piVar9[2],0);
      piVar7 = *(int **)(iVar5 + 0x150);
      if (piVar7[4] == 0) {
        if (((piVar7[8] != 0) || (uVar1 = *(ushort *)((int)piVar7 + 0xe), uVar1 == 0)) ||
           (8 < uVar1)) goto LAB_004fcb25;
        iVar6 = 1 << ((byte)uVar1 & 0x1f);
      }
      else {
        if (piVar7[4] == 3) {
          piVar9 = piVar7 + 0xd;
          goto LAB_004fcb2d;
        }
LAB_004fcb25:
        iVar6 = piVar7[8];
      }
      piVar9 = (int *)((int)piVar7 + *piVar7 + iVar6 * 4);
LAB_004fcb2d:
      DrawDibDraw(DAT_0064b4a4,param_2,piVar10,param_4,iVar12 - (int)piVar10,iVar8 - param_4,piVar7,
                  piVar9,iVar11,0,iVar12 - (int)piVar10,piVar7[2],0);
      return;
    }
  }
  if (piVar7 == (int *)0x0) {
    piVar7 = *(int **)(param_1 + 400);
  }
  if (piVar7[4] == 0) {
    if (((piVar7[8] != 0) || (uVar1 = *(ushort *)((int)piVar7 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_004fcba5;
    iVar12 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (piVar7[4] == 3) {
      piVar9 = piVar7 + 0xd;
      goto LAB_004fcbaf;
    }
LAB_004fcba5:
    iVar12 = piVar7[8];
  }
  piVar9 = (int *)(*piVar7 + iVar12 * 4 + (int)piVar7);
LAB_004fcbaf:
  DrawDibDraw(DAT_0064b4a4,param_2,*piVar10,*(int *)(iVar5 + 0x134),
              *(int *)(iVar5 + 0x138) - *piVar10,*(int *)(iVar5 + 0x13c) - *(int *)(iVar5 + 0x134),
              piVar7,piVar9,0,0,piVar7[1],piVar7[2],0);
  return;
}


