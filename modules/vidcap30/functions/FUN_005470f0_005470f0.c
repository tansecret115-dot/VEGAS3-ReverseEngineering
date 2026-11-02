/* Module: vidcap30.exe
   Function: FUN_005470f0
   Address: 005470f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005470f0(HDC param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  COLORREF color;
  uint uVar6;
  int iVar7;
  COLORREF color_00;
  int local_34;
  uint local_30;
  COLORREF local_2c;
  tagRECT local_20;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  iVar5 = param_4;
  color = GetBkColor(param_1);
  local_34 = 3;
  uVar6 = *(uint *)(param_4 + 0x160) & 2;
  if (uVar6 == 0) {
    local_2c = DAT_006624bc;
  }
  else {
    local_2c = DAT_006624d0;
  }
  iVar7 = *param_2 + 1;
  local_20.top = param_2[1];
  local_20.right = param_2[2];
  bVar1 = *(byte *)(param_4 + 0x168);
  local_20.bottom = param_2[3];
  if (((*(uint *)(param_4 + 0x164) & 0x2000) == 0) ||
     (bVar4 = true, (*(uint *)(param_4 + 0x164) & 0x1000) == 0)) {
    bVar4 = false;
  }
  local_30 = 0;
  local_20.left = iVar7;
  if (*(int *)(param_4 + 0x60) != 0) {
    param_4 = 0;
    do {
      if ((local_30 < *(uint *)(iVar5 + 100)) || (*(uint *)(iVar5 + 0xb8) <= local_30)) {
        sVar2 = *(short *)(param_4 + 2 + *(int *)(iVar5 + 0x1c0));
        if (sVar2 != 0) {
          local_20.right = sVar2 + iVar7;
          if (iVar7 == 1) {
            local_c = local_20.top;
            local_4 = local_20.bottom;
            local_10 = 0;
            local_8 = 1;
            if ((*(uint *)(iVar5 + 0x164) & 0x2000) != 0) {
              local_4 = local_20.bottom + 1;
            }
            FUN_00544210(param_1,&local_10,DAT_006624c8);
          }
          if (bVar4) {
            local_20.right = local_20.right + -1;
          }
          bVar3 = false;
          if (uVar6 != 0) {
            if ((*(int *)(iVar5 + 0x3c) == param_3) && (*(uint *)(iVar5 + 0x40) == local_30)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
          }
          iVar7 = 0;
          if ((!bVar3) || ((bVar1 & 4) != 0)) {
            iVar7 = FUN_005458e0(param_3,local_30,iVar5);
          }
          if (bVar3) {
            if (bVar4) {
              InflateRect(&local_20,1,1);
              FUN_00544330(param_1,&local_20,DAT_006624c8,DAT_006624c8);
            }
            FUN_00544330(param_1,&local_20,DAT_006624c8,DAT_006624c8);
            local_34 = 3;
          }
          if (iVar7 != local_34) {
            color_00 = local_2c;
            if (iVar7 == 0) {
              color_00 = color;
            }
            SetBkColor(param_1,color_00);
            local_34 = iVar7;
          }
          FUN_005442a0(param_1,&local_20);
          if (bVar3) {
            InflateRect(&local_20,1,1);
          }
          iVar7 = local_20.left + *(short *)(param_4 + 2 + *(int *)(iVar5 + 0x1c0));
          local_20.left = iVar7;
        }
        if (param_2[2] <= iVar7) break;
      }
      local_30 = local_30 + 1;
      param_4 = param_4 + 0x10;
    } while (local_30 < *(uint *)(iVar5 + 0x60));
  }
  SetBkColor(param_1,color);
  if (local_20.right < param_2[2]) {
    local_20.right = param_2[2];
    FUN_005442a0(param_1,&local_20);
  }
  return;
}


