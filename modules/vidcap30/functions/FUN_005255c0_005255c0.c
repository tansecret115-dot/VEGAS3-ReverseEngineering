/* Module: vidcap30.exe
   Function: FUN_005255c0
   Address: 005255c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005255c0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = param_1;
  FUN_005497b0(param_1,0);
  uVar3 = param_2;
  piVar1 = (int *)(iVar2 + 0x114);
  do {
    FUN_0052ad30(iVar2,&param_1,4);
    iVar4 = FUN_00549730(&param_1);
    FUN_0052ab30(iVar2);
    FUN_00549780(iVar2,piVar1,4);
    if (*piVar1 == DAT_005b89ac) {
      FUN_005498c0(iVar2,uVar3,iVar4);
    }
    else if (*piVar1 == DAT_005b89b4) {
      if ((iVar4 == 0) && ((*(byte *)(iVar2 + 0x60) & 8) == 0)) {
        FUN_005497b0(iVar2,0);
      }
      else {
LAB_0052565f:
        FUN_00549c50(iVar2,uVar3,iVar4);
      }
    }
    else if (*piVar1 == DAT_005b89c4) {
      FUN_00549b00(iVar2,uVar3,iVar4);
    }
    else {
      if (*piVar1 == DAT_005b89bc) goto LAB_0052565f;
      if (*piVar1 == DAT_005b89cc) {
        FUN_0054a9a0(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_005b89d4) {
        FUN_00549f20(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_005b89dc) {
        FUN_00549ca0(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_005b89e4) {
        FUN_0054ab60(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_005b89ec) {
        FUN_0054ad60(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_005b89fc) {
        FUN_0054ac80(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_005b8a04) {
        FUN_00549de0(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_005b8a0c) {
        FUN_0054a560(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_005b8a14) {
        FUN_0054af20(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_005b8a1c) {
        FUN_0054ae40(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_005b8a24) {
        FUN_0054a790(iVar2,uVar3,iVar4);
      }
      else if (*piVar1 == DAT_005b8a2c) {
        FUN_0054afd0(iVar2,uVar3,iVar4);
      }
      else {
        FUN_0054b320(iVar2,uVar3,iVar4);
      }
    }
    if ((*(byte *)(iVar2 + 0x60) & 0x10) != 0) {
      return;
    }
  } while( true );
}


