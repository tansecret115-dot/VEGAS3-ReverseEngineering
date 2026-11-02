/* Module: vegas30.exe
   Function: FUN_004fce80
   Address: 004fce80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fce80(undefined4 *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  HDC hDC;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  bVar4 = false;
  piVar5 = (int *)param_1[0x5e];
  if (piVar5 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar5;
  }
  iVar6 = param_1[0x60];
  if ((iVar6 < 0) || (iVar8 <= iVar6)) goto LAB_004fcfd8;
  uVar2 = *(undefined4 *)(piVar5[2] + iVar6 * 4);
  piVar5 = (int *)param_1[0x5f];
  if (piVar5 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar5;
  }
  iVar6 = 0;
  if (iVar8 < 1) goto LAB_004fcfd8;
  piVar5 = (int *)piVar5[2];
  while (iVar3 = *piVar5, *(int *)(iVar3 + 0x150) != 0) {
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 1;
    if (iVar8 <= iVar6) {
      KillTimer((HWND)*param_1,0x62);
      return;
    }
  }
  FUN_004fb3e0(param_1,uVar2,iVar3,1);
  hDC = GetDC((HWND)*param_1);
  if (param_1[2] == 1) {
    FUN_004fc7e0(param_1,hDC,uVar2,iVar3);
    bVar4 = true;
  }
  else {
    piVar5 = *(int **)(iVar3 + 0x150);
    if (piVar5 != (int *)0x0) {
      if (piVar5[4] == 0) {
        if (((piVar5[8] != 0) || (uVar1 = *(ushort *)((int)piVar5 + 0xe), uVar1 == 0)) ||
           (8 < uVar1)) goto LAB_004fcf73;
        iVar8 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fcf76:
        piVar7 = (int *)(*piVar5 + iVar8 * 4 + (int)piVar5);
      }
      else {
        if (piVar5[4] != 3) {
LAB_004fcf73:
          iVar8 = piVar5[8];
          goto LAB_004fcf76;
        }
        piVar7 = piVar5 + 0xd;
      }
      DrawDibDraw(DAT_0064b4a4,hDC,*(int *)(iVar3 + 0x130),*(int *)(iVar3 + 0x134),
                  *(int *)(iVar3 + 0x138) - *(int *)(iVar3 + 0x130),
                  *(int *)(iVar3 + 0x13c) - *(int *)(iVar3 + 0x134),piVar5,piVar7,0,0,piVar5[1],
                  piVar5[2],0);
      bVar4 = true;
    }
  }
  ReleaseDC((HWND)*param_1,hDC);
  if (bVar4) {
    return;
  }
LAB_004fcfd8:
  KillTimer((HWND)*param_1,0x62);
  return;
}


