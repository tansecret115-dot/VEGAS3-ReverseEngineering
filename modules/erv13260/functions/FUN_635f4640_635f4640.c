/* Module: erv13260.dll
   Function: FUN_635f4640
   Address: 635f4640
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f4640(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_5 + 0x23cb);
  iVar5 = 0x10;
  pbVar3 = (byte *)(param_3 + iVar2 * param_2 + param_1);
  puVar4 = (uint *)(param_4 + 8);
  do {
    puVar4[-2] = (uint)*pbVar3;
    puVar4[-1] = (uint)pbVar3[1];
    *puVar4 = (uint)pbVar3[2];
    puVar4[1] = (uint)pbVar3[3];
    puVar4[2] = (uint)pbVar3[4];
    puVar4[3] = (uint)pbVar3[5];
    puVar4[4] = (uint)pbVar3[6];
    puVar4[5] = (uint)pbVar3[7];
    puVar4[6] = (uint)pbVar3[8];
    puVar4[7] = (uint)pbVar3[9];
    puVar4[8] = (uint)pbVar3[10];
    puVar4[9] = (uint)pbVar3[0xb];
    puVar4[10] = (uint)pbVar3[0xc];
    puVar4[0xb] = (uint)pbVar3[0xd];
    puVar4[0xc] = (uint)pbVar3[0xe];
    pbVar1 = pbVar3 + 0xf;
    pbVar3 = pbVar3 + iVar2;
    puVar4[0xd] = (uint)*pbVar1;
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 0x10;
  } while (iVar5 != 0);
  return;
}


