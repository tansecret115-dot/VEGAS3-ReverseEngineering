/* Module: vegas30k.dll
   Function: FUN_01013ef0
   Address: 01013ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01013ef0(undefined4 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = 0;
  piVar7 = *(int **)(*(int *)*param_1 + 0x34c);
  if (param_1[1] == 0) {
    piVar7[9] = 0;
    return 0;
  }
  do {
    iVar2 = *(int *)(param_1[6] + 4);
    iVar3 = *(int *)(param_1[6] + 8);
    iVar8 = 0;
    while( true ) {
      piVar6 = *(int **)(iVar2 * local_c + iVar3);
      if (piVar6 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar6;
      }
      if (iVar5 <= iVar8) break;
      if (piVar6 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar6;
      }
      if ((iVar8 < 0) || (iVar5 + -1 < iVar8)) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)(piVar6[1] * iVar8 + piVar6[2]);
      }
      iVar5 = *piVar6;
      piVar6 = *(int **)(iVar5 + 0x34c);
      piVar7[9] = (int)piVar6;
      *(undefined2 *)(piVar6 + 1) = *(undefined2 *)(param_1 + 0x1c);
      *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
      piVar7 = piVar6;
      if (*(int *)(iVar5 + 0x21c) == 0) {
        uVar4 = param_1[0x44];
        local_14 = CONCAT13((char)uVar4,
                            CONCAT12((char)((uint)uVar4 >> 8),
                                     CONCAT11((char)((uint)uVar4 >> 0x10),
                                              (char)((uint)uVar4 >> 0x18))));
        *(undefined2 *)((int)piVar6 + 0x162) = 0x100;
        *(undefined4 *)((int)piVar6 + 0x15e) = local_14;
        iVar8 = iVar8 + 1;
      }
      else {
        iVar5 = piVar6[0x16];
        iVar8 = iVar8 + 1;
        local_10 = CONCAT13((char)iVar5,
                            CONCAT12((char)((uint)iVar5 >> 8),
                                     CONCAT11((char)((uint)iVar5 >> 0x10),
                                              (char)((uint)iVar5 >> 0x18))));
        *(undefined4 *)((int)piVar6 + 0x15e) = local_10;
        uVar1 = *(undefined2 *)(*(int *)(*(int *)(*piVar6 + 0x21c) + 0x34c) + 4);
        local_16 = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
        *(undefined2 *)((int)piVar6 + 0x162) = local_16;
      }
    }
    local_c = local_c + 1;
  } while (local_c < (uint)param_1[1]);
  piVar7[9] = 0;
  return 0;
}


