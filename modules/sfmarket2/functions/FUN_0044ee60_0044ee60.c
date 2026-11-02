/* Module: sfmarket2.dll
   Function: FUN_0044ee60
   Address: 0044ee60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044ee60(int *param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
  puVar3 = param_2;
  piVar2 = param_1;
  if (*(byte *)(param_1 + 0x49) < 8) {
    uVar4 = (uint)*(byte *)(param_1 + 0x49);
    uVar6 = -uVar4 + 8;
    FUN_00454da0(param_1,(int)param_2 + uVar4 + 0x20,uVar6);
    *(undefined1 *)(piVar2 + 0x49) = 8;
    iVar5 = FUN_00454aa0((int)(puVar3 + 8),uVar4,uVar6);
    if (iVar5 != 0) {
      if (uVar4 < 4) {
        iVar5 = FUN_00454aa0((int)(puVar3 + 8),uVar4,-uVar4 + 4);
        if (iVar5 == 0) goto LAB_0044eec4;
        pcVar7 = "Not a PNG file";
      }
      else {
LAB_0044eec4:
        pcVar7 = "PNG file corrupted by ASCII conversion";
      }
      FUN_0047e340(piVar2,pcVar7);
    }
  }
  pbVar1 = (byte *)(piVar2 + 0x45);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_00454da0(piVar2,&param_1,4);
          uVar4 = FUN_0047e530((byte *)&param_1);
          FUN_00454ba0((int)piVar2);
          FUN_0047e580(piVar2,pbVar1,4);
          if (*(int *)pbVar1 != DAT_004a8688) break;
          FUN_0047e6c0(piVar2,puVar3,uVar4);
        }
        if (*(int *)pbVar1 != DAT_004a86a0) break;
        FUN_0047e900(piVar2,(int)puVar3,uVar4);
      }
      if (*(int *)pbVar1 != DAT_004a8698) break;
      FUN_0047ea50(piVar2,(int)puVar3,uVar4);
    }
    if (*(int *)pbVar1 == DAT_004a8690) break;
    if (*(int *)pbVar1 == DAT_004a86a8) {
      FUN_0047f7a0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a86b0) {
      FUN_0047ed20(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a86b8) {
      FUN_0047eaa0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a86c0) {
      FUN_0047f960(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a86c8) {
      FUN_0047fb60(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a86d8) {
      FUN_0047fa80(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a86e0) {
      FUN_0047ebe0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a86e8) {
      FUN_0047f360(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a86f0) {
      FUN_0047fd20(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a86f8) {
      FUN_0047fc40(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a8700) {
      FUN_0047f590(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a8708) {
      FUN_0047fdd0(piVar2,(int)puVar3,uVar4);
    }
    else {
      FUN_00480120(piVar2,(int)puVar3,uVar4);
    }
  }
  if ((piVar2[0x18] & 1U) == 0) {
    pcVar7 = "Missing IHDR before IDAT";
  }
  else {
    if ((*(char *)((int)piVar2 + 0x11e) != '\x03') || ((piVar2[0x18] & 2U) != 0)) goto LAB_0044f0ac;
    pcVar7 = "Missing PLTE before IDAT";
  }
  FUN_0047e340(piVar2,pcVar7);
LAB_0044f0ac:
  piVar2[0x41] = uVar4;
  piVar2[0x18] = piVar2[0x18] | 4;
  return;
}


