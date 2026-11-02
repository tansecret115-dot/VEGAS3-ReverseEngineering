/* Module: vegas30.exe
   Function: FUN_004ce950
   Address: 004ce950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce950(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float10 fVar9;
  int *local_10;
  int local_c;
  
  iVar6 = param_3;
  iVar1 = *(int *)(param_1 + 0x5d0);
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_10 = (int *)0x0;
  }
  else {
    local_10 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  local_c = 2;
  iVar2 = *local_10;
  if (param_3 == 0x80) {
    local_c = 3;
  }
  param_3 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = *(int *)(local_10[2] + param_3 * 4);
      if (((param_2 != iVar3) && (*(int *)(iVar3 + 4) == local_c)) &&
         (uVar4 = *(uint *)(iVar3 + 0x10), (uVar4 & 0x10) != 0)) {
        if (local_c == 3) {
          if (iVar6 == 0x80) {
            FUN_004cee20(iVar3,(*(int *)(*(int *)(*(int *)(iVar3 + 0x69c) + 0x54) + 0x20c) -
                               *(int *)(iVar1 + 0x10)) + param_4);
            FUN_004c3760(param_1,iVar3);
          }
        }
        else {
          iVar5 = *(int *)(*(int *)(iVar3 + 0x69c) + 0x54);
          iVar7 = (*(int *)(iVar5 + 0x114) - *(int *)(iVar1 + 0x10)) + param_4;
          if (iVar6 == 0) {
            if ((uVar4 & 0x80) == 0) {
              FUN_004ceb40(iVar3,0,iVar7);
              fVar9 = (float10)*(float *)(iVar3 + 0x48);
              if ((float10)_DAT_006106d0 == fVar9) {
                uVar8 = 0;
              }
              else if ((float10)_DAT_00610fd8 == fVar9) {
                uVar8 = 0xfffffda8;
              }
              else {
                log2(fVar9);
                uVar8 = ftol();
              }
              _FaderInst_Message_16(*(undefined4 *)(iVar5 + 0x118),0x610,1,uVar8);
            }
          }
          else if (iVar6 == 1) {
            if ((uVar4 & 0x80) != 0) {
              FUN_004ceb40(iVar3,1,iVar7);
              uVar8 = FUN_004ce720(iVar3,1);
              _FaderInst_Message_16(*(undefined4 *)(iVar5 + 0x118),0x610,1,uVar8);
            }
          }
          else {
            FUN_004ceb40(iVar3,iVar6,iVar7);
            FUN_004c37d0(param_1,iVar3);
          }
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 < iVar2);
  }
  FUN_004530a0(param_1,0x9000);
  return;
}


