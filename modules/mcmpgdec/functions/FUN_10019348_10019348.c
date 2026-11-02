/* Module: mcmpgdec.dll
   Function: FUN_10019348
   Address: 10019348
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10019348(int *param_1,int *param_2,int param_3,int param_4,byte *param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = 0xf;
  iVar1 = *param_2;
  puVar4 = (uint *)(param_3 * 2 + iVar1 * param_4 + *param_1);
  pbVar2 = param_5 + 0x100;
  do {
    *puVar4 = (uint)pbVar2[0x80] << 0x18 | (uint)*pbVar2 << 8 | (uint)*param_5 |
              (uint)param_5[1] << 0x10;
    puVar4[1] = (uint)pbVar2[0x81] << 0x18 | (uint)pbVar2[1] << 8 | (uint)param_5[2] |
                (uint)param_5[3] << 0x10;
    puVar4[2] = (uint)pbVar2[0x82] << 0x18 | (uint)pbVar2[2] << 8 | (uint)param_5[4] |
                (uint)param_5[5] << 0x10;
    puVar4[3] = (uint)pbVar2[0x83] << 0x18 | (uint)pbVar2[3] << 8 | (uint)param_5[6] |
                (uint)param_5[7] << 0x10;
    puVar4[4] = (uint)pbVar2[0x84] << 0x18 | (uint)pbVar2[4] << 8 | (uint)param_5[8] |
                (uint)param_5[9] << 0x10;
    puVar4[5] = (uint)pbVar2[0x85] << 0x18 | (uint)pbVar2[5] << 8 | (uint)param_5[10] |
                (uint)param_5[0xb] << 0x10;
    puVar4[6] = (uint)pbVar2[0x86] << 0x18 | (uint)pbVar2[6] << 8 | (uint)param_5[0xc] |
                (uint)param_5[0xd] << 0x10;
    puVar4[7] = (uint)pbVar2[0x87] << 0x18 | (uint)pbVar2[7] << 8 | (uint)param_5[0xe] |
                (uint)param_5[0xf] << 0x10;
    puVar4 = (uint *)((int)puVar4 + iVar1);
    param_5 = param_5 + 0x10;
    pbVar2 = pbVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return;
}


