/* Module: vegas30k.dll
   Function: FUN_011c2850
   Address: 011c2850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c2850(int param_1,uint param_2,int param_3,uint *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar2 = 1;
  if (uVar3 != 0) {
    if (param_2 == 1) {
      uVar4 = *(uint *)(param_1 + 8);
      if (uVar4 < uVar3) {
        piVar1 = *(int **)(*(int *)(param_1 + 0x10) + uVar4 * 4);
        *(uint *)(param_1 + 8) = uVar4 + 1;
        (**(code **)(*piVar1 + 0x10))(piVar1,param_3);
        uVar5 = 1;
        uVar2 = 0;
      }
    }
    else {
      uVar4 = 0;
      if (*(uint *)(param_1 + 8) < uVar3) {
        do {
          if ((param_2 <= uVar4) || (*param_4 <= uVar4)) break;
          piVar1 = *(int **)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8) * 4);
          (**(code **)(*piVar1 + 0x10))(piVar1,param_3);
          uVar5 = uVar5 + 1;
          uVar2 = 0;
          uVar3 = *(int *)(param_1 + 8) + 1;
          uVar4 = uVar4 + 1;
          param_3 = param_3 + 4;
          *(uint *)(param_1 + 8) = uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0xc));
      }
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar5;
  }
  return uVar2;
}


