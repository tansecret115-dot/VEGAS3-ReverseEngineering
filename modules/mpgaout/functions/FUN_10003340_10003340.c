/* Module: mpgaout.dll
   Function: FUN_10003340
   Address: 10003340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_10003340(int param_1,undefined2 *param_2,int param_3,int param_4,int param_5,uint param_6,
            int param_7)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_4 != 1) {
    if (param_3 != 2) {
      if (param_7 == 0) {
        if (*(uint *)(param_1 + 0xc570) < 0x480) {
          do {
            if (param_6 >> 1 <= *(uint *)(param_1 + 0xc56c)) goto LAB_1000373c;
            *(undefined2 *)(*(int *)(param_1 + 0xc570) * 2 + param_1 + 0xc574) =
                 *(undefined2 *)(param_5 + *(uint *)(param_1 + 0xc56c) * 2);
            *(int *)(param_1 + 0xc56c) = *(int *)(param_1 + 0xc56c) + 1;
            *(int *)(param_1 + 0xc570) = *(int *)(param_1 + 0xc570) + 1;
          } while (*(uint *)(param_1 + 0xc570) < 0x480);
        }
        *(undefined4 *)(param_1 + 0xc570) = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0xc570);
        if (uVar2 == 0) {
          uVar2 = 0;
          do {
            *(undefined2 *)(param_1 + 0xc574 + uVar2 * 2) = 0;
            *(int *)(param_1 + 0xc570) = *(int *)(param_1 + 0xc570) + 1;
            uVar2 = *(uint *)(param_1 + 0xc570);
          } while (uVar2 < 0x480);
          goto LAB_100036ea;
        }
        while (uVar2 < 0x480) {
          *(undefined2 *)(*(int *)(param_1 + 0xc570) * 2 + param_1 + 0xc574) = 0;
          *(int *)(param_1 + 0xc570) = *(int *)(param_1 + 0xc570) + 1;
          uVar2 = *(uint *)(param_1 + 0xc570);
        }
        *(undefined4 *)(param_1 + 0xc570) = 0;
      }
      iVar4 = 0;
      do {
        param_2[iVar4] = *(undefined2 *)(param_1 + 0xc574 + iVar4 * 2);
        param_2[iVar4 + 0x480] = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x480);
      return 0x480;
    }
    if (param_7 == 0) {
      if (*(uint *)(param_1 + 0xc570) < 0x900) {
        do {
          if (param_6 >> 1 <= *(uint *)(param_1 + 0xc56c)) goto LAB_1000373c;
          *(undefined2 *)(*(int *)(param_1 + 0xc570) * 2 + param_1 + 0xc574) =
               *(undefined2 *)(param_5 + *(uint *)(param_1 + 0xc56c) * 2);
          *(int *)(param_1 + 0xc56c) = *(int *)(param_1 + 0xc56c) + 1;
          *(int *)(param_1 + 0xc570) = *(int *)(param_1 + 0xc570) + 1;
        } while (*(uint *)(param_1 + 0xc570) < 0x900);
      }
      *(undefined4 *)(param_1 + 0xc570) = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xc570);
      if (uVar2 == 0) {
        uVar2 = 0;
        do {
          *(undefined2 *)(param_1 + 0xc574 + uVar2 * 2) = 0;
          *(int *)(param_1 + 0xc570) = *(int *)(param_1 + 0xc570) + 1;
          uVar2 = *(uint *)(param_1 + 0xc570);
        } while (uVar2 < 0x900);
        goto LAB_100036ea;
      }
      while (uVar2 < 0x900) {
        *(undefined2 *)(*(int *)(param_1 + 0xc570) * 2 + param_1 + 0xc574) = 0;
        *(int *)(param_1 + 0xc570) = *(int *)(param_1 + 0xc570) + 1;
        uVar2 = *(uint *)(param_1 + 0xc570);
      }
      *(undefined4 *)(param_1 + 0xc570) = 0;
    }
    puVar3 = (undefined2 *)(param_1 + 0xc574);
    iVar4 = 0;
    do {
      param_2[iVar4] = *puVar3;
      param_2[iVar4 + 0x480] = puVar3[1];
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x480);
    return 0x900;
  }
  if (param_3 == 2) {
    if (param_7 == 0) {
      if (*(uint *)(param_1 + 0xc570) < 0x300) {
        do {
          if (param_6 >> 1 <= *(uint *)(param_1 + 0xc56c)) {
LAB_1000373c:
            *(undefined4 *)(param_1 + 0xc56c) = 0;
            return 0;
          }
          *(undefined2 *)(*(int *)(param_1 + 0xc570) * 2 + param_1 + 0xc574) =
               *(undefined2 *)(param_5 + *(uint *)(param_1 + 0xc56c) * 2);
          *(int *)(param_1 + 0xc56c) = *(int *)(param_1 + 0xc56c) + 1;
          *(int *)(param_1 + 0xc570) = *(int *)(param_1 + 0xc570) + 1;
        } while (*(uint *)(param_1 + 0xc570) < 0x300);
      }
    }
    else {
      if (*(uint *)(param_1 + 0xc570) == 0) {
        uVar2 = 0;
        do {
          *(undefined2 *)(param_1 + 0xc574 + uVar2 * 2) = 0;
          *(int *)(param_1 + 0xc570) = *(int *)(param_1 + 0xc570) + 1;
          uVar2 = *(uint *)(param_1 + 0xc570);
        } while (uVar2 < 0x300);
LAB_100036ea:
        *(undefined4 *)(param_1 + 0xc570) = 0;
        return 0;
      }
      if (*(uint *)(param_1 + 0xc570) < 0x300) {
        do {
          *(undefined2 *)(*(int *)(param_1 + 0xc570) * 2 + param_1 + 0xc574) = 0;
          *(int *)(param_1 + 0xc570) = *(int *)(param_1 + 0xc570) + 1;
        } while (*(uint *)(param_1 + 0xc570) < 0x300);
      }
    }
    *(undefined4 *)(param_1 + 0xc570) = 0;
    uVar6 = 0x300;
    iVar4 = 0;
    iVar5 = 0;
    do {
      if (iVar4 < 0x40) {
        *param_2 = param_2[0x180];
        uVar1 = param_2[0x600];
      }
      else {
        *param_2 = *(undefined2 *)(param_1 + 0xc474 + iVar5 * 2);
        uVar1 = *(undefined2 *)(param_1 + 0xc476 + iVar5 * 2);
      }
      param_2[0x480] = uVar1;
      param_2 = param_2 + 1;
      iVar5 = iVar5 + 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1c0);
  }
  else {
    if (param_7 == 0) {
      if (*(uint *)(param_1 + 0xc570) < 0x180) {
        do {
          if (param_6 >> 1 <= *(uint *)(param_1 + 0xc56c)) goto LAB_1000373c;
          *(undefined2 *)(*(int *)(param_1 + 0xc570) * 2 + param_1 + 0xc574) =
               *(undefined2 *)(param_5 + *(uint *)(param_1 + 0xc56c) * 2);
          *(int *)(param_1 + 0xc56c) = *(int *)(param_1 + 0xc56c) + 1;
          *(int *)(param_1 + 0xc570) = *(int *)(param_1 + 0xc570) + 1;
        } while (*(uint *)(param_1 + 0xc570) < 0x180);
      }
    }
    else {
      if (*(uint *)(param_1 + 0xc570) == 0) {
        uVar2 = 0;
        do {
          *(undefined2 *)(param_1 + 0xc574 + uVar2 * 2) = 0;
          *(int *)(param_1 + 0xc570) = *(int *)(param_1 + 0xc570) + 1;
          uVar2 = *(uint *)(param_1 + 0xc570);
        } while (uVar2 < 0x180);
        goto LAB_100036ea;
      }
      if (*(uint *)(param_1 + 0xc570) < 0x180) {
        do {
          *(undefined2 *)(*(int *)(param_1 + 0xc570) * 2 + param_1 + 0xc574) = 0;
          *(int *)(param_1 + 0xc570) = *(int *)(param_1 + 0xc570) + 1;
        } while (*(uint *)(param_1 + 0xc570) < 0x180);
      }
    }
    *(undefined4 *)(param_1 + 0xc570) = 0;
    uVar6 = 0x180;
    iVar4 = 0;
    puVar3 = (undefined2 *)(param_1 + 0xc4f4);
    do {
      if (iVar4 < 0x40) {
        param_2[0x480] = 0;
        *param_2 = param_2[0x180];
      }
      else {
        *param_2 = *puVar3;
        param_2[0x480] = 0;
      }
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1c0);
  }
  return uVar6;
}


