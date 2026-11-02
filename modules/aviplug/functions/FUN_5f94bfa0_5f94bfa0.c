/* Module: aviplug.dll
   Function: FUN_5f94bfa0
   Address: 5f94bfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f94bfa0(int *param_1,uint param_2,uint param_3,uint param_4,short *param_5,undefined4 param_6,
            uint *param_7,int *param_8)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  uint local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  iVar9 = *param_1;
  iVar8 = 0;
  bVar2 = false;
  uVar3 = iVar9 * 0x144 - param_3;
  if (uVar3 <= param_4) {
    param_4 = uVar3;
  }
  if (param_5 == (short *)0x0) {
    uVar4 = 0x80004003;
    if (param_8 != (int *)0x0) {
      uVar4 = 0;
      *param_8 = param_2 * param_4;
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = param_4;
      return 0;
    }
  }
  else {
    uVar3 = iVar9 * 9;
    if (iVar9 == 5) {
      local_c = &DAT_5f9d81b4;
      local_10 = &DAT_5f9d8340;
    }
    else {
      local_c = &DAT_5f9d8268;
      local_10 = &DAT_5f9d83f4;
    }
    uVar7 = 0;
    if (param_3 != 0) {
      iVar8 = param_3 / uVar3 << 1;
      uVar7 = param_3 % uVar3;
    }
    if ((int)(uVar7 + param_4) <= (int)uVar3) {
      uVar3 = uVar7 + param_4;
    }
    if (0 < (int)param_4) {
      iVar8 = iVar8 + 9;
      uVar6 = param_4;
      psVar10 = param_5;
      local_14 = uVar3;
      do {
        if ((int)uVar7 < (int)uVar3) {
          iVar9 = uVar3 - uVar7;
          piVar5 = local_10 + uVar7;
          uVar6 = uVar6 - iVar9;
          do {
            iVar1 = param_1[*(int *)((int)piVar5 + ((int)local_c - (int)local_10)) * 9 + *piVar5 + 1
                           ];
            *(undefined1 *)((int)psVar10 + 1) = *(undefined1 *)(iVar8 + -1 + iVar1);
            *(undefined1 *)psVar10 = *(undefined1 *)(iVar8 + iVar1);
            if (*psVar10 == -0x8000) {
              bVar2 = true;
            }
            piVar5 = piVar5 + 1;
            psVar10 = (short *)((int)psVar10 + param_2);
            iVar9 = iVar9 + -1;
            uVar3 = local_14;
          } while (iVar9 != 0);
        }
        iVar8 = iVar8 + 2;
        uVar7 = 0;
        if ((int)uVar6 < (int)uVar3) {
          uVar3 = uVar6;
          local_14 = uVar6;
        }
      } while (0 < (int)uVar6);
      if (bVar2) {
        FUN_5f94bed0(param_5,param_2 >> 1,param_4);
      }
    }
    if (param_8 != (int *)0x0) {
      *param_8 = param_2 * param_4;
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = param_4;
    }
    uVar4 = 0;
  }
  return uVar4;
}


