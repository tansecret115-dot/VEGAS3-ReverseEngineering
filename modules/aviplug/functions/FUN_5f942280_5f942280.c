/* Module: aviplug.dll
   Function: FUN_5f942280
   Address: 5f942280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f942280(uint param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            uint *param_6,int *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  int iStack_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  *param_6 = 0;
  *param_7 = 0;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  local_4 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
  bVar6 = *(int *)(param_1 + 0x20) != 0;
  if (bVar6) {
    local_18 = *(undefined4 *)(param_1 + 0x14);
    local_1c = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    local_20 = 0x10;
  }
  local_14 = (uint)!bVar6;
  iVar3 = *(int *)(param_1 + 0x34);
  if (0 < iVar3) {
    if (*(int *)(param_1 + 0x24) < 2) {
      if ((*(int *)(param_1 + 100) < 1) && (*(int *)(param_1 + 100) < 0)) {
        iVar3 = *(int *)(param_1 + 0x28);
        goto LAB_5f942314;
      }
    }
    else if ((*(int *)(param_1 + 0x60) == 0) && (*(int *)(param_1 + 100) == 0)) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_5f942314;
    }
    iVar2 = *(int *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    iVar3 = iVar3 + iVar2;
  }
LAB_5f942314:
  uVar4 = *(uint *)(param_1 + 0x1c);
  param_1 = 0;
  bVar6 = true;
  local_10 = 0;
  if (((iVar3 == 0) || (*(int *)(uVar1 + 0x2c) != 0)) || (*(int *)(uVar1 + 0x30) == 0)) {
    local_10 = 1;
  }
  local_c = 0x200;
  iVar2 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
  uVar5 = uVar4;
  if (iVar2 < 0x201) {
    local_c = iVar2;
  }
LAB_5f942355:
  do {
    iVar2 = ICCompress(*(undefined4 *)(uVar1 + 4),local_14,*(undefined4 *)(uVar1 + 0x10),param_4,
                       *(undefined4 *)(uVar1 + 0xc),param_2,0,&local_20,
                       *(undefined4 *)(uVar1 + 0x60),iVar3,uVar5,local_18,local_1c);
    iStack_8 = *(int *)(*(int *)(uVar1 + 0x10) + 0x14);
    *(undefined4 *)(*(int *)(uVar1 + 0x10) + 0x14) = local_4;
    if (iVar2 != 0) {
      return 0x8004e012;
    }
    if (local_10 != 0) {
LAB_5f94241b:
      *(uint *)(uVar1 + 0x38) = uVar5;
      bVar6 = (local_20 & 0x10) == 0;
      if (bVar6) {
        *(int *)(uVar1 + 0x20) = *(int *)(uVar1 + 0x20) + -1;
      }
      else {
        *(int *)(uVar1 + 0x20) = *(int *)(uVar1 + 0x24) + -1;
      }
      if (((*(int *)(uVar1 + 0x20) != 0) && (*(int *)(uVar1 + 0x18) != 0)) &&
         (iVar3 = ICDecompress(*(undefined4 *)(uVar1 + 4),0,*(undefined4 *)(uVar1 + 0x10),param_4,
                               *(undefined4 *)(uVar1 + 0x14),*(int *)(uVar1 + 0x18)), iVar3 != 0)) {
        return 0x8004e012;
      }
      if (((*(int *)(uVar1 + 0x10) != 0) && (*(int *)(*(int *)(uVar1 + 0x10) + 0x10) == 0x64737664))
         && (*(int *)(uVar1 + 0x40) == 0)) {
        FUN_5f942000(param_4,*(int *)(uVar1 + 0x44),*(int *)(uVar1 + 0x58));
      }
      uVar4 = *(uint *)(uVar1 + 0x60);
      *(uint *)(uVar1 + 0x60) = uVar4 + 1;
      *(uint *)(uVar1 + 100) = *(int *)(uVar1 + 100) + (uint)(0xfffffffe < uVar4);
      *param_6 = (uint)!bVar6;
      *param_7 = iStack_8;
      return 0;
    }
    if (iStack_8 < iVar3) {
      if (((uVar4 - uVar5 < 0xb) || (iVar3 - iStack_8 <= local_c)) || (param_1 = uVar5, bVar6))
      goto LAB_5f94241b;
LAB_5f9423d8:
      bVar6 = false;
      uVar5 = param_1 + uVar4 >> 1;
      goto LAB_5f942355;
    }
    if (uVar4 - param_1 < 2) goto LAB_5f94241b;
    uVar4 = uVar5;
    if ((!bVar6) || (uVar5 == *(uint *)(uVar1 + 0x38))) goto LAB_5f9423d8;
    bVar6 = false;
    uVar5 = *(uint *)(uVar1 + 0x38);
  } while( true );
}


