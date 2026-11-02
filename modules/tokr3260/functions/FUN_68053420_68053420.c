/* Module: tokr3260.dll
   Function: FUN_68053420
   Address: 68053420
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_68053420(double *param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined1 local_2014 [8168];
  undefined4 uStackY_2c;
  
  FUN_6805a6a0();
  piVar1 = (int *)param_3[2];
  if (0 < (int)piVar1) {
    piVar3 = (int *)&stack0xfffffff0;
    puVar2 = local_2014;
    piVar8 = piVar1;
    do {
      *piVar3 = (int)puVar2;
      puVar2 = puVar2 + 0x1000;
      piVar3 = piVar3 + 1;
      piVar8 = (int *)((int)piVar8 + -1);
    } while (piVar8 != (int *)0x0);
  }
  iVar5 = 2;
  piVar3 = param_3 + 0x20;
  do {
    *piVar3 = piVar3[-1];
    piVar3 = piVar3 + -1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uStackY_2c = 0x68053493;
  piVar3 = piVar1;
  iVar5 = FUN_68054270(param_4,(int *)&stack0xfffffff0,param_1,0x400,2,piVar1);
  param_3[0x1e] = iVar5;
  iVar5 = param_3[0x20];
  iVar4 = FUN_680527d0((int *)&stack0xfffffff0,(int)piVar1,(int)piVar3);
  if (iVar4 < 0) {
    return 0xffffffff;
  }
  uVar7 = param_3[0x18];
  puVar9 = param_2;
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  iVar4 = FUN_680523b0((int)&stack0xfffffff0,(int)param_2,param_3,(int)piVar1,param_5);
  if (iVar4 == -999999) {
    return 0xffffffff;
  }
  return (uint)(iVar5 < 0x373);
}


