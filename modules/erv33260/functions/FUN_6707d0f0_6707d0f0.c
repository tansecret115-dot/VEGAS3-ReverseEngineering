/* Module: erv33260.dll
   Function: FUN_6707d0f0
   Address: 6707d0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6707d0f0(void *this,byte *param_1,byte *param_2,int param_3,uint param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar2 = param_2;
  if (*(int *)((int)this + 0x34) == 0) {
    param_2 = (byte *)param_5;
    uVar4 = param_4 >> 2;
    do {
      do {
        pbVar3 = pbVar2 + 4;
        pbVar1 = param_1 + 4;
        *param_1 = (&DAT_6709a587)[(uint)*param_1 - (uint)*pbVar2] + *pbVar2;
        param_1[1] = (&DAT_6709a587)[(uint)param_1[1] - (uint)pbVar2[1]] + pbVar2[1];
        param_1[2] = (&DAT_6709a587)[(uint)param_1[2] - (uint)pbVar2[2]] + pbVar2[2];
        uVar4 = uVar4 - 1;
        param_1[3] = (&DAT_6709a587)[(uint)param_1[3] - (uint)pbVar2[3]] + pbVar2[3];
        param_1 = pbVar1;
        pbVar2 = pbVar3;
      } while (uVar4 != 0);
      param_1 = pbVar1 + (param_3 - param_4);
      param_2 = param_2 + -1;
      uVar4 = param_4 >> 2;
    } while (param_2 != (byte *)0x0);
  }
  return;
}


