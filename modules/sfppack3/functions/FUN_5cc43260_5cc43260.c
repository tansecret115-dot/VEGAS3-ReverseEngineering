/* Module: sfppack3.dll
   Function: FUN_5cc43260
   Address: 5cc43260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc43260(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = 0xfffffcb8;
  if (param_2 != 0) {
    piVar2 = (int *)(param_1 + 4);
    iVar3 = (int)param_3 - param_1;
    do {
      if (uVar4 == param_2 - 1) {
        *(undefined4 *)(iVar3 + (int)piVar2) = 0;
        *param_3 = 0;
      }
      else {
        *(int *)(iVar3 + (int)piVar2) = *piVar2;
        uVar1 = *piVar2 * 2 - piVar2[-1];
        *param_3 = uVar1;
        if ((int)uVar5 < (int)uVar1) {
          uVar5 = uVar1;
        }
        if ((int)uVar5 < -0x348) {
          uVar1 = 0xfffffcb8;
        }
        else {
          uVar1 = (0 < (int)uVar5) - 1 & uVar5;
        }
        *param_3 = uVar1;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 2;
      param_3 = param_3 + 2;
    } while (uVar4 < param_2);
  }
  return;
}


