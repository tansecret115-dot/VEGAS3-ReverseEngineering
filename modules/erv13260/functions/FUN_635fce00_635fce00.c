/* Module: erv13260.dll
   Function: FUN_635fce00
   Address: 635fce00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fce00(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_5 + 0x23cb);
  iVar1 = *(int *)(param_5 + 8);
  puVar2 = (undefined1 *)((iVar5 * param_2 + param_1) * 0x10 + *param_4);
  iVar4 = 0x10;
  puVar3 = (undefined1 *)(param_3 + 8);
  do {
    *puVar2 = puVar3[-8];
    puVar2[1] = puVar3[-4];
    puVar2[2] = *puVar3;
    puVar2[3] = puVar3[4];
    puVar2[4] = puVar3[8];
    puVar2[5] = puVar3[0xc];
    puVar2[6] = puVar3[0x10];
    puVar2[7] = puVar3[0x14];
    puVar2[8] = puVar3[0x18];
    puVar2[9] = puVar3[0x1c];
    puVar2[10] = puVar3[0x20];
    puVar2[0xb] = puVar3[0x24];
    puVar2[0xc] = puVar3[0x28];
    puVar2[0xd] = puVar3[0x2c];
    puVar2[0xe] = puVar3[0x30];
    puVar2[0xf] = puVar3[0x34];
    puVar2 = puVar2 + iVar5;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 0x40;
  } while (iVar4 != 0);
  iVar5 = 8;
  iVar4 = (iVar1 * param_2 + param_1) * 8;
  puVar2 = (undefined1 *)(param_4[1] + iVar4);
  puVar3 = (undefined1 *)(param_3 + 0x408);
  do {
    *puVar2 = puVar3[-8];
    puVar2[1] = puVar3[-4];
    puVar2[2] = *puVar3;
    puVar2[3] = puVar3[4];
    puVar2[4] = puVar3[8];
    puVar2[5] = puVar3[0xc];
    puVar2[6] = puVar3[0x10];
    puVar2[7] = puVar3[0x14];
    puVar2 = puVar2 + iVar1;
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + 0x20;
  } while (iVar5 != 0);
  puVar2 = (undefined1 *)(param_4[2] + iVar4);
  iVar5 = 8;
  puVar3 = (undefined1 *)(param_3 + 0x508);
  do {
    *puVar2 = puVar3[-8];
    puVar2[1] = puVar3[-4];
    puVar2[2] = *puVar3;
    puVar2[3] = puVar3[4];
    puVar2[4] = puVar3[8];
    puVar2[5] = puVar3[0xc];
    puVar2[6] = puVar3[0x10];
    puVar2[7] = puVar3[0x14];
    puVar2 = puVar2 + iVar1;
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + 0x20;
  } while (iVar5 != 0);
  return;
}


