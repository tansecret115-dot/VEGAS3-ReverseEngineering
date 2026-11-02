/* Module: vegas30.exe
   Function: FUN_0041ec40
   Address: 0041ec40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

uint FUN_0041ec40(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *unaff_EBX;
  int iVar5;
  int *unaff_EDI;
  int *piVar6;
  int *****pppppiStack_144;
  int *piStack_140;
  undefined4 uStack_13c;
  int *piStack_138;
  int *piStack_134;
  undefined4 uStack_130;
  undefined4 *puStack_12c;
  int ****ppppiStack_128;
  int ****local_114 [2];
  undefined4 auStack_10c [58];
  undefined4 uStack_24;
  int iStack_c;
  
  ppppiStack_128 = (int ****)local_114;
  puStack_12c = (undefined4 *)0x41ec54;
  uVar1 = _SfAudio_CreateGraphObject_4();
  ppppiStack_128 = local_114[0];
  puStack_12c = (undefined4 *)0x41ec60;
  (*(code *)(*local_114[0])[8])();
  puStack_12c = auStack_10c;
  auStack_10c[0] = 0x20;
  uStack_130 = 1;
  piStack_138 = (int *)0x41ec79;
  piStack_134 = unaff_EBX;
  (**(code **)(*unaff_EBX + 0x6c))();
  if (-1 < (int)uVar1) {
    piStack_138 = *(int **)(iStack_c + 0x94);
    if (*(int *)((int)piStack_138 + 0x244) == 0) {
      if (*(int **)((int)piStack_138 + 0x234) == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = **(int **)((int)piStack_138 + 0x234);
      }
    }
    else {
      uStack_13c = 0x41ec9e;
      iVar2 = FUN_005d0420();
    }
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        uStack_13c = *(undefined4 *)(iStack_c + 0x94);
        piStack_140 = (int *)0x41ecc5;
        piStack_138 = (int *)iVar5;
        piVar3 = (int *)FUN_005d0cc0();
        piStack_140 = (int *)0x41ecd5;
        piStack_138 = piVar3;
        (**(code **)(*unaff_EDI + 0x84))();
        pppppiStack_144 = (int *****)0x41ecdb;
        piStack_140 = piVar3;
        (**(code **)(*piVar3 + 8))();
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    iVar2 = 0;
    piStack_138 = (int *)&stack0xfffffee4;
    piStack_140 = (int *)0x41ecf8;
    uVar1 = (**(code **)(*unaff_EDI + 0xb8))();
    if (-1 < (int)uVar1) {
      if (unaff_EDI == (int *)0x0) {
        return 0x80070057;
      }
      pppppiStack_144 = &ppppiStack_128;
      piStack_140 = (int *)0x0;
      ppppiStack_128 = (int ****)0x0;
      uVar1 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1);
      piVar3 = piStack_134;
      while (piStack_138 != (int *)0x0) {
        iVar5 = *piStack_138;
        piStack_134 = piVar3;
        uVar4 = FUN_005d15e0(*(undefined4 *)(iStack_c + 0x94),iVar2);
        (**(code **)(iVar5 + 0x4c))(piStack_138,uVar4);
        (**(code **)(*piStack_140 + 8))(piStack_140);
        pppppiStack_144 = (int *****)0x0;
        uVar1 = (**(code **)(*piStack_140 + 0xc))(piStack_140,1,&pppppiStack_144,0);
        iVar2 = iVar2 + 1;
        piVar3 = piStack_134;
      }
      (**(code **)(*piVar3 + 8))();
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      iVar2 = iStack_c + 0xa8;
      uVar4 = _SfGetString_8(DAT_00647204,0x50bf);
      SfPrintF(&uStack_130,uVar4,iVar2);
      FUN_004e9f70(*(undefined4 *)(iStack_c + 700),0x218,0);
      FUN_004ea250(*(undefined4 *)(iStack_c + 700),*(undefined4 *)(iStack_c + 0x94),0x21,0);
      uVar4 = FUN_0052b4f0(DAT_00647624,&uStack_130,DAT_0064a52c == 0,piStack_140,1,1,uStack_24,1);
      piVar6 = (int *)0x0;
      iVar2 = (**(code **)(*piStack_140 + 0x30))(piStack_140,FUN_0052b5b0,uVar4,0);
      FUN_0052b580(uVar4);
      if (iVar2 == 0) {
        FUN_004eb2b0(*(undefined4 *)(iStack_c + 700));
      }
      FUN_004ea040(*(undefined4 *)(iStack_c + 700),0);
      uVar1 = FUN_0041ab80(iStack_c,piVar6);
      (**(code **)(*piVar6 + 8))(piVar6);
      if (-1 < (int)uVar1) {
        if (*(int *)(*(int *)(iStack_c + 0x94) + 0x244) != 0) {
          FUN_005d0420(*(int *)(iStack_c + 0x94));
        }
        uVar1 = (uint)(piVar3 != (int *)0x0);
      }
    }
  }
  return uVar1;
}


