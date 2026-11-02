/* Module: stl2plg.dll
   Function: FUN_00418e80
   Address: 00418e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418e80(int *param_1,uint *param_2)

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
    FUN_0044feb0(param_1,(int)param_2 + uVar4 + 0x20,uVar6);
    *(undefined1 *)(piVar2 + 0x49) = 8;
    iVar5 = FUN_00418960((int)(puVar3 + 8),uVar4,uVar6);
    if (iVar5 != 0) {
      if (uVar4 < 4) {
        iVar5 = FUN_00418960((int)(puVar3 + 8),uVar4,-uVar4 + 4);
        if (iVar5 == 0) goto LAB_00418ee4;
        pcVar7 = "Not a PNG file";
      }
      else {
LAB_00418ee4:
        pcVar7 = "PNG file corrupted by ASCII conversion";
      }
      FUN_0044fa30(piVar2,pcVar7);
    }
  }
  pbVar1 = (byte *)(piVar2 + 0x45);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_0044feb0(piVar2,&param_1,4);
          uVar4 = FUN_00450710((byte *)&param_1);
          FUN_00418a60((int)piVar2);
          FUN_00450760(piVar2,pbVar1,4);
          if (*(int *)pbVar1 != DAT_004717a4) break;
          FUN_004508a0(piVar2,puVar3,uVar4);
        }
        if (*(int *)pbVar1 != DAT_004717bc) break;
        FUN_00450ae0(piVar2,(int)puVar3,uVar4);
      }
      if (*(int *)pbVar1 != DAT_004717b4) break;
      FUN_00450c30(piVar2,(int)puVar3,uVar4);
    }
    if (*(int *)pbVar1 == DAT_004717ac) break;
    if (*(int *)pbVar1 == DAT_004717c4) {
      FUN_00451980(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004717cc) {
      FUN_00450f00(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004717d4) {
      FUN_00450c80(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004717dc) {
      FUN_00451b40(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004717e4) {
      FUN_00451d40(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004717f4) {
      FUN_00451c60(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004717fc) {
      FUN_00450dc0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_00471804) {
      FUN_00451540(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_0047180c) {
      FUN_00451f00(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_00471814) {
      FUN_00451e20(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_0047181c) {
      FUN_00451770(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_00471824) {
      FUN_00451fb0(piVar2,(int)puVar3,uVar4);
    }
    else {
      FUN_00452300(piVar2,(int)puVar3,uVar4);
    }
  }
  if ((piVar2[0x18] & 1U) == 0) {
    pcVar7 = "Missing IHDR before IDAT";
  }
  else {
    if ((*(char *)((int)piVar2 + 0x11e) != '\x03') || ((piVar2[0x18] & 2U) != 0)) goto LAB_004190cc;
    pcVar7 = "Missing PLTE before IDAT";
  }
  FUN_0044fa30(piVar2,pcVar7);
LAB_004190cc:
  piVar2[0x41] = uVar4;
  piVar2[0x18] = piVar2[0x18] | 4;
  return;
}


