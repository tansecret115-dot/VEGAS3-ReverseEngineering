/* Module: vegas30k.dll
   Function: FUN_011a2880
   Address: 011a2880
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011a2880(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 double param_7,double param_8,double param_9,double param_10,double param_11,
                 double param_12)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = 0;
  uVar3 = 0;
  iVar5 = 0;
  if ((-1 < param_6) && ((0 < param_6 || (param_5 != 0)))) {
    do {
      fVar1 = *(float *)(param_1 + uVar3 * 4);
      if (param_2 != 0) {
        dVar2 = param_8;
        if (iVar4 == 0) {
          dVar2 = param_7;
        }
        *(float *)(param_2 + uVar3 * 4) = fVar1 * (float)dVar2;
      }
      if (param_3 != 0) {
        dVar2 = param_12;
        if (iVar4 == 0) {
          dVar2 = param_11;
        }
        *(float *)(param_3 + uVar3 * 4) = fVar1 * (float)dVar2;
      }
      if (param_4 != 0) {
        if (iVar4 == 0) {
          *(float *)(param_4 + uVar3 * 4) = fVar1 * (float)param_9;
          *(float *)(param_4 + 4 + uVar3 * 4) = fVar1 * (float)param_10;
        }
        else {
          *(float *)(param_4 + -4 + uVar3 * 4) =
               fVar1 * (float)param_9 + *(float *)(param_4 + -4 + uVar3 * 4);
          *(float *)(param_4 + uVar3 * 4) =
               fVar1 * (float)param_10 + *(float *)(param_4 + uVar3 * 4);
        }
      }
      iVar4 = iVar4 + 1;
      if (iVar4 == 2) {
        iVar4 = 0;
      }
      bVar6 = 0xfffffffe < uVar3;
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + (uint)bVar6;
    } while ((iVar5 < param_6) || ((iVar5 <= param_6 && (uVar3 < param_5))));
  }
  return;
}


