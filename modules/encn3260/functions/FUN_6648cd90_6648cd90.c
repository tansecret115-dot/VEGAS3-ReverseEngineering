/* Module: encn3260.dll
   Function: FUN_6648cd90
   Address: 6648cd90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6648cd90(int param_1,undefined2 *param_2,undefined2 *param_3,long *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  
  puVar2 = (undefined4 *)FUN_664be280(param_1);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    pbVar7 = (byte *)*puVar2;
    pbVar8 = &DAT_664e2f5c;
    pbVar5 = pbVar7;
    do {
      bVar1 = *pbVar5;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_6648cdd3:
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_6648cdd8;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_6648cdd3;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_6648cdd8:
    if (iVar6 == 0) {
      pcVar3 = strrchr((char *)puVar2[3],0x3d);
      if (pcVar3 != (char *)0x0) {
        lVar4 = strtol(pcVar3 + 1,(char **)0x0,10);
        *param_2 = (short)lVar4;
      }
    }
    else {
      pbVar8 = &DAT_664e2f58;
      pbVar5 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_6648ce38:
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_6648ce3d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_6648ce38;
        pbVar5 = pbVar5 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_6648ce3d:
      if (iVar6 == 0) {
        lVar4 = strtol((char *)puVar2[3],(char **)0x0,10);
        *param_3 = (short)lVar4;
      }
      else {
        pcVar3 = s_rtptime_664e2f50;
        do {
          bVar1 = *pbVar7;
          bVar9 = bVar1 < (byte)*pcVar3;
          if (bVar1 != *pcVar3) {
LAB_6648ce84:
            iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_6648ce89;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar9 = bVar1 < (byte)pcVar3[1];
          if (bVar1 != pcVar3[1]) goto LAB_6648ce84;
          pbVar7 = pbVar7 + 2;
          pcVar3 = pcVar3 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_6648ce89:
        if (iVar6 == 0) {
          lVar4 = strtol((char *)puVar2[3],(char **)0x0,10);
          *param_4 = lVar4;
        }
      }
    }
    puVar2 = (undefined4 *)FUN_664be2a0(param_1);
  } while( true );
}


