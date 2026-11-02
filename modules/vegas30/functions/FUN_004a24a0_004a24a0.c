/* Module: vegas30.exe
   Function: FUN_004a24a0
   Address: 004a24a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004a2636) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a24a0(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,int param_7,uint param_8,int param_9,int *param_10,
                 undefined4 *param_11)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  *param_10 = 0xc;
  iVar4 = param_2[1];
  if (iVar4 != 0) {
    iVar6 = *param_2;
    iVar3 = *(int *)(iVar4 + 0x1c);
    iVar5 = *(int *)(iVar6 + 0x1c);
    uVar1 = *(uint *)(iVar6 + 0x18);
    if ((iVar5 < iVar3) || ((iVar5 <= iVar3 && (uVar1 <= *(uint *)(iVar4 + 0x18)))))
    goto LAB_004a250a;
    iVar5 = *(int *)(iVar6 + 0x24) + iVar5 + (uint)CARRY4(*(uint *)(iVar6 + 0x20),uVar1);
    iVar3 = *(int *)(iVar4 + 0x24) + iVar3 +
            (uint)CARRY4(*(uint *)(iVar4 + 0x20),*(uint *)(iVar4 + 0x18));
    if ((iVar3 < iVar5) ||
       ((iVar3 <= iVar5 &&
        (*(uint *)(iVar4 + 0x20) + *(uint *)(iVar4 + 0x18) <= *(uint *)(iVar6 + 0x20) + uVar1))))
    goto LAB_004a250a;
  }
  *param_10 = ((param_2[0x32] & 2U) != 0) + 5;
LAB_004a250a:
  iVar4 = FUN_004a2440(*(uint *)(*(int *)(param_3 + 0x218) + 0x68) >> 5 & 1,
                       *(int *)(param_3 + 0x218) + 0x58,&param_4);
  if (iVar4 != 0) {
    *param_10 = 10;
    iVar4 = *(int *)(*(int *)(param_3 + 0x218) + 0x5c);
    iVar6 = *(int *)(*(int *)(param_3 + 0x218) + 0x58);
    *(int *)(param_1 + 0x3b4) = iVar4 + 10;
    *(int *)(param_1 + 0x3a8) = iVar6 + -10;
    *(int *)(param_1 + 0x3ac) = iVar4 + -10;
    *(int *)(param_1 + 0x3b0) = iVar6 + 10;
    *param_11 = "Transition Properties...";
  }
  iVar4 = FUN_004a2440(*(uint *)(*(int *)(param_3 + 0x218) + 0x68) >> 6 & 1,
                       *(int *)(param_3 + 0x218) + 0x60,&param_4);
  if (iVar4 != 0) {
    *param_10 = 0xb;
    iVar4 = *(int *)(*(int *)(param_3 + 0x218) + 100);
    iVar6 = *(int *)(*(int *)(param_3 + 0x218) + 0x60);
    *(int *)(param_1 + 0x3b4) = iVar4 + 10;
    *(int *)(param_1 + 0x3a8) = iVar6 + -10;
    *(int *)(param_1 + 0x3ac) = iVar4 + -10;
    *(int *)(param_1 + 0x3b0) = iVar6 + 10;
    *param_11 = "Transition Properties...";
  }
  floor(((double)*(longlong *)(param_1 + 0xb90) * _DAT_00613278) / (double)*(int *)(param_1 + 0xb98)
        + _DAT_00610560);
  lVar7 = ftol();
  uVar1 = param_2[0x38];
  uVar2 = param_2[4];
  if (lVar7 <= CONCAT44((param_2[0x39] - param_2[5]) - (uint)(uVar1 < uVar2),uVar1 - uVar2)) {
    iVar6 = (param_7 - param_2[5]) - (uint)(param_6 < uVar2);
    iVar4 = -(param_9 + (uint)(param_8 != 0));
    if ((iVar6 < iVar4) ||
       ((((iVar6 <= iVar4 && (param_6 - uVar2 < -param_8)) || (param_9 < iVar6)) ||
        ((param_9 <= iVar6 && (param_8 < param_6 - uVar2)))))) {
      iVar6 = (param_7 - param_2[0x39]) - (uint)(param_6 < uVar1);
      if ((iVar4 <= iVar6) &&
         (((iVar4 < iVar6 || (-param_8 <= param_6 - uVar1)) &&
          ((iVar6 <= param_9 && ((iVar6 < param_9 || (param_6 - uVar1 <= param_8)))))))) {
        if (*param_10 == 5) {
          *param_10 = 0x301;
        }
        else if ((*param_10 == 0xc) && (DAT_00647788 != 0)) {
          *param_10 = 0x302;
          return;
        }
      }
    }
    else {
      if (*param_10 == 6) {
        *param_10 = 0x303;
        return;
      }
      if ((*param_10 == 0xc) && (DAT_00647788 != 0)) {
        *param_10 = 5;
        return;
      }
    }
  }
  return;
}


