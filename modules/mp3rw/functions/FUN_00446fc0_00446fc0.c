/* Module: mp3rw.dll
   Function: FUN_00446fc0
   Address: 00446fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00446fc0(int *param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  
  piVar2 = param_1;
  FUN_00475dc0(param_1,0);
  puVar3 = param_2;
  pbVar1 = (byte *)(piVar2 + 0x45);
  do {
    FUN_0044c730(piVar2,&param_1,4);
    uVar4 = FUN_00475d40((byte *)&param_1);
    FUN_0044c530((int)piVar2);
    FUN_00475d90(piVar2,pbVar1,4);
    if (*(int *)pbVar1 == DAT_004a6e0c) {
      FUN_00475ed0(piVar2,puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e14) {
      if ((uVar4 == 0) && ((*(byte *)(piVar2 + 0x18) & 8) == 0)) {
        FUN_00475dc0(piVar2,0);
      }
      else {
LAB_0044705f:
        FUN_00476260(piVar2,(int)puVar3,uVar4);
      }
    }
    else if (*(int *)pbVar1 == DAT_004a6e24) {
      FUN_00476110(piVar2,(int)puVar3,uVar4);
    }
    else {
      if (*(int *)pbVar1 == DAT_004a6e1c) goto LAB_0044705f;
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
    if ((*(byte *)(piVar2 + 0x18) & 0x10) != 0) {
      return;
    }
  } while( true );
}


