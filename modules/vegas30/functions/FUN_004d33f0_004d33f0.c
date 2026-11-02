/* Module: vegas30.exe
   Function: FUN_004d33f0
   Address: 004d33f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004d33f0(int param_1,HDC param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int mode;
  HWND pHVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined *puVar12;
  int local_38;
  tagRECT local_20;
  tagRECT local_10;
  
  iVar7 = param_1;
  iVar1 = *(int *)(param_3 + 4);
  iVar2 = *(int *)(param_3 + 0xc);
  puVar3 = *(uint **)(param_1 + 0x5d0);
  mode = SetBkMode(param_2,1);
  pHVar8 = GetFocus();
  if ((pHVar8 == *(HWND *)(param_1 + 4)) && (*(int *)(param_1 + 0xb24) != 0)) {
    bVar6 = true;
    FUN_00452e00(param_1);
  }
  else {
    bVar6 = false;
  }
  uVar9 = FUN_004c4db0(*puVar3 >> 6 & 1);
  puVar3[3] = uVar9;
  local_38 = iVar1;
  if ((*(int *)(param_1 + 0xbc8) != 0) &&
     (piVar10 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8)), piVar10 != (int *)0x0)) {
    iVar4 = *(int *)(param_1 + 0xbc4);
    param_3 = 0;
    param_1 = 0;
    if (0 < iVar4) {
      do {
        if ((param_1 < 0) || (*piVar10 + -1 < param_1)) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(piVar10[2] + param_1 * 4);
        }
        if ((iVar11 != 0) && ((*(byte *)(iVar11 + 0x10) & 4) == 0)) {
          iVar5 = *(int *)(iVar11 + 0x69c);
          if (*(int *)(iVar11 + 4) == 3) {
            uVar9 = *(uint *)(iVar11 + 0x44);
            if (((uVar9 & 0x40) == 0) && (((uVar9 & 0x20) == 0 || ((uVar9 & 0x80) != 0)))) {
              param_3 = 0;
            }
            else {
              param_3 = 1;
            }
          }
          *(uint *)(iVar5 + 0x30) = param_3 << 4 | *(uint *)(iVar5 + 0x30) & 0xffffffef;
          local_38 = *(int *)(iVar5 + 0x24);
          if (iVar1 < local_38) {
            if (iVar2 < *(int *)(iVar5 + 0x1c)) break;
            local_20.left = *(int *)(iVar7 + 0x38c) + 1;
            local_20.right = *(int *)(iVar7 + 0x394) + -2;
            local_20.top = *(int *)(iVar5 + 0x1c);
            local_20.bottom = *(int *)(iVar5 + 0x24);
            DrawEdge(param_2,&local_20,4,0x200f);
            FUN_0044e9f0(param_2,&local_20,&DAT_00613868,&DAT_0064b198);
            if ((*(byte *)(iVar11 + 0x10) & 0x10) == 0) {
              puVar12 = &DAT_0064b198;
            }
            else {
              puVar12 = &DAT_0064b1a8;
            }
            FUN_0044e9f0(param_2,&local_20,&DAT_00613868,puVar12);
            if (*(int *)(iVar5 + 0x50) == 2) {
              if ((*(byte *)(iVar5 + 0x30) & 8) != 0) {
                FUN_004d2ea0(iVar7,iVar11,param_1);
                *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) & 0xfffffff7;
              }
              FUN_004d0910(param_2,iVar7,iVar11,param_1);
            }
            else if (*(int *)(iVar5 + 0x50) == 3) {
              FUN_004d17e0(param_2,iVar7,iVar11,param_1);
            }
            if (*(int *)(iVar7 + 0xacc) < local_38) {
              local_10.top = *(LONG *)(iVar7 + 0x390);
              local_10.left = *(LONG *)(iVar7 + 0x38c);
              local_10.right = *(LONG *)(iVar7 + 0x394);
              local_10.bottom = *(int *)(iVar7 + 0xacc);
              DrawEdge(param_2,&local_10,4,10);
            }
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 < iVar4);
    }
  }
  if (local_38 < iVar2) {
    local_20.left = *(int *)(iVar7 + 0x38c);
    local_20.top = local_38;
    local_20.right = *(int *)(iVar7 + 0x394);
    local_20.bottom = iVar2;
    FUN_0044e9f0(param_2,&local_20,0,&DAT_0064b188);
  }
  SetBkMode(param_2,mode);
  if (bVar6) {
    FUN_00452ea0(iVar7);
  }
  return;
}


