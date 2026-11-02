/* Module: vidpcore.dll
   Function: FUN_5de95370
   Address: 5de95370
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de95370(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                double *param_6)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int local_10c;
  int local_108;
  int local_104;
  byte local_100 [256];
  
  iVar1 = FUN_5debbf10(&local_108,&local_104,&local_10c,param_1,param_2,param_3,param_4,param_5);
  iVar4 = local_10c;
  if (-1 < iVar1) {
    if (param_5 == 4) {
      FUN_5de95050(local_100,(float)*param_6,(float)param_6[1],*(undefined4 *)(param_6 + 3),
                   *(undefined4 *)((int)param_6 + 0x14));
      iVar1 = 0;
      if (0 < local_104) {
        do {
          iVar5 = 0;
          if (0 < local_108) {
            pbVar2 = (byte *)(local_10c + 3);
            do {
              bVar3 = local_100[pbVar2[-3]];
              if (*pbVar2 <= local_100[pbVar2[-3]]) {
                bVar3 = *pbVar2;
              }
              pbVar2[-3] = bVar3;
              bVar3 = local_100[pbVar2[-2]];
              if (*pbVar2 <= local_100[pbVar2[-2]]) {
                bVar3 = *pbVar2;
              }
              pbVar2[-2] = bVar3;
              bVar3 = local_100[pbVar2[-1]];
              if (*pbVar2 <= local_100[pbVar2[-1]]) {
                bVar3 = *pbVar2;
              }
              pbVar2[-1] = bVar3;
              iVar5 = iVar5 + 1;
              pbVar2 = pbVar2 + 4;
            } while (iVar5 < local_108);
          }
          local_10c = local_10c + param_3;
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_104);
      }
      if ((*(int *)(param_6 + 2) != 0) && (iVar1 = 0, 0 < local_104)) {
        do {
          iVar5 = 0;
          if (0 < local_108) {
            pbVar2 = (byte *)(iVar4 + 2);
            do {
              bVar3 = pbVar2[-2];
              if ((0xeb < bVar3) || (bVar3 < 0x10)) {
                pbVar2[-2] = -bVar3 - 1;
              }
              bVar3 = pbVar2[-1];
              if ((0xeb < bVar3) || (bVar3 < 0x10)) {
                pbVar2[-1] = -bVar3 - 1;
              }
              bVar3 = *pbVar2;
              if ((0xeb < bVar3) || (bVar3 < 0x10)) {
                *pbVar2 = -bVar3 - 1;
              }
              iVar5 = iVar5 + 1;
              pbVar2 = pbVar2 + 4;
            } while (iVar5 < local_108);
          }
          iVar4 = iVar4 + param_3;
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_104);
      }
      return 0;
    }
    iVar1 = -0x7fffbfff;
  }
  return iVar1;
}


