/* Module: vegas30.exe
   Function: FUN_005f12a0
   Address: 005f12a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005f12a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  short *psVar8;
  
  uVar3 = 0x80004005;
  if (*(int **)(param_1 + 0x130) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x130);
    iVar6 = 0;
    uVar3 = 1;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x130) + 8) + iVar6 * 4);
        if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 2)) &&
           ((psVar8 = *(short **)(iVar2 + 0x2c), psVar8[6] != *(short *)(param_2 + 3) ||
            (((psVar8[7] != *(short *)((int)param_2 + 0xe) || (*(int *)(psVar8 + 2) != param_2[1]))
             || (*(int *)(psVar8 + 4) != param_2[2])))))) {
          if ((*psVar8 == 3) || (*psVar8 == 1)) {
            uVar4 = 0x10;
          }
          else {
            uVar4 = (ushort)psVar8[8] + 0x12;
          }
          puVar7 = param_2;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)psVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            psVar8 = psVar8 + 2;
          }
          uVar3 = 0;
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)psVar8 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            psVar8 = (short *)((int)psVar8 + 1);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
  }
  return uVar3;
}


