/* Module: InstMsi-x86a.exe
   Function: FUN_010079c0
   Address: 010079c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_010079c0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint local_4;
  
  local_4 = 0;
  do {
    if (param_2 < 1) {
      iVar4 = param_1[0xbb0];
      if (iVar4 == 0) {
        iVar4 = param_1[1];
      }
      FUN_01007eb0((int)param_1,local_4,(undefined4 *)((iVar4 - local_4) + *param_1));
      return local_4;
    }
    if (param_1[2999] == 1) {
      if (param_1[0xbae] != 0) {
        param_1[0xbae] = 0;
        uVar1 = FUN_01007dc0((int)param_1,1);
        if (uVar1 == 0) {
          param_1[0xbb1] = 0;
        }
        else {
          uVar1 = FUN_01007dc0((int)param_1,0x10);
          uVar2 = FUN_01007dc0((int)param_1,0x10);
          param_1[0xbb1] = uVar1 << 0x10 | uVar2;
        }
      }
      if (param_1[0xbb6] == 3) {
        if (((*(byte *)(param_1 + 0xbb4) & 1) != 0) && ((uint)param_1[0xac1] < (uint)param_1[0xac2])
           ) {
          param_1[0xac1] = param_1[0xac1] + 1;
        }
        param_1[0xbb6] = 0;
        FUN_01007c90((int)param_1);
      }
      uVar1 = FUN_01007dc0((int)param_1,3);
      param_1[0xbb6] = uVar1;
      uVar1 = FUN_01007dc0((int)param_1,8);
      uVar2 = FUN_01007dc0((int)param_1,8);
      uVar3 = FUN_01007dc0((int)param_1,8);
      iVar4 = uVar3 + (uVar1 * 0x100 + uVar2) * 0x100;
      param_1[0xbb4] = iVar4;
      param_1[0xbb5] = iVar4;
      if (param_1[0xbb6] == 2) {
        FUN_01008250((int)param_1);
      }
      iVar4 = param_1[0xbb6];
      if ((iVar4 == 1) || (iVar4 == 2)) {
        piVar6 = param_1 + 0x286;
        piVar7 = param_1 + 0xac5;
        for (uVar1 = (uint)*(byte *)((int)param_1 + 0x2eb5) * 8 + 0x100 >> 2; uVar1 != 0;
            uVar1 = uVar1 - 1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        piVar6 = param_1 + 0x32e;
        piVar7 = param_1 + 0xb6d;
        for (iVar4 = 0x3e; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        *(char *)piVar7 = (char)*piVar6;
        FUN_01007f00((int)param_1);
      }
      else {
        if (iVar4 != 3) {
          return 0xffffffff;
        }
        iVar4 = FUN_01008320((int)param_1);
        if (iVar4 == 0) {
          return 0xffffffff;
        }
      }
      param_1[2999] = 2;
    }
    iVar4 = param_1[0xbb5];
    if (0 < iVar4) {
      do {
        if (param_2 < 1) break;
        iVar4 = param_1[0xbb5];
        if (param_2 <= param_1[0xbb5]) {
          iVar4 = param_2;
        }
        if (iVar4 == 0) {
          return 0xffffffff;
        }
        iVar5 = FUN_01007c20(param_1,param_1[0xbb6],param_1[0xbb0],iVar4);
        if (iVar5 != 0) {
          return 0xffffffff;
        }
        iVar5 = param_1[0xbb5];
        param_2 = param_2 - iVar4;
        local_4 = local_4 + iVar4;
        param_1[0xbb5] = iVar5 - iVar4;
      } while (0 < iVar5 - iVar4);
      iVar4 = param_1[0xbb5];
    }
    if (iVar4 == 0) {
      param_1[2999] = 1;
    }
    if (param_2 == 0) {
      FUN_01007c90((int)param_1);
    }
  } while( true );
}


