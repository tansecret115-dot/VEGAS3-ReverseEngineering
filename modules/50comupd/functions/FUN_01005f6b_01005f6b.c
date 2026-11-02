/* Module: 50comupd.exe
   Function: FUN_01005f6b
   Address: 01005f6b
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01005f6b(undefined4 *param_1,char *param_2,short param_3,short param_4)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 uVar13;
  int local_28 [6];
  ushort local_10;
  short local_8;
  short local_6;
  
  puVar3 = param_1;
  uVar4 = 0xffffffff;
  pcVar8 = (char *)((int)param_1 + 0x5b9);
  do {
    pcVar11 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar11 + -uVar4;
  pcVar11 = (char *)((int)param_1 + 0x6ba);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar8 = param_2;
  do {
    pcVar11 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar2 != '\0');
  puVar6 = (undefined4 *)~uVar4;
  iVar7 = -1;
  pcVar8 = (char *)((int)param_1 + 0x6ba);
  do {
    pcVar10 = pcVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar2 != '\0');
  pcVar8 = pcVar11 + -(int)puVar6;
  pcVar11 = pcVar10 + -1;
  for (uVar4 = (uint)puVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar11 = pcVar11 + 4;
  }
  iVar7 = (int)param_1 + 0x6ba;
  for (uVar4 = (uint)puVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar11 = pcVar11 + 1;
  }
  puVar1 = param_1 + 3;
  param_1 = puVar6;
  iVar7 = (*(code *)*puVar1)(iVar7,0x8000,0x180);
  puVar3[0x22] = iVar7;
  if (iVar7 != -1) {
    iVar7 = (*(code *)puVar3[3])((int)puVar3 + 0x6ba,0x8000,0x180);
    puVar3[0x21] = iVar7;
    if (iVar7 != -1) {
      iVar7 = (*(code *)puVar3[4])(puVar3[0x22],local_28,0x24);
      if ((iVar7 != 0x24) || (local_28[0] != 0x4643534d)) {
LAB_01006102:
        uVar4 = 0;
        uVar13 = 2;
        goto LAB_01006235;
      }
      if (local_10 != 0x103) {
        uVar4 = (uint)local_10;
        uVar13 = 3;
        goto LAB_01006235;
      }
      if ((param_4 != -1) && ((param_3 != local_8 || (param_4 != local_6)))) {
        uVar4 = 0;
        uVar13 = 10;
        goto LAB_01006235;
      }
      piVar9 = local_28;
      piVar12 = puVar3 + 0x14;
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar12 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar12 = piVar12 + 1;
      }
      param_1 = (undefined4 *)0x0;
      if (((*(byte *)((int)puVar3 + 0x6e) & 4) != 0) &&
         (iVar7 = (*(code *)puVar3[4])(puVar3[0x22],&param_1,4), iVar7 != 4)) goto LAB_01006102;
      if (puVar3[0x28] != ((uint)param_1 & 0xffff)) {
        if (puVar3[0x13] != 0) {
          (*(code *)puVar3[1])(puVar3[0x13]);
          puVar3[0x13] = 0;
        }
        uVar4 = (uint)param_1 & 0xffff;
        puVar3[0x28] = uVar4;
        if (uVar4 == 0) goto LAB_010060df;
        iVar7 = (*(code *)puVar3[2])(uVar4);
        puVar3[0x13] = iVar7;
        if (iVar7 != 0) goto LAB_010060df;
LAB_0100614f:
        uVar4 = 0;
        uVar13 = 5;
        goto LAB_01006235;
      }
LAB_010060df:
      if ((puVar3[0x28] != 0) &&
         (iVar7 = (*(code *)puVar3[4])(puVar3[0x22],puVar3[0x13],puVar3[0x28]),
         puVar3[0x28] != iVar7)) goto LAB_01006102;
      iVar7 = ((uint)param_1 >> 0x10 & 0xff) + 8;
      if (puVar3[0x11] == 0) {
        puVar3[0x29] = iVar7;
        iVar7 = (*(code *)puVar3[2])(iVar7);
        puVar3[0x11] = iVar7;
        if (iVar7 == 0) goto LAB_0100614f;
LAB_01006131:
        iVar7 = ((uint)param_1 >> 0x18) + 8;
        if (puVar3[0x12] == 0) {
          puVar3[0x2a] = iVar7;
          iVar7 = (*(code *)puVar3[2])(iVar7);
          puVar3[0x12] = iVar7;
          if (iVar7 == 0) goto LAB_0100614f;
        }
        else if (iVar7 != puVar3[0x2a]) goto LAB_0100615f;
        if ((*(byte *)((int)puVar3 + 0x6e) & 1) == 0) {
          *(undefined1 *)((int)puVar3 + 0x1b5) = 0;
          *(undefined1 *)((int)puVar3 + 0x2b6) = 0;
        }
        else {
          iVar7 = FUN_010068c8((char *)((int)puVar3 + 0x1b5),0x100,puVar3);
          if (iVar7 == 0) {
            return false;
          }
          iVar7 = FUN_010068c8((char *)((int)puVar3 + 0x2b6),0x100,puVar3);
          if (iVar7 == 0) {
            return false;
          }
        }
        if ((*(byte *)((int)puVar3 + 0x6e) & 2) == 0) {
          *(undefined1 *)((int)puVar3 + 0x3b7) = 0;
          *(undefined1 *)(puVar3 + 0x12e) = 0;
        }
        else {
          iVar7 = FUN_010068c8((char *)((int)puVar3 + 0x3b7),0x100,puVar3);
          if (iVar7 == 0) {
            return false;
          }
          iVar7 = FUN_010068c8((char *)(puVar3 + 0x12e),0x100,puVar3);
          if (iVar7 == 0) {
            return false;
          }
        }
        iVar7 = (*(code *)puVar3[7])(puVar3[0x22],0,1);
        puVar3[0xb] = iVar7;
        if ((iVar7 != -1) && (iVar7 = (*(code *)puVar3[7])(puVar3[0x22],puVar3[0x18]), iVar7 != -1))
        {
          *(undefined2 *)(puVar3 + 0x2b) = *(undefined2 *)(puVar3 + 0x1b);
          iVar7 = FUN_01006565(puVar3);
          return iVar7 != 0;
        }
        uVar4 = 0;
        uVar13 = 4;
      }
      else {
        if (iVar7 == puVar3[0x29]) goto LAB_01006131;
LAB_0100615f:
        uVar4 = 0;
        uVar13 = 9;
      }
      goto LAB_01006235;
    }
  }
  uVar4 = 0;
  uVar13 = 1;
LAB_01006235:
  FUN_01006dcb((undefined4 *)*puVar3,uVar13,uVar4);
  return false;
}


