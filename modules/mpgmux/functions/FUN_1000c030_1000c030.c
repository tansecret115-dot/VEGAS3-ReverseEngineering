/* Module: mpgmux.dll
   Function: FUN_1000c030
   Address: 1000c030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000c030(int param_1,byte *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_4;
  uVar2 = param_3;
  pbVar1 = param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 1;
  param_2[3] = 0xba;
  param_2 = param_2 + 4;
  if (1 < *(int *)(param_1 + 0x2c)) {
    FUN_1000c280(param_1,param_3,param_4,'\x01',(int *)&param_2);
    *param_2 = (byte)(*(int *)(param_1 + 0x14b4) >> 0xe);
    param_2[1] = (byte)(*(int *)(param_1 + 0x14b4) >> 6);
    param_2[2] = *(char *)(param_1 + 0x14b4) << 2 | 3;
    param_2[3] = 0xf8;
    *(uint *)(pbVar1 + 0x10) = uVar2;
    *(uint *)(pbVar1 + 0x14) = uVar3;
    return;
  }
  FUN_1000c280(param_1,param_3,param_4,'\x02',(int *)&param_2);
  *param_2 = (byte)(*(int *)(param_1 + 0x14b4) >> 0xf) | 0x80;
  param_2[1] = (byte)(*(int *)(param_1 + 0x14b4) >> 7);
  param_2[2] = *(char *)(param_1 + 0x14b4) << 1 | 1;
  *(uint *)(pbVar1 + 0x10) = uVar2;
  *(uint *)(pbVar1 + 0x14) = uVar3;
  return;
}


