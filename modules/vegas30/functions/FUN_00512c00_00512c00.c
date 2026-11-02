/* Module: vegas30.exe
   Function: FUN_00512c00
   Address: 00512c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00512c00(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  float local_10;
  float local_c;
  
  param_1[3] = (param_4 & 0xffff) << 3 | param_1[3] & 0xfff80007U;
  param_1[4] = param_2;
  param_1[5] = param_3;
  iVar1 = *(int *)(*param_1 + 0x98);
  if ((-1 < (int)param_4) && ((int)param_4 < 0xb)) {
    iVar2 = FUN_0050cd20(*param_1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                         *(undefined4 *)(iVar1 + 0x9c));
    param_1[0x34] = iVar2;
    piVar5 = param_1 + 6;
    FUN_0050db20(piVar5,iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                 *(undefined4 *)(iVar1 + 0x9c),0,0,0,0,0);
    FUN_005a61e0(param_1 + 0x1d,piVar5);
    if (*(int *)(*(int *)(*param_1 + 0x98) + 0x9c) == 0) {
      iVar2 = FUN_00522a00(0);
      piVar4 = (int *)(*(int *)(iVar2 + 4) * param_1[0x34] + 0x18 + *(int *)(iVar2 + 8));
      for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
    }
    FUN_0050c380(*param_1,param_1[0x34]);
    FUN_0053eb20(*(undefined4 *)(*param_1 + 0x90));
    param_2 = 0x15;
    param_3 = 0x15;
    FUN_0050d680(&local_10,param_1 + 4,iVar1,&param_2);
    fVar6 = (float10)fpatan((float10)local_c - (float10)(float)param_1[0x17],
                            (float10)local_10 - (float10)(float)param_1[0x16]);
    *(double *)(param_1 + 0x3a) = (double)fVar6;
    return;
  }
  param_1 = param_1 + 6;
  piVar5 = param_1;
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  FUN_0050db20(param_1,iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
               *(undefined4 *)(iVar1 + 0x9c),0,0,0,0,0);
  FUN_005a61e0(param_1,param_1);
  return;
}


