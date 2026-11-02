/* Module: vegas30.exe
   Function: FUN_0050e5b0
   Address: 0050e5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050e5b0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,double param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68 [5];
  int local_54;
  int local_50;
  int local_4c;
  tSFMATRIX3D local_48 [68];
  
  iVar5 = 4 - (uint)(param_9 != 0);
  if (param_9 == 0) {
    local_68[0] = param_2;
    local_68[1] = param_3 - param_5;
    local_68[2] = param_2 + param_5;
    local_68[4] = param_2;
    local_68[3] = param_3;
    local_54 = param_3 + param_5;
    local_50 = param_2 - param_5;
    local_4c = param_3;
  }
  else {
    local_68[0] = param_2;
    local_68[1] = param_3 + param_5 * -2;
    local_68[2] = param_2 + param_5;
    local_68[3] = param_3 + param_5;
    local_68[4] = param_2 - param_5;
    local_54 = param_3 + param_5;
    if (_DAT_00610fd8 != param_8) {
      SfMatrix3DMakeIdentity(local_48);
      SfMatrix3DTranslate((float)-param_2,(float)-param_3,0.0,local_48);
      SfMatrix3DRotate(0.0,0.0,1.0,(float)param_8,local_48);
      SfMatrix3DTranslate((float)param_2,(float)param_3,0.0,local_48);
      if (iVar5 < 1) goto LAB_0050e6f9;
      piVar3 = local_68 + 1;
      iVar4 = iVar5;
      do {
        local_78 = (float)piVar3[-1];
        local_74 = (float)*piVar3;
        local_70 = 0;
        local_6c = 0x3f800000;
        Sf3DTransformInPlace(&local_78,local_48);
        iVar1 = ftol();
        piVar3[-1] = iVar1;
        iVar1 = ftol();
        *piVar3 = iVar1;
        piVar3 = piVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if (0 < iVar5) {
    piVar3 = local_68 + 1;
    iVar4 = iVar5;
    do {
      piVar3[-1] = piVar3[-1] + 1;
      iVar4 = iVar4 + -1;
      *piVar3 = *piVar3 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar4 != 0);
  }
LAB_0050e6f9:
  uVar7 = 0;
  uVar6 = 0;
  uVar2 = ftol(0,0);
  FUN_0050aba0(param_1,local_68,iVar5,0x141414,uVar2,uVar6,uVar7);
  if (0 < iVar5) {
    piVar3 = local_68 + 1;
    iVar4 = iVar5;
    do {
      piVar3[-1] = piVar3[-1] + -1;
      iVar4 = iVar4 + -1;
      *piVar3 = *piVar3 + -1;
      piVar3 = piVar3 + 2;
    } while (iVar4 != 0);
  }
  uVar7 = 0;
  uVar6 = 0;
  uVar2 = ftol(0,0);
  FUN_0050aba0(param_1,local_68,iVar5,param_4,uVar2,uVar6,uVar7);
  return;
}


