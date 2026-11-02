/* Module: mp3rw.dll
   Function: FUN_004467f0
   Address: 004467f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004467f0(int *param_1,uint *param_2)

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
    FUN_0044c730(param_1,(int)param_2 + uVar4 + 0x20,uVar6);
    *(undefined1 *)(piVar2 + 0x49) = 8;
    iVar5 = FUN_0044c430((int)(puVar3 + 8),uVar4,uVar6);
    if (iVar5 != 0) {
      if (uVar4 < 4) {
        iVar5 = FUN_0044c430((int)(puVar3 + 8),uVar4,-uVar4 + 4);
        if (iVar5 == 0) goto LAB_00446854;
        pcVar7 = "Not a PNG file";
      }
      else {
LAB_00446854:
        pcVar7 = "PNG file corrupted by ASCII conversion";
      }
      FUN_00475b50(piVar2,pcVar7);
    }
  }
  pbVar1 = (byte *)(piVar2 + 0x45);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_0044c730(piVar2,&param_1,4);
          uVar4 = FUN_00475d40((byte *)&param_1);
          FUN_0044c530((int)piVar2);
          FUN_00475d90(piVar2,pbVar1,4);
          if (*(int *)pbVar1 != DAT_004a6e0c) break;
          FUN_00475ed0(piVar2,puVar3,uVar4);
        }
        if (*(int *)pbVar1 != DAT_004a6e24) break;
        FUN_00476110(piVar2,(int)puVar3,uVar4);
      }
      if (*(int *)pbVar1 != DAT_004a6e1c) break;
      FUN_00476260(piVar2,(int)puVar3,uVar4);
    }
    if (*(int *)pbVar1 == DAT_004a6e14) break;
    if (*(int *)pbVar1 == DAT_004a6e2c) {
      FUN_00476fb0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e34) {
      FUN_00476530(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e3c) {
      FUN_004762b0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e44) {
      FUN_00477170(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e4c) {
      FUN_00477370(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e5c) {
      FUN_00477290(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e64) {
      FUN_004763f0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e6c) {
      FUN_00476b70(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e74) {
      FUN_00477530(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e7c) {
      FUN_00477450(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e84) {
      FUN_00476da0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e8c) {
      FUN_004775e0(piVar2,(int)puVar3,uVar4);
    }
    else {
      FUN_00477930(piVar2,(int)puVar3,uVar4);
    }
  }
  if ((piVar2[0x18] & 1U) == 0) {
    pcVar7 = "Missing IHDR before IDAT";
  }
  else {
    if ((*(char *)((int)piVar2 + 0x11e) != '\x03') || ((piVar2[0x18] & 2U) != 0)) goto LAB_00446a3c;
    pcVar7 = "Missing PLTE before IDAT";
  }
  FUN_00475b50(piVar2,pcVar7);
LAB_00446a3c:
  piVar2[0x41] = uVar4;
  piVar2[0x18] = piVar2[0x18] | 4;
  return;
}


