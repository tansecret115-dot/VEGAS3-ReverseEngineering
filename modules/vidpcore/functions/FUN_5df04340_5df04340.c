/* Module: vidpcore.dll
   Function: FUN_5df04340
   Address: 5df04340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5df04340(int param_1,double *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_158 [11];
  undefined2 local_12c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)(param_1 + 0x308);
  iVar2 = *piVar1;
  if (*(int *)(param_1 + 0x2ec) != 0) {
    if ((((param_2 == (double *)0x0) || (_DAT_5df18830 < *param_2)) || (*param_2 < _DAT_5df18838))
       || ((_DAT_5df18830 < param_2[1] || (param_2[1] < _DAT_5df18838)))) {
      local_18 = 0;
      local_158[0] = 0;
      local_14 = 0;
      local_158[1] = 0x3fe00000;
      local_10 = 0;
      local_158[2] = 0;
      local_158[3] = 0x3fe00000;
      local_158[4] = 2;
      local_158[5] = 1;
      local_158[6] = 0xffffffff;
      local_158[7] = 0x3f800000;
      local_158[8] = 0x3f000000;
      local_158[9] = 0x3f000000;
      local_158[10] = 0;
      local_12c = 0;
      local_28 = 0;
      local_24 = 0xffffff;
      local_20 = 0;
      local_1c = 0x3f800000;
      local_c = 0;
      local_8 = 1;
      local_4 = 0;
    }
    else {
      puVar4 = local_158;
      for (iVar3 = 0x56; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *(undefined4 *)param_2;
        param_2 = (double *)((int)param_2 + 4);
        puVar4 = puVar4 + 1;
      }
    }
    if (iVar2 < *(int *)(param_1 + 0x300)) {
      FUN_5ded4b10(piVar1,iVar2,local_158,1);
      return iVar2;
    }
  }
  return -1;
}


