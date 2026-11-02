/* Module: extmondrv.dll
   Function: FUN_00402150
   Address: 00402150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00402150(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint local_4;
  
  if (*(ushort *)(param_3 + 2) < 2) {
    local_4 = (uint)*(ushort *)(param_3 + 2);
  }
  else {
    local_4 = 2;
  }
  iVar2 = 0;
  if (local_4 != 0) {
    do {
      puVar3 = param_1;
      for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *param_1 = *(undefined4 *)(param_3 + 4);
      param_1[4] = (uint)*(ushort *)(param_3 + 0xc);
      param_1[5] = 0xc0c01f40;
      iVar1 = *(int *)(param_3 + 4);
      if (iVar1 == 32000) {
        *(byte *)((int)param_1 + 0x17) = *(byte *)((int)param_1 + 0x17) & 0xd7 | 0x10;
      }
      else if (iVar1 == 0xac44) {
        *(byte *)((int)param_1 + 0x17) = *(byte *)((int)param_1 + 0x17) & 0xcf | 8;
      }
      else if (iVar1 == 48000) {
        *(byte *)((int)param_1 + 0x17) = *(byte *)((int)param_1 + 0x17) & 199;
      }
      if (local_4 == 1) {
        bVar4 = 2;
      }
      else {
        bVar4 = iVar2 != 0;
      }
      iVar2 = iVar2 + 1;
      *(byte *)((int)param_1 + 0x15) =
           (*(byte *)((int)param_1 + 0x15) ^ bVar4) & 0xf ^ *(byte *)((int)param_1 + 0x15);
      param_1[7] = -(uint)(local_4 != 1) & 4 | 1;
      param_1 = param_2;
    } while (iVar2 < (int)local_4);
  }
  return;
}


