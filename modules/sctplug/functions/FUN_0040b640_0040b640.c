/* Module: sctplug.dll
   Function: FUN_0040b640
   Address: 0040b640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040b640(int param_1,short *param_2,uint param_3,uint param_4)

{
  undefined2 *puVar1;
  char cVar2;
  uint uVar3;
  undefined2 uVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  undefined8 uVar11;
  undefined4 local_100;
  undefined1 local_fc;
  
  if (param_1 == 0) {
    return 0;
  }
  cVar2 = *(char *)(param_1 + 0x14f);
  puVar1 = (undefined2 *)(param_1 + 0x14f);
  if (cVar2 == ' ') {
    if (*(char *)(param_1 + 0x150) != ' ') goto LAB_0040b682;
  }
  else {
    if (*(char *)(param_1 + 0x150) == ' ') {
      *(char *)(param_1 + 0x150) = cVar2;
      *(undefined1 *)puVar1 = 0x30;
      goto LAB_0040b6a4;
    }
LAB_0040b682:
    if (cVar2 == ' ') {
      *(undefined1 *)puVar1 = 0x30;
      goto LAB_0040b6a4;
    }
  }
  if ((cVar2 == '\0') || (iVar8 = FUN_0040b8e0((int)puVar1,2), iVar8 != 0)) {
    *puVar1 = DAT_0043bab8;
  }
LAB_0040b6a4:
  uVar11 = __alldiv(param_3,param_4,*(uint *)(param_2 + 2),0);
  *(short *)(param_1 + 0x3d) = (short)uVar11;
  uVar4 = ftol();
  *(undefined2 *)(param_1 + 0x3f) = uVar4;
  uVar3 = *(uint *)(param_2 + 2);
  *(undefined1 *)(param_1 + 0x53) = 10;
  *(short *)(param_1 + 0x50) = (short)(uVar3 / 100);
  if ((param_2 != (short *)0x0) &&
     (*(short *)(param_1 + 0x15e) = (short)((uint)(*(int *)(param_2 + 4) << 3) / 1000),
     *param_2 != 1)) {
    *(undefined1 *)(param_1 + 0x53) = 8;
  }
  if (param_2[1] == 1) {
    *(undefined1 *)(param_1 + 0x52) = 0x4d;
  }
  else {
    *(undefined1 *)(param_1 + 0x52) = 0x53;
  }
  fVar10 = (float10)(int)*(short *)(param_1 + 0x39) +
           (float10)(int)*(short *)(param_1 + 0x3b) * (float10)_DAT_004329c0;
  if (*(int *)(param_1 + 0x54) < 0) {
    sVar5 = ftol();
    *(int *)(param_1 + 0x54) = (int)sVar5;
    fVar10 = extraout_ST0;
  }
  else if (*(int *)(param_1 + 0x54) == 0) {
    uVar6 = ftol();
    *(undefined4 *)(param_1 + 0x54) = uVar6;
    fVar10 = extraout_ST0_00;
  }
  uVar4 = ftol();
  *(undefined2 *)(param_1 + 0x58) = uVar4;
  fVar9 = extraout_ST1;
  if ((-1 < (int)param_4) && ((0 < (int)param_4 || (param_3 != 0)))) {
    uVar6 = ftol();
    *(undefined4 *)(param_1 + 0x54) = uVar6;
    fVar9 = extraout_ST0_01;
    fVar10 = extraout_ST1_00;
  }
  if ((fVar10 / (float10)*(uint *)(param_2 + 2) -
      (float10)(int)*(short *)(param_1 + 0x58) * (float10)_DAT_004329c0) - fVar9 <=
      (float10)_DAT_004329a0) {
    uVar6 = ftol();
    uVar7 = ftol();
  }
  else {
    uVar6 = 99;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
    uVar7 = 0x3b;
  }
  wsprintfA((LPSTR)&local_100,"%02d:%02d",uVar6,uVar7);
  iVar8 = 0;
  do {
    if (*(char *)((int)&local_100 + iVar8) != '0') break;
    *(undefined1 *)((int)&local_100 + iVar8) = 0x20;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  *(undefined4 *)(param_1 + 0x34) = local_100;
  *(undefined1 *)(param_1 + 0x38) = local_fc;
  return 0;
}


