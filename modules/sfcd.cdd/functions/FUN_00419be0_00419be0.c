/* Module: sfcd.cdd
   Function: FUN_00419be0
   Address: 00419be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00419be0(undefined2 *param_1,int param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 in_EAX;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  puVar2 = param_1;
  param_1 = (undefined2 *)CONCAT22((short)((uint)in_EAX >> 0x10),*param_1);
  iVar4 = FUN_0041f970((undefined1 *)&param_1,1);
  iVar3 = param_2;
  if (1 < (ushort)param_1) {
    if (*(int *)(param_2 + 4) == 2) {
      FUN_0041f110((char *)(puVar2 + 1),*(byte *)(puVar2 + 1));
      FUN_0041f110((char *)((int)puVar2 + 3),*(byte *)((int)puVar2 + 3));
    }
    uVar5 = ((uint)param_1 & 0xffff) - 2;
    iVar4 = uVar5 * -0x45d1745d;
    uVar5 = uVar5 / 0xb;
    if (uVar5 != 0) {
      pbVar6 = (byte *)((int)puVar2 + 7);
      do {
        bVar1 = *pbVar6;
        iVar4 = bVar1 - 0xa0;
        switch(bVar1) {
        case 0xa0:
        case 0xa1:
        case 0xa2:
        case 0xb0:
        case 0xc0:
          break;
        default:
          if (*(int *)(iVar3 + 8) == 2) {
            iVar4 = FUN_0041f110((char *)pbVar6,bVar1);
          }
        }
        if (*(int *)(iVar3 + 0xc) == 2) {
          FUN_0041f110((char *)(pbVar6 + 7),pbVar6[7]);
          FUN_0041f110((char *)(pbVar6 + 6),pbVar6[6]);
          iVar4 = FUN_0041f110((char *)(pbVar6 + 5),pbVar6[5]);
        }
        pbVar6 = pbVar6 + 0xb;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return iVar4;
}


