/* Module: sfs4rw.dll
   Function: FUN_00446770
   Address: 00446770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00446770(int *param_1,uint *param_2)

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
    FUN_0044c6b0(param_1,(int)param_2 + uVar4 + 0x20,uVar6);
    *(undefined1 *)(piVar2 + 0x49) = 8;
    iVar5 = FUN_0044c3b0((int)(puVar3 + 8),uVar4,uVar6);
    if (iVar5 != 0) {
      if (uVar4 < 4) {
        iVar5 = FUN_0044c3b0((int)(puVar3 + 8),uVar4,-uVar4 + 4);
        if (iVar5 == 0) goto LAB_004467d4;
        pcVar7 = "Not a PNG file";
      }
      else {
LAB_004467d4:
        pcVar7 = "PNG file corrupted by ASCII conversion";
      }
      FUN_00475ad0(piVar2,pcVar7);
    }
  }
  pbVar1 = (byte *)(piVar2 + 0x45);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_0044c6b0(piVar2,&param_1,4);
          uVar4 = FUN_00475cc0((byte *)&param_1);
          FUN_0044c4b0((int)piVar2);
          FUN_00475d10(piVar2,pbVar1,4);
          if (*(int *)pbVar1 != DAT_004a6e0c) break;
          FUN_00475e50(piVar2,puVar3,uVar4);
        }
        if (*(int *)pbVar1 != DAT_004a6e24) break;
        FUN_00476090(piVar2,(int)puVar3,uVar4);
      }
      if (*(int *)pbVar1 != DAT_004a6e1c) break;
      FUN_004761e0(piVar2,(int)puVar3,uVar4);
    }
    if (*(int *)pbVar1 == DAT_004a6e14) break;
    if (*(int *)pbVar1 == DAT_004a6e2c) {
      FUN_00476f30(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e34) {
      FUN_004764b0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e3c) {
      FUN_00476230(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e44) {
      FUN_004770f0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e4c) {
      FUN_004772f0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e5c) {
      FUN_00477210(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e64) {
      FUN_00476370(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e6c) {
      FUN_00476af0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e74) {
      FUN_004774b0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e7c) {
      FUN_004773d0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e84) {
      FUN_00476d20(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e8c) {
      FUN_00477560(piVar2,(int)puVar3,uVar4);
    }
    else {
      FUN_004778b0(piVar2,(int)puVar3,uVar4);
    }
  }
  if ((piVar2[0x18] & 1U) == 0) {
    pcVar7 = "Missing IHDR before IDAT";
  }
  else {
    if ((*(char *)((int)piVar2 + 0x11e) != '\x03') || ((piVar2[0x18] & 2U) != 0)) goto LAB_004469bc;
    pcVar7 = "Missing PLTE before IDAT";
  }
  FUN_00475ad0(piVar2,pcVar7);
LAB_004469bc:
  piVar2[0x41] = uVar4;
  piVar2[0x18] = piVar2[0x18] | 4;
  return;
}


