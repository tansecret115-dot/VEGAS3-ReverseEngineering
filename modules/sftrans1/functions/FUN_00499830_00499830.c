/* Module: sftrans1.dll
   Function: FUN_00499830
   Address: 00499830
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00499830(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  int local_8;
  
  FUN_00551640();
  iVar2 = FUN_004cd9a0();
  if (-1 < iVar2) {
    puVar4 = &stack0x000014b4;
    local_8 = 3;
    piVar5 = (int *)(param_6 + 4);
    do {
      if (0 < *piVar5) {
        FUN_00548930();
        FUN_00548c20();
        FUN_0054fd50();
        FUN_0054f120();
        iVar2 = 0;
        do {
          uVar1 = ftol();
          iVar6 = iVar2 + 1;
          puVar4[iVar2] = uVar1;
          iVar2 = iVar6;
        } while (iVar6 < 0x100);
        FUN_00548b90();
      }
      piVar5 = piVar5 + 2;
      puVar4 = puVar4 + 0x100;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_8 = 0;
    if (0 < param_2) {
      do {
        if (param_5 == 4) {
          iVar2 = 0;
          if (0 < param_1) {
            pbVar3 = (byte *)(unaff_EBP + 1);
            do {
              pbVar3[1] = (&stack0x000014b4)[pbVar3[1]];
              *pbVar3 = (&stack0x000015b4)[*pbVar3];
              iVar2 = iVar2 + 1;
              pbVar3[-1] = (&stack0x000016b4)[pbVar3[-1]];
              pbVar3 = pbVar3 + 4;
            } while (iVar2 < param_1);
          }
        }
        else {
          iVar2 = 0;
          if (0 < param_1) {
            pfVar7 = (float *)(unaff_EBP + 8);
            do {
              fVar8 = (float10)FUN_00499590();
              pfVar7[-2] = (float)fVar8;
              fVar8 = (float10)FUN_00499590();
              pfVar7[-1] = (float)fVar8;
              fVar8 = (float10)FUN_00499590();
              *pfVar7 = (float)fVar8;
              pfVar7 = pfVar7 + 4;
              iVar2 = iVar2 + 1;
            } while (iVar2 < param_1);
          }
        }
        unaff_EBP = unaff_EBP + param_3;
        local_8 = local_8 + 1;
      } while (local_8 < param_2);
    }
    iVar2 = 0;
  }
  return iVar2;
}


