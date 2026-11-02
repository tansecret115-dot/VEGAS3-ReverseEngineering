/* Module: erv13260.dll
   Function: FUN_635f9c80
   Address: 635f9c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_635f9c80(int param_1,int param_2,int *param_3,int param_4,int *param_5,int param_6,uint param_7,
            int param_8)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  
  piVar3 = param_5;
  iVar4 = *(int *)(param_8 + 0x23cb);
  if (*(int *)(param_8 + 0x1ce8) != 0) {
    iVar4 = (-(uint)(*(int *)(param_8 + 0x1cec) != 0) & 0x20) + 0x20 + iVar4;
  }
  iVar7 = param_3[2] + (param_1 + (param_7 & 1) * 8 + *param_3) * 2;
  iVar1 = param_3[3] + (param_3[1] + (param_7 & 2) * 4 + param_2) * 2;
  if (param_6 == 0x10) {
    piVar3 = param_5 + 2;
    pbVar5 = (byte *)(iVar7 + 4 + iVar4 * iVar1 * 2 + param_4);
    iVar7 = 0x10;
    do {
      piVar3[-2] = piVar3[-2] + (uint)pbVar5[-4];
      piVar3[-1] = piVar3[-1] + (uint)pbVar5[-2];
      *piVar3 = *piVar3 + (uint)*pbVar5;
      piVar3[1] = piVar3[1] + (uint)pbVar5[2];
      piVar3[2] = piVar3[2] + (uint)pbVar5[4];
      piVar3[3] = piVar3[3] + (uint)pbVar5[6];
      piVar3[4] = piVar3[4] + (uint)pbVar5[8];
      piVar3[5] = piVar3[5] + (uint)pbVar5[10];
      piVar3[6] = piVar3[6] + (uint)pbVar5[0xc];
      piVar3[7] = piVar3[7] + (uint)pbVar5[0xe];
      piVar3[8] = piVar3[8] + (uint)pbVar5[0x10];
      piVar3[9] = piVar3[9] + (uint)pbVar5[0x12];
      piVar3[10] = piVar3[10] + (uint)pbVar5[0x14];
      piVar3[0xb] = piVar3[0xb] + (uint)pbVar5[0x16];
      piVar3[0xc] = piVar3[0xc] + (uint)pbVar5[0x18];
      piVar3[0xd] = piVar3[0xd] + (uint)pbVar5[0x1a];
      piVar3 = piVar3 + 0x10;
      pbVar5 = pbVar5 + iVar4 * 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  else if (0 < param_6) {
    pbVar8 = (byte *)(iVar7 + iVar4 * iVar1 * 2 + param_4);
    param_5 = (int *)param_6;
    iVar7 = param_6;
    pbVar5 = pbVar8;
    piVar6 = piVar3;
    do {
      do {
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 2;
        *piVar3 = *piVar3 + (uint)bVar2;
        iVar7 = iVar7 + -1;
        piVar3 = piVar3 + 1;
      } while (iVar7 != 0);
      piVar3 = piVar6 + 0x10;
      pbVar8 = pbVar5 + iVar4 * 4;
      param_5 = (int *)((int)param_5 + -1);
      iVar7 = param_6;
      pbVar5 = pbVar8;
      piVar6 = piVar3;
    } while (param_5 != (int *)0x0);
    return;
  }
  return;
}


