/* Module: erv13260.dll
   Function: FUN_635f8980
   Address: 635f8980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_635f8980(int param_1,int param_2,int *param_3,int param_4,uint *param_5,int param_6,uint param_7
            ,int param_8)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int local_8;
  
  local_8 = *(int *)(param_8 + 0x23cb);
  if (*(int *)(param_8 + 0x1ce8) != 0) {
    local_8 = (-(uint)(*(int *)(param_8 + 0x1cec) != 0) & 0x20) + 0x20 + local_8;
  }
  iVar6 = param_1 + (param_7 & 1) * 8 + *param_3;
  iVar2 = param_3[1] + (param_7 & 2) * 4 + param_2;
  if (param_6 == 0x10) {
    iVar2 = iVar2 * 2;
    param_6 = 0x10;
    puVar5 = param_5 + 2;
    do {
      iVar4 = iVar2 + param_3[3];
      iVar2 = iVar2 + 2;
      pbVar3 = (byte *)(param_4 + (iVar4 * local_8 + iVar6) * 2 + param_3[2]);
      puVar5[-2] = (uint)*pbVar3;
      puVar5[-1] = (uint)pbVar3[2];
      *puVar5 = (uint)pbVar3[4];
      puVar5[1] = (uint)pbVar3[6];
      puVar5[2] = (uint)pbVar3[8];
      puVar5[3] = (uint)pbVar3[10];
      puVar5[4] = (uint)pbVar3[0xc];
      puVar5[5] = (uint)pbVar3[0xe];
      puVar5[6] = (uint)pbVar3[0x10];
      puVar5[7] = (uint)pbVar3[0x12];
      puVar5[8] = (uint)pbVar3[0x14];
      puVar5[9] = (uint)pbVar3[0x16];
      puVar5[10] = (uint)pbVar3[0x18];
      puVar5[0xb] = (uint)pbVar3[0x1a];
      puVar5[0xc] = (uint)pbVar3[0x1c];
      puVar5[0xd] = (uint)pbVar3[0x1e];
      param_6 = param_6 + -1;
      puVar5 = puVar5 + 0x10;
    } while (param_6 != 0);
  }
  else if (0 < param_6) {
    param_8 = iVar2 * 2;
    param_7 = param_6;
    do {
      pbVar3 = (byte *)(param_4 + ((param_8 + param_3[3]) * local_8 + iVar6) * 2 + param_3[2]);
      puVar5 = param_5;
      iVar2 = param_6;
      do {
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 2;
        *puVar5 = (uint)bVar1;
        iVar2 = iVar2 + -1;
        puVar5 = puVar5 + 1;
      } while (iVar2 != 0);
      param_8 = param_8 + 2;
      param_5 = param_5 + 0x10;
      param_7 = param_7 - 1;
    } while (param_7 != 0);
    return;
  }
  return;
}


