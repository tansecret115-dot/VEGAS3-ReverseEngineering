/* Module: vegas30k.dll
   Function: FUN_01121050
   Address: 01121050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01121050(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  
  iVar3 = param_2;
  iVar2 = param_1;
  if (*(byte *)(param_1 + 0x124) < 8) {
    uVar4 = (uint)*(byte *)(param_1 + 0x124);
    iVar6 = -uVar4 + 8;
    FUN_01126f90(param_1,param_2 + 0x20 + uVar4,iVar6);
    *(undefined1 *)(iVar2 + 0x124) = 8;
    iVar6 = FUN_01126c90(iVar3 + 0x20,uVar4,iVar6);
    if (iVar6 != 0) {
      if (uVar4 < 4) {
        iVar6 = FUN_01126c90(iVar3 + 0x20,uVar4,-uVar4 + 4);
        if (iVar6 == 0) goto LAB_011210b4;
        pcVar7 = "Not a PNG file";
      }
      else {
LAB_011210b4:
        pcVar7 = "PNG file corrupted by ASCII conversion";
      }
      FUN_01155f80(iVar2,pcVar7);
    }
  }
  piVar1 = (int *)(iVar2 + 0x114);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_01126f90(iVar2,&param_1,4);
          uVar5 = FUN_01156170(&param_1);
          FUN_01126d90(iVar2);
          FUN_011561c0(iVar2,piVar1,4);
          if (*piVar1 != DAT_01206fbc) break;
          FUN_01156300(iVar2,iVar3,uVar5);
        }
        if (*piVar1 != DAT_01206fd4) break;
        FUN_01156540(iVar2,iVar3,uVar5);
      }
      if (*piVar1 != DAT_01206fcc) break;
      FUN_01156690(iVar2,iVar3,uVar5);
    }
    if (*piVar1 == DAT_01206fc4) break;
    if (*piVar1 == DAT_01206fdc) {
      FUN_011573e0(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_01206fe4) {
      FUN_01156960(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_01206fec) {
      FUN_011566e0(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_01206ff4) {
      FUN_011575a0(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_01206ffc) {
      FUN_011577a0(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_0120700c) {
      FUN_011576c0(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_01207014) {
      FUN_01156820(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_0120701c) {
      FUN_01156fa0(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_01207024) {
      FUN_01157960(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_0120702c) {
      FUN_01157880(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_01207034) {
      FUN_011571d0(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_0120703c) {
      FUN_01157a10(iVar2,iVar3,uVar5);
    }
    else {
      FUN_01157d60(iVar2,iVar3,uVar5);
    }
  }
  if ((*(uint *)(iVar2 + 0x60) & 1) == 0) {
    pcVar7 = "Missing IHDR before IDAT";
  }
  else {
    if ((*(char *)(iVar2 + 0x11e) != '\x03') || ((*(uint *)(iVar2 + 0x60) & 2) != 0))
    goto LAB_0112129c;
    pcVar7 = "Missing PLTE before IDAT";
  }
  FUN_01155f80(iVar2,pcVar7);
LAB_0112129c:
  *(undefined4 *)(iVar2 + 0x104) = uVar5;
  *(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) | 4;
  return;
}


