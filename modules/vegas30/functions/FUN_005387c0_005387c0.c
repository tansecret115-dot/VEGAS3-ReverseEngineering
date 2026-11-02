/* Module: vegas30.exe
   Function: FUN_005387c0
   Address: 005387c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 *
FUN_005387c0(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
            uint *param_6,uint *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (-1 < param_3) {
    if (*(int *)(param_1 + 0xc) == 400) {
      iVar1 = FUN_00445d30(param_1,param_2);
      piVar3 = *(int **)(iVar1 + 0x60);
      if ((piVar3 != (int *)0x0) && (param_3 < *piVar3)) {
        puVar2 = (undefined4 *)(piVar3[1] * param_3 + piVar3[2]);
        *param_5 = *puVar2;
        param_5[1] = puVar2[1];
        *param_4 = puVar2[6];
        if (param_6 != (uint *)0x0) {
          *param_6 = (uint)puVar2[8] >> 1 & 1;
        }
        if (param_7 == (uint *)0x0) {
          return puVar2;
        }
        *param_7 = (uint)puVar2[8] >> 2 & 1;
        return puVar2;
      }
    }
    else if (*(int *)(param_1 + 0xc) == 0x191) {
      FUN_0050c130(param_1);
      piVar3 = (int *)FUN_00522a00(param_2);
      if ((piVar3 != (int *)0x0) && (param_3 < *piVar3)) {
        puVar2 = (undefined4 *)(piVar3[1] * param_3 + piVar3[2]);
        *param_5 = puVar2[1];
        param_5[1] = puVar2[2];
        *param_4 = puVar2[3];
        if (param_6 != (uint *)0x0) {
          *param_6 = (uint)puVar2[5] >> 1 & 1;
        }
        if (param_7 == (uint *)0x0) {
          return puVar2;
        }
        *param_7 = (uint)puVar2[5] >> 2 & 1;
        return puVar2;
      }
    }
  }
  *param_5 = 0;
  param_5[1] = 0;
  *param_4 = 0;
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = 0;
  }
  return (undefined4 *)0x0;
}


