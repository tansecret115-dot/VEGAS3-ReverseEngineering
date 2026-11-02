/* Module: vegas30k.dll
   Function: FUN_011a2940
   Address: 011a2940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011a2940(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 double param_7,double param_8,double param_9,double param_10,double param_11,
                 double param_12)

{
  double dVar1;
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
      dVar1 = *(double *)(param_1 + uVar3 * 8);
      if (param_2 != 0) {
        dVar2 = param_8;
        if (iVar4 == 0) {
          dVar2 = param_7;
        }
        *(double *)(param_2 + uVar3 * 8) = dVar1 * dVar2;
      }
      if (param_3 != 0) {
        dVar2 = param_12;
        if (iVar4 == 0) {
          dVar2 = param_11;
        }
        *(double *)(param_3 + uVar3 * 8) = dVar1 * dVar2;
      }
      if (param_4 != 0) {
        if (iVar4 == 0) {
          *(double *)(param_4 + uVar3 * 8) = dVar1 * param_9;
          *(double *)(param_4 + 8 + uVar3 * 8) = dVar1 * param_10;
        }
        else {
          *(double *)(param_4 + -8 + uVar3 * 8) =
               dVar1 * param_9 + *(double *)(param_4 + -8 + uVar3 * 8);
          *(double *)(param_4 + uVar3 * 8) = dVar1 * param_10 + *(double *)(param_4 + uVar3 * 8);
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


