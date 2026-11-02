/* Module: sfcdi.dll
   Function: FUN_5bf52490
   Address: 5bf52490
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf52490(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort *puVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  
  iVar2 = param_1;
  iVar8 = 0;
  FUN_5bf51f10(param_1);
  *param_4 = param_2;
  param_4[1] = param_3;
  *(undefined1 *)((int)param_4 + 0xb) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_4 + 3) = *(undefined1 *)(param_1 + 2);
  *(undefined4 *)((int)param_4 + 0xd) = *(undefined4 *)(param_1 + 4);
  param_4[5] = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(param_4 + 0x2a) = *(undefined2 *)(param_1 + 0x9c);
  *(undefined2 *)((int)param_4 + 0xaa) = *(undefined2 *)(param_1 + 0x9e);
  *(undefined2 *)(param_4 + 0x2b) = *(undefined2 *)(param_1 + 0xa0);
  *(undefined1 *)((int)param_4 + 9) = *(undefined1 *)(param_1 + 0xa2);
  *(undefined1 *)((int)param_4 + 0xae) = *(undefined1 *)(param_1 + 0xa3);
  *(undefined1 *)(param_4 + 2) = 1;
  memmove(param_4 + 6,(void *)(param_1 + 0xc),0x10);
  memmove(param_4 + 10,(void *)(param_1 + 0x1c),0x80);
  memmove((void *)((int)param_4 + 0xaf),(void *)(param_1 + 0xa4),0x40);
  FUN_5bf29dd0((int *)param_4[0x3c],0,-1,1);
  FUN_5bf29dd0((int *)param_4[0x3d],0,-1,1);
  FUN_5bf29dd0((int *)param_4[0x3e],0,-1,1);
  FUN_5bf29dd0((int *)param_4[0x44],0,-1,1);
  FUN_5bf29dd0((int *)param_4[0x45],0,-1,1);
  FUN_5bf29dd0((int *)param_4[0x46],0,-1,1);
  if (*(ushort *)(param_1 + 0xe4) != 0) {
    puVar3 = (ushort *)((uint)*(ushort *)(param_1 + 0xe4) + param_1);
    FUN_5bf51f40((undefined1 *)puVar3);
    puVar5 = puVar3 + 4;
    param_1 = 0;
    if (*puVar3 != 0) {
      do {
        if ((char)*puVar5 == '0') {
          param_4[0x3f] = 1;
        }
        if ((char)*puVar5 == 'B') {
          param_4[0x43] = 1;
        }
        iVar8 = FUN_5bf29ae0((int *)param_4[0x3c],-1,(int *)puVar5,1);
        if (iVar8 < 0) break;
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 4;
      } while ((ushort)param_1 < *puVar3);
    }
    param_1 = 0;
    if (puVar3[1] != 0) {
      do {
        if ((char)*puVar5 == '0') {
          param_4[0x40] = 1;
        }
        if ((char)*puVar5 == 'B') {
          param_4[0x43] = 1;
        }
        iVar8 = FUN_5bf29ae0((int *)param_4[0x3d],-1,(int *)puVar5,1);
        if (iVar8 < 0) break;
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 4;
      } while ((ushort)param_1 < puVar3[1]);
    }
    param_1 = 0;
    if (puVar3[2] != 0) {
      do {
        if ((char)*puVar5 == ' ') {
          param_4[0x42] = 1;
        }
        if ((char)*puVar5 == '0') {
          param_4[0x41] = 1;
        }
        if ((char)*puVar5 == 'B') {
          param_4[0x43] = 1;
        }
        iVar8 = FUN_5bf29ae0((int *)param_4[0x3e],-1,(int *)puVar5,1);
        if (iVar8 < 0) break;
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 4;
      } while ((ushort)param_1 < puVar3[2]);
    }
  }
  if (*(ushort *)(iVar2 + 0xe8) != 0) {
    pbVar6 = (byte *)((uint)*(ushort *)(iVar2 + 0xe8) + iVar2);
    param_1 = 0;
    if (*(char *)(iVar2 + 3) != '\0') {
      do {
        FUN_5bf51f50((int)pbVar6);
        if (((*pbVar6 & 0x30) == 0x10) && ((*pbVar6 & 0xc0) != 0x40)) {
          *(char *)(param_4 + 2) = *(char *)(param_4 + 2) + '\x01';
        }
        iVar8 = FUN_5bf29ae0((int *)param_4[0x45],-1,(int *)pbVar6,1);
        if (iVar8 < 0) break;
        pbVar6 = pbVar6 + 0x18;
        param_1 = param_1 + 1;
      } while ((ushort)param_1 < (ushort)*(byte *)(iVar2 + 3));
    }
  }
  if (*(ushort *)(iVar2 + 0xea) != 0) {
    piVar7 = (int *)((uint)*(ushort *)(iVar2 + 0xea) + iVar2);
    param_1 = 0;
    if (*(char *)(iVar2 + 3) != '\0') {
      do {
        FUN_5bf51f70((undefined1 *)piVar7);
        iVar8 = FUN_5bf29ae0((int *)param_4[0x46],-1,piVar7,1);
        if (iVar8 < 0) break;
        piVar7 = piVar7 + 1;
        param_1 = param_1 + 1;
      } while ((ushort)param_1 < (ushort)*(byte *)(iVar2 + 3));
    }
  }
  uVar1 = *(ushort *)(iVar2 + 0xe6);
  if (uVar1 != 0) {
    uVar4 = 0;
    if (*(char *)(iVar2 + 2) != '\0') {
      while (iVar8 = FUN_5bf29ae0((int *)param_4[0x44],(uint)uVar4,
                                  (int *)((uint)uVar1 + iVar2 + (uint)uVar4),1), -1 < iVar8) {
        uVar4 = uVar4 + 1;
        if (*(byte *)(iVar2 + 2) <= uVar4) {
          return iVar8;
        }
      }
    }
  }
  return iVar8;
}


