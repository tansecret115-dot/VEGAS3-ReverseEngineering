/* Module: tokr3260.dll
   Function: FUN_68058200
   Address: 68058200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_68058200(byte param_1,int param_2,float *param_3,uint *param_4)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  int local_8;
  
  iVar3 = 1 << (param_1 & 0x1f);
  local_8 = 0;
  if (0 < iVar3 / 2) {
    pfVar2 = param_3;
    do {
      fVar5 = (float10)local_8;
      local_8 = local_8 + 1;
      fVar5 = (fVar5 * (float10)_DAT_6805b1b0) / (float10)iVar3;
      fVar6 = (float10)fsin(fVar5);
      fVar5 = (float10)fcos(fVar5);
      *(float *)((param_2 - (int)param_3) + -4 + (int)(pfVar2 + 1)) = (float)fVar5;
      *pfVar2 = (float)-fVar6;
      pfVar2 = pfVar2 + 1;
    } while (local_8 < iVar3 / 2);
  }
  uVar4 = 0;
  if (0 < iVar3) {
    do {
      uVar1 = FUN_68058290(param_1,uVar4);
      *param_4 = uVar1;
      uVar4 = uVar4 + 1;
      param_4 = param_4 + 1;
    } while ((int)uVar4 < iVar3);
  }
  return;
}


