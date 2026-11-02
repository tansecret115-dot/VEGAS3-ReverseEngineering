/* Module: vegas30.exe
   Function: FUN_00479350
   Address: 00479350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00479350(int param_1,undefined4 param_2,int param_3,RECT *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,RECT *param_9,
                 undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined1 uVar9;
  tagRECT local_10;
  
  if ((*(int **)(param_1 + 0x18) != (int *)0x0) && (iVar1 = **(int **)(param_1 + 0x18), 0 < iVar1))
  {
    *(int *)(param_1 + 0x54) = param_3;
    *(LONG *)(param_1 + 0x20) = param_4->left;
    *(LONG *)(param_1 + 0x24) = param_4->top;
    *(LONG *)(param_1 + 0x28) = param_4->right;
    *(LONG *)(param_1 + 0x2c) = param_4->bottom;
    *(undefined4 *)(param_1 + 0x30) = param_5;
    *(undefined4 *)(param_1 + 0x34) = param_6;
    *(undefined4 *)(param_1 + 0x38) = param_7;
    *(undefined4 *)(param_1 + 0x3c) = param_8;
    IntersectRect(&local_10,param_9,param_4);
    param_3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + 0x40);
        if (param_3 == iVar2) {
          iVar8 = iVar1 + -1;
        }
        else {
          iVar8 = param_3;
          if (((param_3 == iVar1 + -1) && (-1 < iVar2)) && (iVar2 < iVar1)) {
            iVar8 = iVar2;
          }
        }
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 8) + iVar8 * 4);
        if (iVar2 != 0) {
          iVar3 = *(int *)(iVar2 + 0x10);
          bVar4 = (byte)iVar3;
          if ((iVar3 < 0) || (0x1e < iVar3)) {
            if ((0x3f < iVar3) && (iVar3 < 0x60)) {
              uVar7 = 1 << (bVar4 - 0x40 & 0x1f);
              uVar5 = DAT_00648698;
              goto LAB_0047945f;
            }
            if ((0xc6 < iVar3) && (iVar3 < 0x12d)) {
              uVar7 = 1 << (bVar4 + 0x39 & 0x1f);
              uVar5 = DAT_00648694;
              goto LAB_0047945f;
            }
          }
          else {
            uVar7 = 1 << (bVar4 & 0x1f);
            uVar5 = DAT_00648690;
LAB_0047945f:
            *(uint *)(iVar2 + 0xc) =
                 (uint)((uVar7 & uVar5) == 0) << 2 | *(uint *)(iVar2 + 0xc) & 0xfffffffb;
          }
          if ((*(int *)(iVar2 + 0x30) != 0) && ((*(byte *)(iVar2 + 0xc) & 4) == 0)) {
            cVar6 = (iVar8 == *(int *)(param_1 + 0x40)) + '\x01';
            uVar9 = iVar3 == 1;
            if ((0x3f < iVar3) && (iVar3 < 0x60)) {
              uVar9 = 2;
            }
            if ((1 < iVar3) && (iVar3 < 0x1d)) {
              uVar9 = 3;
            }
            if (DAT_0064aeec != 0) {
              FUN_004785b0(param_1,iVar2,param_2,uVar9,cVar6,&local_10,0,1);
            }
            FUN_004785b0(param_1,iVar2,param_2,uVar9,cVar6,&local_10,param_10,0);
          }
        }
        param_3 = param_3 + 1;
      } while (param_3 < iVar1);
    }
  }
  return;
}


