/* Module: stl2plg.dll
   Function: FUN_00450ae0
   Address: 00450ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00450ae0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  
  piVar3 = param_1;
  uVar1 = param_1[0x18];
  if ((uVar1 & 1) == 0) {
    pcVar6 = "Missing IHDR before PLTE";
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_0044fa60((int)param_1,"Invalid PLTE after IDAT");
      FUN_00450790(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) goto LAB_00450b22;
    pcVar6 = "Duplicate PLTE chunk";
  }
  FUN_0044fa30(param_1,pcVar6);
LAB_00450b22:
  uVar1 = param_3;
  param_1[0x18] = param_1[0x18] | 2;
  if (param_3 % 3 != 0) {
    if (*(char *)((int)param_1 + 0x11e) != '\x03') {
      FUN_0044fa60((int)param_1,"Invalid palette chunk");
      FUN_00450790(param_1,uVar1);
      return;
    }
    FUN_0044fa30(param_1,"Invalid palette chunk");
  }
  piVar2 = (int *)((int)uVar1 / 3);
  puVar4 = FUN_004189e0(param_1,(int)piVar2,3);
  param_1[0x19] = param_1[0x19] | 0x1000;
  if (0 < (int)piVar2) {
    puVar5 = (undefined1 *)((int)puVar4 + 2);
    param_1 = piVar2;
    do {
      FUN_00450760(piVar3,(byte *)&param_3,3);
      puVar5[-2] = (undefined1)param_3;
      puVar5[-1] = param_3._1_1_;
      *puVar5 = param_3._2_1_;
      param_1 = (int *)((int)param_1 + -1);
      puVar5 = puVar5 + 3;
    } while (param_1 != (int *)0x0);
  }
  FUN_00450790(piVar3,0);
  piVar3[0x43] = (int)puVar4;
  *(short *)(piVar3 + 0x44) = (short)piVar2;
  FUN_004577f0((int)piVar3,param_2,puVar4,(short)piVar2);
  if ((((*(char *)((int)piVar3 + 0x11e) == '\x03') && (param_2 != 0)) &&
      ((*(byte *)(param_2 + 8) & 0x10) != 0)) &&
     (*(ushort *)(piVar3 + 0x44) < *(ushort *)((int)piVar3 + 0x112))) {
    FUN_0044fa60((int)piVar3,"Truncating incorrect tRNS chunk length");
    *(short *)((int)piVar3 + 0x112) = (short)piVar3[0x44];
  }
  return;
}


