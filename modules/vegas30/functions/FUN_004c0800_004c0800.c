/* Module: vegas30.exe
   Function: FUN_004c0800
   Address: 004c0800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004c0931) */

int FUN_004c0800(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int local_20;
  int local_1c;
  
  local_1c = 0;
  piVar6 = *(int **)(param_2 + 0x3c);
  if (piVar6 == (int *)0x0) {
    piVar6 = *(int **)(param_1 + 0xc38);
  }
  if (piVar6 != (int *)0x0) {
    iVar1 = *piVar6;
    local_20 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(piVar6[2] + local_20 * 4);
        iVar3 = *(int *)(iVar2 + 0x18);
        param_2 = *(int *)(iVar2 + 0x1c);
        iVar4 = *(int *)(iVar2 + 0x14);
        piVar7 = (int *)_SfGetUIFontSize_4(0x6e);
        if (param_2 < *piVar7 * 3) {
          param_2 = *piVar7 * 3;
        }
        if ((*(byte *)(iVar2 + 0x20) & 1) == 0) {
          if (iVar4 <= param_5) {
            iVar9 = iVar3;
            if (param_3 <= iVar3) {
              iVar9 = param_3;
            }
            if (param_5 < iVar9 + iVar4) {
              *param_7 = 0x10;
              return iVar2;
            }
          }
          if ((((param_3 < iVar3) && (param_6 < param_4 + -1)) && (param_3 + iVar4 <= param_5)) &&
             (param_5 < param_2 + iVar4 + param_3)) {
            *param_7 = 0x14;
            local_1c = iVar2;
          }
        }
        else {
          if (iVar4 <= param_5) {
            iVar9 = iVar3;
            if (param_3 <= iVar3) {
              iVar9 = param_3;
            }
            if (param_5 < iVar9 + iVar4) {
              *param_7 = 0x21;
              return iVar2;
            }
          }
          if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
            uVar10 = 0xffffffff;
          }
          else {
            lVar11 = ftol();
            uVar5 = lVar11 + *(int *)(param_1 + 0xac0);
            uVar10 = (uint)uVar5;
            if ((uVar5 < 0x8000000000000000) ||
               ((-0x100000001 < (longlong)uVar5 && (0xffffbfff < uVar10)))) {
              if (0x3fff < (longlong)uVar5) {
                uVar10 = 0x3fff;
              }
            }
            else {
              uVar10 = 0xffffc000;
            }
          }
          if (((int)(uVar10 - param_3) <= param_5) && (param_5 < (int)uVar10)) {
            *param_7 = 0x22;
            return iVar2;
          }
          if ((((param_3 < iVar3) && (param_6 < param_4 + -1)) && (param_3 + iVar4 <= param_5)) &&
             (param_5 < param_2 + iVar4 + param_3)) {
            *param_7 = 0x25;
            return iVar2;
          }
          if (param_3 + iVar4 <= param_5) {
            uVar8 = iVar3 + iVar4;
            if ((int)uVar10 <= iVar3 + iVar4) {
              uVar8 = uVar10;
            }
            if (param_5 < (int)uVar8) {
              *param_7 = 0x20;
              local_1c = iVar2;
            }
          }
        }
        local_20 = local_20 + 1;
      } while (local_20 < iVar1);
    }
  }
  return local_1c;
}


