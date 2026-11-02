/* Module: vidpcore.dll
   Function: FUN_5de6d010
   Address: 5de6d010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de6d010(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  
  iVar2 = param_3 - param_2;
  uVar5 = param_3;
  param_3 = iVar2;
  if (iVar2 < 0) {
    param_3 = 0;
    uVar5 = param_2;
  }
  if (param_1 != (undefined4 *)0x0) {
    if (param_4 == 4) {
      if ((((int)param_2 < 0x101) && ((int)uVar5 < 0x101)) && (-1 < (int)param_3)) {
        if (0 < (int)param_2) {
          puVar7 = param_1;
          for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar7 = 0;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
        }
        if ((int)param_2 < (int)uVar5) {
          uVar3 = param_2;
          iVar2 = param_2 * 0xff;
          do {
            uVar4 = uVar3 + 1;
            *(char *)(uVar3 + (int)param_1) = (char)((int)(iVar2 + param_2 * -0xff) / (int)param_3);
            uVar3 = uVar4;
            iVar2 = iVar2 + 0xff;
          } while ((int)uVar4 < (int)uVar5);
        }
        if (0xff < (int)uVar5) {
          return 1;
        }
        puVar7 = (undefined4 *)((int)param_1 + uVar5);
        for (uVar3 = 0x100 - uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = 0xffffffff;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = 0x100 - uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = 0xff;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        return 1;
      }
    }
    else if ((((int)param_2 < 0x10001) && ((int)uVar5 < 0x10001)) && (-1 < (int)param_3)) {
      if (0 < (int)param_2) {
        puVar7 = param_1;
        for (uVar3 = param_2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        for (uVar3 = (uint)((param_2 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined2 *)puVar7 = 0;
          puVar7 = (undefined4 *)((int)puVar7 + 2);
        }
      }
      if ((int)param_2 < (int)uVar5) {
        puVar6 = (undefined2 *)((int)param_1 + param_2 * 2);
        do {
          uVar1 = ftol();
          *puVar6 = uVar1;
          param_2 = param_2 + 1;
          puVar6 = puVar6 + 1;
        } while ((int)param_2 < (int)uVar5);
      }
      if (0xffff < (int)uVar5) {
        return 1;
      }
      puVar7 = (undefined4 *)((int)param_1 + uVar5 * 2);
      for (uVar3 = 0x10000 - uVar5 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = (uint)((0x10000 - uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined2 *)puVar7 = 0xffff;
        puVar7 = (undefined4 *)((int)puVar7 + 2);
      }
      return 1;
    }
  }
  return 0;
}


