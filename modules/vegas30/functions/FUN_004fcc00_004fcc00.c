/* Module: vegas30.exe
   Function: FUN_004fcc00
   Address: 004fcc00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fcc00(int param_1,int param_2,LPCSTR param_3,HDC param_4)

{
  ushort uVar1;
  int *piVar2;
  DWORD DVar3;
  DWORD color;
  int iVar4;
  int *piVar5;
  RECT local_20;
  tagRECT local_10;
  
  DrawEdge(param_4,(LPRECT)(param_3 + 0x108),4,0x80f);
  if (((param_3[0x11c] & 1U) != 0) &&
     ((*(int *)(param_3 + 0x150) == 0 || (*(int *)(param_3 + 0x154) == 0)))) {
    FUN_004fb3e0(param_1,param_2,param_3,1);
  }
  piVar2 = *(int **)(param_3 + 0x150);
  if (piVar2 == (int *)0x0) {
    if (*(int *)(param_1 + 8) == 0) {
      piVar2 = *(int **)(param_1 + 0x188);
    }
    else {
      piVar2 = *(int **)(param_1 + 400);
    }
  }
  if (((*(uint *)(param_1 + 0xc) & 0x3000) != 0) &&
     (((((*(int *)(param_2 + 0x150) == *(int *)(param_3 + 0x104) && (*(int *)(param_1 + 0x1c0) < 0))
        && ((param_3[0x11c] & 1U) != 0)) || (*(int *)(param_3 + 0x104) == *(int *)(param_1 + 0x1c0))
       ) && (*(int **)(param_1 + 0x1a8) != (int *)0x0)))) {
    piVar2 = *(int **)(param_1 + 0x1a8);
  }
  if (piVar2 == (int *)0x0) {
    SetBkColor(param_4,0x408080);
    local_20.right = *(LONG *)(param_3 + 0x138);
    local_20.left = *(LONG *)(param_3 + 0x130);
    local_20.top = *(LONG *)(param_3 + 0x134);
    local_20.bottom = *(LONG *)(param_3 + 0x13c);
    ExtTextOutA(param_4,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
    goto LAB_004fcd9d;
  }
  if (*(int *)(param_1 + 8) == 1) {
    FUN_004fc7e0(param_1,param_4,param_2,param_3);
    goto LAB_004fcd9d;
  }
  if (piVar2[4] == 0) {
    if (((piVar2[8] != 0) || (uVar1 = *(ushort *)((int)piVar2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_004fcd08;
    iVar4 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fcd0b:
    piVar5 = (int *)(*piVar2 + iVar4 * 4 + (int)piVar2);
  }
  else {
    if (piVar2[4] != 3) {
LAB_004fcd08:
      iVar4 = piVar2[8];
      goto LAB_004fcd0b;
    }
    piVar5 = piVar2 + 0xd;
  }
  DrawDibDraw(DAT_0064b4a4,param_4,*(int *)(param_3 + 0x130),*(int *)(param_3 + 0x134),
              *(int *)(param_3 + 0x138) - *(int *)(param_3 + 0x130),
              *(int *)(param_3 + 0x13c) - *(int *)(param_3 + 0x134),piVar2,piVar5,0,0,piVar2[1],
              piVar2[2],0);
LAB_004fcd9d:
  local_10.left = *(LONG *)(param_3 + 0x120);
  local_10.top = *(LONG *)(param_3 + 0x124);
  local_10.right = *(LONG *)(param_3 + 0x128);
  local_10.bottom = *(LONG *)(param_3 + 300);
  DVar3 = GetSysColor(0xf);
  color = GetSysColor(0x12);
  iVar4 = lstrlenA(param_3);
  SetTextColor(param_4,color);
  SetBkColor(param_4,DVar3);
  DrawTextA(param_4,param_3,iVar4,&local_10,0x8011);
  if ((param_3[0x11c] & 1U) != 0) {
    DVar3 = GetSysColor((-(uint)((*(uint *)(param_1 + 0xc) & 2) != 0) & 0xfffffffd) + 0x10);
    local_20.left = *(int *)(param_3 + 0x120) + -2;
    local_20.top = *(int *)(param_3 + 0x124) + -2;
    local_20.right = *(int *)(param_3 + 0x128) + 2;
    local_20.bottom = *(int *)(param_3 + 300) + 2;
    FUN_00468920(param_4,&local_20,2,DVar3);
  }
  return;
}


