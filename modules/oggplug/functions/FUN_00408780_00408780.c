/* Module: oggplug.dll
   Function: FUN_00408780
   Address: 00408780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00408780(int param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  
  uVar4 = 0;
  psVar7 = *(short **)(param_1 + 0x18);
  if (psVar7 == (short *)0x0) {
    return 0x8000ffff;
  }
  if (((*psVar7 == 3) || (*psVar7 == 1)) || (uVar5 = (ushort)psVar7[8] + 0x12, uVar5 < 0x13)) {
    uVar5 = 0x12;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar5;
  }
  if (param_2 != (undefined4 *)0x0) {
    if ((int)uVar5 <= (int)param_3) {
      psVar7 = *(short **)(param_1 + 0x18);
      if ((*psVar7 != 3) && (*psVar7 != 1)) {
        uVar1 = psVar7[8];
        for (uVar5 = uVar1 + 0x12 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_2 = *(undefined4 *)psVar7;
          psVar7 = psVar7 + 2;
          param_2 = param_2 + 1;
        }
        for (uVar5 = uVar1 + 0x12 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)param_2 = (char)*psVar7;
          psVar7 = (short *)((int)psVar7 + 1);
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
        return uVar4;
      }
      for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
        *param_2 = *(undefined4 *)psVar7;
        psVar7 = psVar7 + 2;
        param_2 = param_2 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(char *)param_2 = (char)*psVar7;
        psVar7 = (short *)((int)psVar7 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
      return uVar4;
    }
    if (0x11 < param_3) {
      puVar3 = *(undefined4 **)(param_1 + 0x18);
      *param_2 = *puVar3;
      param_2[1] = puVar3[1];
      param_2[2] = puVar3[2];
      uVar2 = *(undefined2 *)(puVar3 + 3);
      *(undefined2 *)(param_2 + 4) = 0;
      *(undefined2 *)(param_2 + 3) = uVar2;
      return uVar4;
    }
    uVar4 = 0x8007000e;
  }
  return uVar4;
}


