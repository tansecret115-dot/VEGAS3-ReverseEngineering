/* Module: erv13260.dll
   Function: FUN_635f1000
   Address: 635f1000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f1000(int param_1,int param_2,int param_3,int param_4,byte *param_5)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0x10;
  pbVar1 = (byte *)(param_1 + param_4 * param_3 + param_2);
  do {
    *param_5 = ~*pbVar1;
    param_5[1] = ~pbVar1[1];
    param_5[2] = ~pbVar1[2];
    param_5[3] = ~pbVar1[3];
    param_5[4] = ~pbVar1[4];
    param_5[5] = ~pbVar1[5];
    param_5[6] = ~pbVar1[6];
    param_5[7] = ~pbVar1[7];
    param_5[8] = ~pbVar1[8];
    param_5[9] = ~pbVar1[9];
    param_5[10] = ~pbVar1[10];
    param_5[0xb] = ~pbVar1[0xb];
    param_5[0xc] = ~pbVar1[0xc];
    param_5[0xd] = ~pbVar1[0xd];
    param_5[0xe] = ~pbVar1[0xe];
    param_5[0xf] = ~pbVar1[0xf];
    pbVar1 = pbVar1 + param_4;
    iVar2 = iVar2 + -1;
    param_5 = param_5 + 0x10;
  } while (iVar2 != 0);
  return;
}


