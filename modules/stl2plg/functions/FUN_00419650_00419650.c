/* Module: stl2plg.dll
   Function: FUN_00419650
   Address: 00419650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419650(int *param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  
  piVar2 = param_1;
  FUN_00450790(param_1,0);
  puVar3 = param_2;
  pbVar1 = (byte *)(piVar2 + 0x45);
  do {
    FUN_0044feb0(piVar2,&param_1,4);
    uVar4 = FUN_00450710((byte *)&param_1);
    FUN_00418a60((int)piVar2);
    FUN_00450760(piVar2,pbVar1,4);
    if (*(int *)pbVar1 == DAT_004717a4) {
      FUN_004508a0(piVar2,puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_004717ac) {
      if ((uVar4 == 0) && ((*(byte *)(piVar2 + 0x18) & 8) == 0)) {
        FUN_00450790(piVar2,0);
      }
      else {
LAB_004196ef:
        FUN_00450c30(piVar2,(int)puVar3,uVar4);
      }
    }
    else if (*(int *)pbVar1 == DAT_004717bc) {
      FUN_00450ae0(piVar2,(int)puVar3,uVar4);
    }
    else {
      if (*(int *)pbVar1 == DAT_004717b4) goto LAB_004196ef;
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
    if ((*(byte *)(piVar2 + 0x18) & 0x10) != 0) {
      return;
    }
  } while( true );
}


