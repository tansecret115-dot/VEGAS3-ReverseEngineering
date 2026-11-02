/* Module: vegas30.exe
   Function: FUN_005c5c10
   Address: 005c5c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005c5c10(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined4 *puVar8;
  short *psVar9;
  
  if (param_1 != param_2) {
    if (param_1 + 1 != param_2 + 1) {
      puVar6 = param_2 + 1;
      puVar8 = param_1 + 1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    psVar9 = (short *)*param_1;
    if ((psVar9 != (short *)0x0) && (psVar7 = (short *)*param_2, psVar7 != (short *)0x0)) {
      sVar1 = *psVar9;
      if ((sVar1 == 3) || (sVar1 == 1)) {
        iVar3 = 0x10;
      }
      else {
        iVar3 = (ushort)psVar9[8] + 0x12;
      }
      if ((*psVar7 == 3) || (*psVar7 == 1)) {
        iVar4 = 0x10;
      }
      else {
        iVar4 = (ushort)psVar7[8] + 0x12;
      }
      if (iVar3 == iVar4) {
        if ((sVar1 != 3) && (sVar1 != 1)) {
          uVar2 = psVar9[8];
          for (uVar5 = uVar2 + 0x12 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)psVar9 = *(undefined4 *)psVar7;
            psVar7 = psVar7 + 2;
            psVar9 = psVar9 + 2;
          }
          for (uVar5 = uVar2 + 0x12 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)psVar9 = (char)*psVar7;
            psVar7 = (short *)((int)psVar7 + 1);
            psVar9 = (short *)((int)psVar9 + 1);
          }
          return;
        }
        for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)psVar9 = *(undefined4 *)psVar7;
          psVar7 = psVar7 + 2;
          psVar9 = psVar9 + 2;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)psVar9 = (char)*psVar7;
          psVar7 = (short *)((int)psVar7 + 1);
          psVar9 = (short *)((int)psVar9 + 1);
        }
      }
    }
  }
  return;
}


