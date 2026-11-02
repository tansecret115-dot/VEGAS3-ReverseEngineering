/* Module: vidpcore.dll
   Function: FUN_5dedf0f0
   Address: 5dedf0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5dedf0f0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
  if (param_3 != 0) {
    if ((*(int *)(*(int *)(param_1 + 4) + 0xb0) == 0x1c) &&
       (iVar1 = *(int *)(param_1 + 0xc), param_4 != 0)) {
      pbVar3 = (byte *)(iVar1 + 1);
      iVar4 = param_4;
      pbVar5 = (byte *)(param_3 + 3);
      do {
        iVar2 = ((uint)pbVar5[-3] - (uint)pbVar3[-1]) * (uint)*pbVar5;
        pbVar3[-1] = (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + pbVar3[-1];
        iVar2 = ((uint)(pbVar3 + 4)[(param_3 - iVar1) + -4] - (uint)*pbVar3) * (uint)*pbVar5;
        *pbVar3 = (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *pbVar3;
        iVar2 = ((uint)pbVar5[-1] - (uint)pbVar3[1]) * (uint)*pbVar5;
        iVar4 = iVar4 + -1;
        pbVar3[1] = (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + pbVar3[1];
        pbVar3 = pbVar3 + 4;
        pbVar5 = pbVar5 + 4;
      } while (iVar4 != 0);
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_4;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x28) * param_4;
  }
  return;
}


