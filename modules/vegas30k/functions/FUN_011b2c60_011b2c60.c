/* Module: vegas30k.dll
   Function: FUN_011b2c60
   Address: 011b2c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011b2c60(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  uVar3 = 1;
  if (*(int **)(param_1 + 0x1a0) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x1a0);
    iVar7 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1a0) + 8);
        iVar5 = *(int *)(*(int *)(param_1 + 0x1a0) + 4) * iVar7;
        uVar2 = *(uint *)(iVar5 + 0x10 + iVar4);
        piVar6 = (int *)(iVar5 + iVar4);
        if (param_2 <= piVar6[5] + uVar2) {
          if (param_2 < uVar2) {
            if (*(int *)(piVar6[2] + param_3 * 4) == 0) goto LAB_011b2cf4;
            *(undefined4 *)(piVar6[2] + param_3 * 4) = 0;
            iVar4 = piVar6[1];
            if (iVar4 == *piVar6) goto LAB_011b2cee;
          }
          else if (param_2 != *(int *)(piVar6[2] + param_3 * 4) + uVar2) {
            *(uint *)(piVar6[2] + param_3 * 4) = param_2 - uVar2;
            iVar4 = piVar6[1];
LAB_011b2cee:
            piVar6[1] = iVar4 + -1;
          }
          uVar3 = 0;
        }
LAB_011b2cf4:
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
  }
  return uVar3;
}


