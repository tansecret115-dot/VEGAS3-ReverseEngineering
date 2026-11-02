/* Module: vfplugs.dll
   Function: FUN_004383f0
   Address: 004383f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004383f0(int *param_1,int *param_2,LONG *param_3,int param_4,int param_5,double param_6,
            int param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  code *unaff_ESI;
  float *pfVar4;
  float10 fVar5;
  double dVar6;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  int local_4b8;
  undefined8 local_4b0;
  int iStack_4a4;
  int local_498 [5];
  int iStack_484;
  int iStack_47c;
  int iStack_464;
  int iStack_460;
  int iStack_45c;
  float local_408 [257];
  code *pcVar7;
  
  pcVar1 = (code *)(&PTR_LAB_00493d90)[param_5];
  if (_DAT_00487598 == param_6) {
    local_4b0 = 1.0;
  }
  else {
    local_4b0 = _DAT_00487590 / param_6;
  }
  if (param_7 != 0) {
    pfVar4 = local_408;
    local_4b8 = 0;
    do {
      fVar5 = (float10)(*pcVar1)((double)local_4b8 * _DAT_00487e28,(undefined4)local_4b0,
                                 local_4b0._4_4_);
      *pfVar4 = (float)fVar5;
      local_4b8 = local_4b8 + 1;
      pfVar4 = pfVar4 + 1;
    } while (local_4b8 < 0x100);
  }
  iVar2 = FUN_00440ed0(local_498,param_1,param_2,param_3,param_4,param_1,param_2,param_3,param_4,3);
  if (iVar2 != 0) {
    local_4b8 = iStack_47c;
    iVar2 = FUN_0043bf80(iStack_484);
    if ((iVar2 == 0x20) && (0 < iStack_460)) {
      iStack_4a4 = iStack_460;
      do {
        if (param_7 == 0) {
          if (0 < iStack_464) {
            pfVar4 = (float *)(local_4b8 + 8);
            iVar2 = iStack_464;
            do {
              dVar6 = (double)pfVar4[-2];
              uVar10 = (undefined4)local_4b0;
              fVar5 = (float10)(*pcVar1)(dVar6,(undefined4)local_4b0,local_4b0._4_4_);
              pcVar9 = (code *)((ulonglong)dVar6 >> 0x20);
              pfVar4[-2] = (float)fVar5;
              dVar6 = (double)pfVar4[-1];
              uVar8 = unaff_EBX;
              fVar5 = (float10)(*unaff_ESI)(dVar6,unaff_EBX,local_4b0._4_4_);
              pcVar7 = (code *)((ulonglong)dVar6 >> 0x20);
              pfVar4[-1] = (float)fVar5;
              fVar5 = (float10)(*pcVar9)((double)*pfVar4,uVar10,local_4b0._4_4_);
              *pfVar4 = (float)fVar5;
              fVar5 = (float10)(*pcVar7)((double)pfVar4[1],uVar8,local_4b0._4_4_);
              pfVar4[1] = (float)fVar5;
              pfVar4 = pfVar4 + 4;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        else if (0 < iStack_464) {
          pfVar4 = (float *)(local_4b8 + 8);
          iVar2 = iStack_464;
          do {
            iVar3 = ftol();
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            else if (0xff < iVar3) {
              iVar3 = 0xff;
            }
            pfVar4[-2] = local_408[iVar3];
            iVar3 = ftol();
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            else if (0xff < iVar3) {
              iVar3 = 0xff;
            }
            pfVar4[-1] = local_408[iVar3];
            iVar3 = ftol();
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            else if (0xff < iVar3) {
              iVar3 = 0xff;
            }
            *pfVar4 = local_408[iVar3];
            iVar3 = ftol();
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            else if (0xff < iVar3) {
              iVar3 = 0xff;
            }
            pfVar4[1] = local_408[iVar3];
            pfVar4 = pfVar4 + 4;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_4b8 = local_4b8 + iStack_45c;
        iStack_4a4 = iStack_4a4 + -1;
      } while (iStack_4a4 != 0);
    }
  }
  FUN_00441270((int)local_498);
  return 0;
}


