/* Module: sfs4rw.dll
   Function: FUN_00446f40
   Address: 00446f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00446f40(int *param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  
  piVar2 = param_1;
  FUN_00475d40(param_1,0);
  puVar3 = param_2;
  pbVar1 = (byte *)(piVar2 + 0x45);
  do {
    FUN_0044c6b0(piVar2,&param_1,4);
    uVar4 = FUN_00475cc0((byte *)&param_1);
    FUN_0044c4b0((int)piVar2);
    FUN_00475d10(piVar2,pbVar1,4);
    if (*(int *)pbVar1 == DAT_004a6e0c) {
      FUN_00475e50(piVar2,puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004a6e14) {
      if ((uVar4 == 0) && ((*(byte *)(piVar2 + 0x18) & 8) == 0)) {
        FUN_00475d40(piVar2,0);
      }
      else {
LAB_00446fdf:
        FUN_004761e0(piVar2,(int)puVar3,uVar4);
      }
    }
    else if (*(int *)pbVar1 == DAT_004a6e24) {
      FUN_00476090(piVar2,(int)puVar3,uVar4);
    }
    else {
      if (*(int *)pbVar1 == DAT_004a6e1c) goto LAB_00446fdf;
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
    if ((*(byte *)(piVar2 + 0x18) & 0x10) != 0) {
      return;
    }
  } while( true );
}


