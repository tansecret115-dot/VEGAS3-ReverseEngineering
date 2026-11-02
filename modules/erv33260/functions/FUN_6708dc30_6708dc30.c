/* Module: erv33260.dll
   Function: FUN_6708dc30
   Address: 6708dc30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall
FUN_6708dc30(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  
  bVar4 = param_3 != 0;
  uVar2 = 0;
  param_3 = 0;
  do {
    iVar1 = *(int *)(param_4 + uVar2 * 4);
    if (iVar1 < -0x80000) {
      sVar3 = -0x7fff;
    }
    else {
      sVar3 = (short)(iVar1 >> 4);
    }
    bVar5 = sVar3 < 0;
    if (bVar5) {
      sVar3 = -sVar3;
    }
    sVar3 = (short)((int)((*(int *)(&DAT_670911f0 + param_1 * 4) * 0x20 * (int)sVar3 >> 0x10) +
                         (-(uint)bVar4 & 5) + 5) >> 5);
    if (bVar5) {
      sVar3 = -sVar3;
    }
    *(short *)(param_5 + uVar2 * 2) = sVar3;
    *(int *)(param_6 + uVar2 * 4) = *(int *)(&DAT_67091170 + param_1 * 4) * (int)sVar3 + 8 >> 4;
    if (uVar2 == 0) {
      param_1 = param_2;
    }
    param_3 = param_3 | (int)sVar3;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return param_3;
}


