/* Module: wmfdist2.exe
   Function: FUN_01007633
   Address: 01007633
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01007633(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint local_8;
  
  local_8 = 0;
  do {
    if ((int)param_2 < 1) {
      iVar4 = param_1[0xbb0];
      if (iVar4 == 0) {
        iVar4 = param_1[1];
      }
      FUN_0100799b((int)param_1,local_8,(undefined4 *)((iVar4 + *param_1) - local_8));
      return local_8;
    }
    if (param_1[2999] == 1) {
      if (param_1[0xbae] != 0) {
        param_1[0xbae] = 0;
        uVar1 = FUN_01007977((int)param_1,1);
        if (uVar1 == 0) {
          param_1[0xbb1] = 0;
        }
        else {
          uVar1 = FUN_01007977((int)param_1,0x10);
          uVar2 = FUN_01007977((int)param_1,0x10);
          param_1[0xbb1] = uVar1 << 0x10 | uVar2;
        }
      }
      if (param_1[0xbb6] == 3) {
        if ((*(byte *)(param_1 + 0xbb4) & 1) != 0) {
          if ((uint)param_1[0xac1] < (uint)param_1[0xac2]) {
            param_1[0xac1] = param_1[0xac1] + 1;
          }
        }
        param_1[0xbb6] = 0;
        FUN_0100787b((int)param_1);
      }
      uVar1 = FUN_01007977((int)param_1,3);
      param_1[0xbb6] = uVar1;
      uVar1 = FUN_01007977((int)param_1,8);
      uVar2 = FUN_01007977((int)param_1,8);
      uVar3 = FUN_01007977((int)param_1,8);
      iVar4 = uVar3 + (uVar1 * 0x100 + uVar2) * 0x100;
      param_1[0xbb4] = iVar4;
      param_1[0xbb5] = iVar4;
      if (param_1[0xbb6] == 2) {
        FUN_01007cdc((int)param_1);
      }
      iVar4 = param_1[0xbb6];
      if ((iVar4 == 1) || (iVar4 == 2)) {
        piVar5 = param_1 + 0x286;
        piVar6 = param_1 + 0xac5;
        for (uVar1 = (uint)*(byte *)((int)param_1 + 0x2eb5) * 8 + 0x100 >> 2; uVar1 != 0;
            uVar1 = uVar1 - 1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(char *)piVar6 = (char)*piVar5;
          piVar5 = (int *)((int)piVar5 + 1);
          piVar6 = (int *)((int)piVar6 + 1);
        }
        piVar5 = param_1 + 0x32e;
        piVar6 = param_1 + 0xb6d;
        for (iVar4 = 0x3e; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        *(char *)piVar6 = (char)*piVar5;
        FUN_010079e8((int)param_1);
      }
      else if ((iVar4 != 3) || (iVar4 = FUN_01007da3((int)param_1), iVar4 == 0)) {
        return 0xffffffff;
      }
      param_1[2999] = 2;
    }
    iVar4 = param_1[0xbb5];
    if (0 < iVar4) {
      do {
        if ((int)param_2 < 1) break;
        uVar1 = param_1[0xbb5];
        if ((int)param_2 <= param_1[0xbb5]) {
          uVar1 = param_2;
        }
        if (uVar1 == 0) {
          return 0xffffffff;
        }
        uVar2 = decode_block(param_1,param_1[0xbb6],param_1[0xbb0],uVar1);
        if (uVar2 != 0) {
          return 0xffffffff;
        }
        param_1[0xbb5] = param_1[0xbb5] - uVar1;
        param_2 = param_2 - uVar1;
        local_8 = local_8 + uVar1;
      } while (0 < param_1[0xbb5]);
      iVar4 = param_1[0xbb5];
    }
    if (iVar4 == 0) {
      param_1[2999] = 1;
    }
    if (param_2 == 0) {
      FUN_0100787b((int)param_1);
    }
  } while( true );
}


