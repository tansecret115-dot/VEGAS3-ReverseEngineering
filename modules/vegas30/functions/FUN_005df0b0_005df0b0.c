/* Module: vegas30.exe
   Function: FUN_005df0b0
   Address: 005df0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005df0b0(undefined4 param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined1 local_840 [4];
  int local_83c;
  int local_838;
  int *local_834;
  undefined4 local_824;
  undefined1 local_808 [2052];
  
  piVar5 = *(int **)(param_2 + 0x24);
  iVar2 = *piVar5;
  if ((0 < iVar2) && (local_83c = 0, local_838 = iVar2, local_834 = piVar5, 0 < iVar2)) {
    do {
      iVar4 = *(int *)(piVar5[2] + local_83c * 4);
      *param_4 = *param_4 + 1;
      if (*(int *)(iVar4 + 0x50) != 0) {
        uVar10 = *(undefined8 *)(iVar4 + 0x28);
        fVar6 = (float10)FUN_005dec30(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24));
        dVar8 = (double)fVar6;
        fVar6 = (float10)FUN_005dec30(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c));
        SfPrintF(local_808,"%i;    %i;    %.4f;    %.4f;    %f;    ",*param_4,param_3,(double)fVar6,
                 dVar8,uVar10);
        iVar2 = FUN_005decf0(param_5,param_1,local_808,local_840);
        if (iVar2 == 0) {
          return 0x8004e009;
        }
        uVar1 = *(uint *)(iVar4 + 0x10);
        FUN_005df3e0();
        FUN_005df3e0(*(uint *)(iVar4 + 0x10) >> 8 & 1);
        FUN_005df3e0(uVar1 >> 9 & 1);
        FUN_005df3e0();
        SfPrintF();
        iVar2 = FUN_005decf0(param_5,param_1,local_808,local_840);
        if (iVar2 == 0) {
          return 0x8004e009;
        }
        if (*(int *)(iVar4 + 4) == 2) {
          SfPrintF();
        }
        else if (*(int *)(iVar4 + 4) == 3) {
          SfPrintF();
        }
        else {
          SfPrintF(local_808,";    ");
        }
        iVar2 = FUN_005decf0(param_5,param_1,local_808,local_840);
        if (iVar2 == 0) {
          return 0x8004e009;
        }
        iVar2 = *(int *)(iVar4 + 0x50);
        fVar6 = (float10)FUN_005dec30(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14));
        dVar8 = (double)fVar6;
        fVar6 = (float10)FUN_005dec30(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
        uVar7 = *(undefined4 *)(iVar2 + 0x1c);
        dVar9 = (double)fVar6;
        uVar3 = FUN_005f2d10();
        SfPrintF(local_808,"\"%s\";    %i;    %.4f;    %.4f;    ",uVar3,uVar7,dVar9,dVar8);
        iVar2 = FUN_005decf0(param_5,param_1,local_808,local_840);
        if (iVar2 == 0) {
          return 0x8004e009;
        }
        local_824 = *(undefined4 *)(iVar4 + 0x7c);
        uVar7 = *(undefined4 *)(iVar4 + 0x78);
        FUN_005dec30(*(undefined4 *)(iVar4 + 0x80),*(undefined4 *)(iVar4 + 0x84));
        FUN_005dec30(uVar7,local_824);
        SfPrintF(local_808,"%.4f;    %.4f;    %f;    %i;    %f;    %i;    %f;    ");
        iVar2 = FUN_005decf0(param_5,param_1,local_808,local_840);
        if (iVar2 == 0) {
          return 0x8004e009;
        }
        SfPrintF(local_808,"%i;    %i;    ",*(undefined4 *)(iVar4 + 0x48));
        iVar2 = FUN_005decf0(param_5,param_1,local_808,local_840);
        if (iVar2 == 0) {
          return 0x8004e009;
        }
        SfPrintF(local_808,"%i;    %i",*(undefined4 *)(iVar4 + 0x70));
        iVar2 = FUN_005decf0(param_5,param_1,local_808,local_840);
        if (iVar2 == 0) {
          return 0x8004e009;
        }
        SfPrintF(local_808);
        iVar4 = FUN_005decf0(param_5,param_1,local_808,local_840);
        piVar5 = local_834;
        iVar2 = local_838;
        if (iVar4 == 0) {
          return 0x8004e009;
        }
      }
      local_83c = local_83c + 1;
    } while (local_83c < iVar2);
  }
  return 0;
}


