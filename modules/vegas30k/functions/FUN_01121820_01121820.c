/* Module: vegas30k.dll
   Function: FUN_01121820
   Address: 01121820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01121820(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = param_1;
  FUN_011561f0(param_1,0);
  uVar3 = param_2;
  piVar1 = (int *)(iVar2 + 0x114);
  do {
    FUN_01126f90(iVar2,&param_1,4);
    iVar4 = FUN_01156170(&param_1);
    FUN_01126d90(iVar2);
    FUN_011561c0(iVar2,piVar1,4);
    if (*piVar1 == DAT_01206fbc) {
      FUN_01156300(iVar2,uVar3,iVar4);
    }
    else if (*piVar1 == DAT_01206fc4) {
      if ((iVar4 == 0) && ((*(byte *)(iVar2 + 0x60) & 8) == 0)) {
        FUN_011561f0(iVar2,0);
      }
      else {
LAB_011218bf:
        FUN_01156690(iVar2,uVar3,iVar4);
      }
    }
    else if (*piVar1 == DAT_01206fd4) {
      FUN_01156540(iVar2,uVar3,iVar4);
    }
    else {
      if (*piVar1 == DAT_01206fcc) goto LAB_011218bf;
      if (*piVar1 == DAT_01206fdc) {
        FUN_011573e0(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_01206fe4) {
        FUN_01156960(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_01206fec) {
        FUN_011566e0(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_01206ff4) {
        FUN_011575a0(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_01206ffc) {
        FUN_011577a0(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_0120700c) {
        FUN_011576c0(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_01207014) {
        FUN_01156820(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_0120701c) {
        FUN_01156fa0(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_01207024) {
        FUN_01157960(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_0120702c) {
        FUN_01157880(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_01207034) {
        FUN_011571d0(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_0120703c) {
        FUN_01157a10(iVar2,uVar3,iVar4);
      }
      else {
        FUN_01157d60(iVar2,uVar3,iVar4);
      }
    }
    if ((*(byte *)(iVar2 + 0x60) & 0x10) != 0) {
      return;
    }
  } while( true );
}


