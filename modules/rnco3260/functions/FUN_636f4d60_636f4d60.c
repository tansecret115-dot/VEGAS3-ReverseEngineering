/* Module: rnco3260.dll
   Function: FUN_636f4d60
   Address: 636f4d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_636f4d60(int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  int *piVar4;
  
  if (1 < (int)param_4) {
    if (0 < (int)(param_4 - 1)) {
      piVar1 = (int *)(param_2 + 0x4004);
      pbVar2 = (byte *)(param_3 + 1);
      piVar4 = (int *)(param_1 + 4);
      do {
        pbVar3 = pbVar2 + 2;
        pbVar2[-1] = (&DAT_63767744)
                     [(((piVar1[-1] - *(int *)((param_1 - param_2) + (int)piVar1)) - piVar4[-1]) +
                       piVar1[-0x1000] + (uint)pbVar2[-1]) * 4];
        *pbVar2 = (&DAT_63767744)
                  [((((piVar1[-0xfff] - piVar4[0x1001]) + *piVar1) - *piVar4) + (uint)*pbVar2) * 4];
        piVar1 = piVar1 + 2;
        pbVar2 = pbVar3;
        piVar4 = piVar4 + 2;
      } while ((int)(pbVar3 + (-1 - param_3)) < (int)(param_4 - 1));
    }
    if (param_4 != (param_4 & 0xfffffffe)) {
      *(undefined *)((param_4 - 1) + param_3) =
           (&DAT_63767744)
           [(((*(int *)(param_2 + param_4 * 4) - *(int *)(param_1 + 0x4000 + param_4 * 4)) +
              *(int *)(param_2 + 0x3ffc + param_4 * 4) + (uint)*(byte *)((param_4 - 1) + param_3)) -
            *(int *)(param_1 + -4 + param_4 * 4)) * 4];
    }
    return 1;
  }
  return 1;
}


