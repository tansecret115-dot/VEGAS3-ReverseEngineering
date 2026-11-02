/* Module: vidcap30.exe
   Function: FUN_00524df0
   Address: 00524df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00524df0(int param_1,int param_2)

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
    FUN_0052ad30(param_1,param_2 + 0x20 + uVar4,iVar6);
    *(undefined1 *)(iVar2 + 0x124) = 8;
    iVar6 = FUN_0052aa30(iVar3 + 0x20,uVar4,iVar6);
    if (iVar6 != 0) {
      if (uVar4 < 4) {
        iVar6 = FUN_0052aa30(iVar3 + 0x20,uVar4,-uVar4 + 4);
        if (iVar6 == 0) goto LAB_00524e54;
        pcVar7 = "Not a PNG file";
      }
      else {
LAB_00524e54:
        pcVar7 = "PNG file corrupted by ASCII conversion";
      }
      FUN_00549540(iVar2,pcVar7);
    }
  }
  piVar1 = (int *)(iVar2 + 0x114);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_0052ad30(iVar2,&param_1,4);
          uVar5 = FUN_00549730(&param_1);
          FUN_0052ab30(iVar2);
          FUN_00549780(iVar2,piVar1,4);
          if (*piVar1 != DAT_005b89ac) break;
          FUN_005498c0(iVar2,iVar3,uVar5);
        }
        if (*piVar1 != DAT_005b89c4) break;
        FUN_00549b00(iVar2,iVar3,uVar5);
      }
      if (*piVar1 != DAT_005b89bc) break;
      FUN_00549c50(iVar2,iVar3,uVar5);
    }
    if (*piVar1 == DAT_005b89b4) break;
    if (*piVar1 == DAT_005b89cc) {
      FUN_0054a9a0(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_005b89d4) {
      FUN_00549f20(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_005b89dc) {
      FUN_00549ca0(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_005b89e4) {
      FUN_0054ab60(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_005b89ec) {
      FUN_0054ad60(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_005b89fc) {
      FUN_0054ac80(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_005b8a04) {
      FUN_00549de0(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_005b8a0c) {
      FUN_0054a560(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_005b8a14) {
      FUN_0054af20(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_005b8a1c) {
      FUN_0054ae40(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_005b8a24) {
      FUN_0054a790(iVar2,iVar3,uVar5);
    }
    else if (*piVar1 == DAT_005b8a2c) {
      FUN_0054afd0(iVar2,iVar3,uVar5);
    }
    else {
      FUN_0054b320(iVar2,iVar3,uVar5);
    }
  }
  if ((*(uint *)(iVar2 + 0x60) & 1) == 0) {
    pcVar7 = "Missing IHDR before IDAT";
  }
  else {
    if ((*(char *)(iVar2 + 0x11e) != '\x03') || ((*(uint *)(iVar2 + 0x60) & 2) != 0))
    goto LAB_0052503c;
    pcVar7 = "Missing PLTE before IDAT";
  }
  FUN_00549540(iVar2,pcVar7);
LAB_0052503c:
  *(undefined4 *)(iVar2 + 0x104) = uVar5;
  *(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) | 4;
  return;
}


