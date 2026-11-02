/* Module: erv33260.dll
   Function: FUN_67084eb0
   Address: 67084eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_67084eb0(undefined4 *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  if (param_5 != 0) {
    iVar3 = 0x10;
    do {
      *param_1 = *(undefined4 *)param_2;
      param_1[1] = *(undefined4 *)(param_2 + 4);
      param_1[2] = *(undefined4 *)(param_2 + 8);
      param_1[3] = *(undefined4 *)(param_2 + 0xc);
      param_2 = param_2 + param_4;
      iVar3 = iVar3 + -1;
      param_1 = param_1 + 4;
    } while (iVar3 != 0);
    return;
  }
  if (param_6 != param_7) {
    param_1 = (undefined4 *)0x10;
    pbVar2 = param_2;
    do {
      iVar3 = 0;
      pbVar1 = pbVar2;
      do {
        *(char *)(iVar3 + (int)puVar4) =
             (char)(((uint)pbVar1[param_3 - (int)param_2] * 0x80 * param_6 >> 0x10) + 0x10 +
                    ((uint)*pbVar1 * 0x80 * param_7 >> 0x10) >> 5);
        iVar3 = iVar3 + 1;
        pbVar1 = pbVar1 + 1;
      } while (iVar3 < 0x10);
      puVar4 = puVar4 + 4;
      pbVar2 = pbVar2 + param_4;
      param_1 = (undefined4 *)((int)param_1 + -1);
    } while (param_1 != (undefined4 *)0x0);
    return;
  }
  param_1 = (undefined4 *)0x10;
  pbVar2 = param_2;
  do {
    iVar3 = 0;
    pbVar1 = pbVar2;
    do {
      *(char *)(iVar3 + (int)puVar4) =
           (char)((int)(pbVar1[param_3 - (int)param_2] + 1 + (uint)*pbVar1) >> 1);
      iVar3 = iVar3 + 1;
      pbVar1 = pbVar1 + 1;
    } while (iVar3 < 0x10);
    puVar4 = puVar4 + 4;
    pbVar2 = pbVar2 + param_4;
    param_1 = (undefined4 *)((int)param_1 + -1);
  } while (param_1 != (undefined4 *)0x0);
  return;
}


