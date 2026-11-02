/* Module: sfppack2.dll
   Function: FUN_5ccdae50
   Address: 5ccdae50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ccdae50(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_5ccdaf20(param_1,*param_2);
  uVar3 = 0;
  piVar1 = param_1;
  if (*param_2 != 0) {
    do {
      iVar2 = piVar1[1];
      if (iVar2 < -500) {
        iVar2 = -500;
      }
      else if (400 < iVar2) {
        iVar2 = 400;
      }
      piVar1[1] = iVar2;
      iVar2 = *piVar1;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (10000 < iVar2) {
        iVar2 = 10000;
      }
      *piVar1 = iVar2;
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 2;
    } while (uVar3 < *param_2);
  }
  uVar3 = *param_2;
  uVar5 = 1;
  if (uVar3 != 1 && uVar3 != 2) {
    piVar1 = param_1 + 1;
    do {
      if (uVar3 < 3) {
        return;
      }
      iVar2 = piVar1[2];
      if ((*piVar1 == iVar2) && (iVar2 == piVar1[4])) {
        FUN_5ccdace0((int)param_1,uVar5,(int *)param_2);
      }
      else if ((piVar1[1] - piVar1[-1] < 100) &&
              (uVar3 = iVar2 - *piVar1, uVar4 = (int)uVar3 >> 0x1f,
              (int)((uVar3 ^ uVar4) - uVar4) < 10)) {
        FUN_5ccdace0((int)param_1,uVar5,(int *)param_2);
      }
      else {
        uVar5 = uVar5 + 1;
        piVar1 = piVar1 + 2;
      }
      uVar3 = *param_2;
    } while (uVar5 < uVar3 - 1);
  }
  return;
}


