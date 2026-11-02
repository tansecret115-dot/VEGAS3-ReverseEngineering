/* Module: vegas30k.dll
   Function: FUN_011283e0
   Address: 011283e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011283e0(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    uVar6 = *(uint *)(param_2 + 0x31);
    iVar3 = *(int *)(param_2 + 0x2d) + param_4;
    if ((int)uVar6 < iVar3) {
      puVar2 = *(undefined4 **)(param_2 + 0x35);
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(param_2 + 0x2d) = 0;
        *(int *)(param_2 + 0x31) = param_4 + 8;
        uVar5 = FUN_01155eb0(param_1,(param_4 + 8) * 0x10);
        *(undefined4 *)(param_2 + 0x35) = uVar5;
      }
      else {
        iVar3 = iVar3 + 8;
        *(int *)(param_2 + 0x31) = iVar3;
        puVar4 = (undefined4 *)FUN_01155eb0(param_1,iVar3 * 0x10);
        *(undefined4 **)(param_2 + 0x35) = puVar4;
        puVar8 = puVar2;
        for (iVar3 = (uVar6 & 0xfffffff) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar4 = puVar4 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        FUN_01155ef0(param_1,puVar2);
      }
    }
    if (0 < param_4) {
      piVar9 = (int *)(param_3 + 8);
      do {
        piVar7 = (int *)(*(int *)(param_2 + 0x2d) * 0x10 + *(int *)(param_2 + 0x35));
        if (*piVar9 == 0) {
          *piVar9 = (int)&DAT_011db13c;
        }
        if (*(char *)*piVar9 == '\0') {
          piVar7[3] = 0;
          *piVar7 = -1;
        }
        else {
          uVar6 = 0xffffffff;
          pcVar10 = (char *)*piVar9;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          piVar7[3] = ~uVar6 - 1;
          *piVar7 = piVar9[-2];
        }
        piVar7[2] = *piVar9;
        piVar7[1] = piVar9[-1];
        param_4 = param_4 + -1;
        *(int *)(param_2 + 0x2d) = *(int *)(param_2 + 0x2d) + 1;
        piVar9 = piVar9 + 4;
      } while (param_4 != 0);
    }
  }
  return;
}


