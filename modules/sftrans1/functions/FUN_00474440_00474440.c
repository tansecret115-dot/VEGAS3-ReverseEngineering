/* Module: sftrans1.dll
   Function: FUN_00474440
   Address: 00474440
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00474440(int param_1,double param_2,double param_3,double param_4,undefined4 param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  iVar3 = param_1;
  switch(param_5) {
  case 0:
    *(double *)(param_1 + 0x18) = param_2 + *(double *)(param_1 + 0x18);
    *(double *)(param_1 + 0x20) = param_3 + *(double *)(param_1 + 0x20);
    *(double *)(param_1 + 0x28) = param_4 + *(double *)(param_1 + 0x28);
    return;
  case 1:
    param_1 = 1;
    if (_DAT_00555910 <= *(double *)(iVar3 + 0x18)) {
      param_1 = -1;
    }
    dVar1 = (double)param_1;
    param_1 = 1;
    *(double *)(iVar3 + 0x18) = dVar1 * param_2 + *(double *)(iVar3 + 0x18);
    if (_DAT_00555910 <= *(double *)(iVar3 + 0x20)) {
      param_1 = -1;
    }
    dVar1 = (double)param_1;
    param_1 = 1;
    *(double *)(iVar3 + 0x20) = dVar1 * param_3 + *(double *)(iVar3 + 0x20);
    if (_DAT_00555910 <= *(double *)(iVar3 + 0x28)) {
      param_1 = -1;
    }
    *(double *)(iVar3 + 0x28) = (double)param_1 * param_4 + *(double *)(iVar3 + 0x28);
    return;
  case 2:
    *(double *)(param_1 + 0x18) = param_2 * *(double *)(param_1 + 0x18);
    *(double *)(param_1 + 0x20) = param_3 * *(double *)(param_1 + 0x20);
    *(double *)(param_1 + 0x28) = param_4 * *(double *)(param_1 + 0x28);
    return;
  case 3:
    *(double *)(param_1 + 0x18) = (param_2 + _DAT_00555908) * *(double *)(param_1 + 0x18);
    *(double *)(param_1 + 0x20) = (param_3 + _DAT_00555908) * *(double *)(param_1 + 0x20);
    *(double *)(param_1 + 0x28) = (param_4 + _DAT_00555908) * *(double *)(param_1 + 0x28);
    return;
  case 4:
    dVar1 = *(double *)(param_1 + 0x18);
    if (_DAT_00555910 <= *(double *)(param_1 + 0x18)) {
      dVar1 = -dVar1;
    }
    dVar1 = dVar1 * param_2 + *(double *)(param_1 + 0x18);
    *(double *)(param_1 + 0x18) = dVar1;
    if (_DAT_00555910 <= *(double *)(param_1 + 0x20)) {
      dVar2 = -dVar1;
    }
    else {
      dVar2 = *(double *)(param_1 + 0x20);
    }
    *(double *)(param_1 + 0x20) = dVar2 * param_3 + *(double *)(param_1 + 0x20);
    if (*(double *)(param_1 + 0x28) < _DAT_00555910) {
      *(double *)(param_1 + 0x28) =
           *(double *)(param_1 + 0x28) * param_4 + *(double *)(param_1 + 0x28);
      return;
    }
    *(double *)(param_1 + 0x28) = -dVar1 * param_4 + *(double *)(param_1 + 0x28);
  }
  return;
}


