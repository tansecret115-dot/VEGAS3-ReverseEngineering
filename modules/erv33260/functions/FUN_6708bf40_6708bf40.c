/* Module: erv33260.dll
   Function: FUN_6708bf40
   Address: 6708bf40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6708bf40(undefined4 *param_1,undefined4 *param_2,byte *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  if (param_5 != 0) {
    iVar3 = 8;
    do {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1 = param_1 + 4;
      param_2 = (undefined4 *)((int)param_2 + param_4);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return;
  }
  if (param_6 != param_7) {
    param_1 = (undefined4 *)0x8;
    pbVar2 = param_3;
    do {
      iVar3 = 0;
      pbVar1 = pbVar2;
      do {
        *(char *)(iVar3 + (int)puVar4) =
             (char)(((uint)pbVar1[(int)param_2 - (int)param_3] * 0x80 * param_7 >> 0x10) + 0x10 +
                    ((uint)*pbVar1 * 0x80 * param_6 >> 0x10) >> 5);
        iVar3 = iVar3 + 1;
        pbVar1 = pbVar1 + 1;
      } while (iVar3 < 8);
      puVar4 = puVar4 + 4;
      pbVar2 = pbVar2 + param_4;
      param_1 = (undefined4 *)((int)param_1 + -1);
    } while (param_1 != (undefined4 *)0x0);
    return;
  }
  param_1 = (undefined4 *)0x8;
  pbVar2 = param_3;
  do {
    iVar3 = 0;
    pbVar1 = pbVar2;
    do {
      *(char *)(iVar3 + (int)puVar4) =
           (char)((int)(pbVar1[(int)param_2 - (int)param_3] + 1 + (uint)*pbVar1) >> 1);
      iVar3 = iVar3 + 1;
      pbVar1 = pbVar1 + 1;
    } while (iVar3 < 8);
    puVar4 = puVar4 + 4;
    pbVar2 = pbVar2 + param_4;
    param_1 = (undefined4 *)((int)param_1 + -1);
  } while (param_1 != (undefined4 *)0x0);
  return;
}


