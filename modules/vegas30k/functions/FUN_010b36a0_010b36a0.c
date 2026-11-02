/* Module: vegas30k.dll
   Function: FUN_010b36a0
   Address: 010b36a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010b36a0(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  uint uVar1;
  HIMAGELIST p_Var2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  switch(param_2) {
  case 0x600:
    if (param_3 >> 0x10 == 0) {
      FUN_010aed20(param_1,param_4,param_1 + 0xc);
      return 0;
    }
    return *(undefined4 *)(param_1 + 8 + (param_3 >> 0x10) * 4);
  case 0x601:
    *param_4 = *(int *)(param_1 + 0x140);
    param_4[1] = *(int *)(param_1 + 0x144);
    param_4[2] = *(int *)(param_1 + 0x148);
    param_4[3] = *(int *)(param_1 + 0x14c);
    param_4[4] = *(int *)(param_1 + 0x150);
    param_4[7] = *(int *)(param_1 + 400);
    param_4[5] = *(int *)(param_1 + 0x9c);
    param_4[6] = *(int *)(param_1 + 0x98);
    return 0;
  case 0x602:
    *(int *)(param_1 + 0x140) = *param_4;
    *(int *)(param_1 + 0x144) = param_4[1];
    *(int *)(param_1 + 0x148) = param_4[2];
    *(int *)(param_1 + 0x14c) = param_4[3];
    *(int *)(param_1 + 0x150) = param_4[4];
    *(int *)(param_1 + 0x9c) = param_4[5];
    *(int *)(param_1 + 400) = param_4[7];
    uVar4 = param_4[6];
    *(uint *)(param_1 + 0x98) = uVar4;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
    uVar1 = 0;
    do {
      if ((uVar4 & 1 << ((byte)uVar1 & 0x1f)) != 0) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
    if (param_3 != 0) {
      iVar3 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c);
      iVar5 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58);
      goto LAB_010b3ad2;
    }
    FUN_010af800(param_1,0);
    goto LAB_010b3ada;
  case 0x603:
    return *(undefined4 *)(param_1 + 0x9c);
  case 0x604:
    *(int **)(param_1 + 0x9c) = param_4;
    FUN_010af800(param_1,1);
    return 0;
  case 0x605:
    return *(undefined4 *)(param_1 + 0x98);
  case 0x606:
    uVar4 = 0;
    *(int **)(param_1 + 0x98) = param_4;
    *(undefined4 *)(param_1 + 8) = 0;
    do {
      if (((uint)param_4 & 1 << ((byte)uVar4 & 0x1f)) != 0) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
    *(undefined4 *)(param_1 + 0x18c) = 0;
    break;
  case 0x607:
    FUN_010b0b30(param_1,param_4,param_3);
    return 0;
  case 0x608:
    return *(undefined4 *)(param_1 + 400);
  case 0x609:
    *(int **)(param_1 + 400) = param_4;
    FUN_010af800(param_1,1);
    return 0;
  case 0x60a:
    *param_4 = *(int *)(param_1 + 0x140);
    param_4[1] = *(int *)(param_1 + 0x144);
    param_4[2] = *(int *)(param_1 + 0x148);
    param_4[3] = *(int *)(param_1 + 0x14c);
    param_4[4] = *(int *)(param_1 + 0x150);
    iVar3 = *(int *)(param_1 + 0x150) * 4;
    param_4[5] = ~(~*(uint *)(*(int *)(param_1 + 0xa4) + iVar3) & *(uint *)(param_1 + 0x9c) |
                  *(uint *)(*(int *)(param_1 + 0xa0) + iVar3) ^ *(uint *)(param_1 + 400)) &
                 *(uint *)(param_1 + 0x98);
    return 0;
  case 0x60b:
    *(int *)(param_1 + 0x140) = *param_4;
    *(int *)(param_1 + 0x144) = param_4[1];
    *(int *)(param_1 + 0x148) = param_4[2];
    *(int *)(param_1 + 0x14c) = param_4[3];
    iVar3 = param_4[4];
    *(int *)(param_1 + 0x150) = iVar3;
    if (iVar3 == 0) {
      uVar4 = param_4[5];
      *(undefined4 *)(param_1 + 400) = 0;
      *(uint *)(param_1 + 0x9c) = ~uVar4 & *(uint *)(param_1 + 0x98);
    }
    else {
      *(uint *)(param_1 + 400) =
           (~(~*(uint *)(*(int *)(param_1 + 0xa4) + iVar3 * 4) & *(uint *)(param_1 + 0x9c) |
             *(uint *)(*(int *)(param_1 + 0xa0) + iVar3 * 4)) ^ param_4[5]) &
           *(uint *)(param_1 + 0x98);
    }
    FUN_010af800(param_1,0);
    InvalidateRect(*(HWND *)(param_1 + 0x3c),(RECT *)(param_1 + 0x48),0);
    UpdateWindow(*(HWND *)(param_1 + 0x3c));
    return 0;
  case 0x60c:
    if ((param_4 == (int *)0x0) || (param_4[2] == 0)) {
      if ((*(byte *)(param_1 + 4) & 0x20) != 0) {
        *(undefined4 *)(param_1 + 0x100) = 0;
        *(undefined4 *)(param_1 + 0x104) = 0;
        p_Var2 = ImageList_Create(1,1,0xff,0x11,0);
        *(HIMAGELIST *)(param_1 + 0xfc) = p_Var2;
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
    }
    else {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
      if (*(HGDIOBJ *)(param_1 + 0xf8) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)(param_1 + 0xf8));
      }
      ImageList_Destroy(*(HIMAGELIST *)(param_1 + 0xfc));
      *(int *)(param_1 + 0xfc) = param_4[2];
      if ((*param_4 == 0) || (param_4[1] == 0)) {
        *(undefined4 *)(param_1 + 0x100) = 0;
        *(undefined4 *)(param_1 + 0x104) = 0;
      }
      else {
        *(int *)(param_1 + 0x100) = *param_4;
        *(int *)(param_1 + 0x104) = param_4[1];
      }
      *(int *)(param_1 + 0x108) = param_4[3];
      *(int *)(param_1 + 0x10c) = param_4[4];
      uVar4 = *(uint *)(param_1 + 4);
      *(int *)(param_1 + 0x110) = param_4[5];
      *(int *)(param_1 + 0x114) = param_4[6];
      uVar1 = (param_4[7] & 1U) << 7;
      *(uint *)(param_1 + 4) = uVar1 | uVar4 & 0xffffff7f;
      *(uint *)(param_1 + 4) = (param_4[8] & 1U) << 6 | uVar1 | uVar4 & 0xffffff3f | 0x20;
    }
    break;
  default:
    goto switchD_010b36b5_default;
  }
  iVar3 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58);
LAB_010b3ad2:
  FUN_010b1650(param_1,0,iVar5,iVar3);
LAB_010b3ada:
  InvalidateRect(*(HWND *)(param_1 + 0x3c),(RECT *)(param_1 + 0x48),0);
  UpdateWindow(*(HWND *)(param_1 + 0x3c));
switchD_010b36b5_default:
  return 0;
}


