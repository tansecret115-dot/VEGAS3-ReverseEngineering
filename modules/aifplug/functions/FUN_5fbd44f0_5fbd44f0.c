/* Module: aifplug.dll
   Function: FUN_5fbd44f0
   Address: 5fbd44f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd44f0(int *param_1,uint param_2,undefined4 param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((int *)param_1[2] == (int *)0x0) {
    return 0x800a0026;
  }
  if (param_4 == 0) {
    param_1[4] = 0;
    param_1[3] = -1;
  }
  else {
    if (param_4 == 1) {
      if (param_2 != 0) {
        do {
          if (*(int *)param_1[2] <= param_1[3]) {
            return 0x800a0026;
          }
          uVar1 = param_1[4];
          if (uVar1 < (uint)param_1[9]) {
            uVar2 = param_1[9] - uVar1;
            if (param_2 - uVar4 <= uVar2) {
              uVar2 = param_2 - uVar4;
            }
            uVar4 = uVar4 + uVar2;
            param_1[4] = uVar1 + uVar2;
          }
          else {
            iVar3 = *(int *)(((int *)param_1[2])[2] + param_1[3] * 4);
            if (iVar3 != 0) {
              iVar3 = (**(code **)(*param_1 + 0x3c))(iVar3,param_1 + 8,param_1 + 9);
              if (iVar3 < 0) {
                param_1[3] = param_1[3] + 1;
              }
              else {
                param_1[4] = 0;
              }
            }
          }
        } while (uVar4 < param_2);
      }
      goto LAB_5fbd45a2;
    }
    if (param_4 != 2) goto LAB_5fbd45a2;
    param_1[4] = 0;
    param_1[3] = *(int *)param_1[2];
  }
  (**(code **)(*param_1 + 0x3c))(0,0,0);
LAB_5fbd45a2:
  if (param_5 != (uint *)0x0) {
    *param_5 = -(uint)(param_1[3] != 0xffffffff) & param_1[3];
    param_5[1] = 0;
  }
  return 0;
}


