/* Module: mp3plug.dll
   Function: FUN_5f6f4c90
   Address: 5f6f4c90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_5f6f4c90(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float fVar6;
  float *pfVar7;
  float10 in_ST0;
  float10 fVar8;
  float10 fVar9;
  int in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_ffffff94;
  
  fVar6 = _DAT_5f75e140;
  if (param_2 <= param_1) {
    fVar6 = (float)param_2 / (float)param_1;
  }
  fVar1 = _DAT_5f75e150;
  if (0 < param_2) {
    if (in_stack_00000014 == 2) {
      pfVar7 = (float *)(in_stack_00000018 + 0x3d0);
    }
    else {
      pfVar7 = (float *)(in_stack_00000018 + 0x3b0);
    }
    fVar1 = *(float *)(in_stack_00000018 + 0x3a8);
    if (*(float *)(in_stack_00000018 + 0x3a8) < (float)in_ST0) {
      fVar1 = (float)in_ST0;
    }
    fVar2 = *(float *)(in_stack_00000018 + 0x3ac);
    if (fVar1 < fVar2) {
      fVar2 = fVar1;
    }
    fVar8 = FUN_5f6f4ad0(in_stack_ffffff94,*pfVar7,pfVar7[1],pfVar7[2],pfVar7[3]);
    fVar9 = FUN_5f6f4b10(in_stack_ffffff94,pfVar7[4],pfVar7[5],pfVar7[6],pfVar7[7]);
    fVar1 = *(float *)(in_stack_00000018 + 0x3a8);
    fVar3 = *(float *)(in_stack_00000018 + 0x3a8);
    fVar4 = *(float *)(in_stack_00000018 + 0x3ac);
    fVar5 = (float10)_DAT_5f75e14c;
    FUN_5f6f4b50(param_2,(float *)(in_stack_00000018 + 0x3ac));
    fVar1 = (float)((fVar5 - (float10)(double)(fVar8 * (float10)fVar6)) +
                   (fVar9 * (float10)fVar6 + (float10)(double)(fVar8 * (float10)fVar6)) *
                   (((float10)fVar2 - (float10)fVar1) / ((float10)fVar4 - (float10)fVar3)));
  }
  return (float10)fVar1;
}


