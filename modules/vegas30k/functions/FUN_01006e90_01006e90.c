/* Module: vegas30k.dll
   Function: FUN_01006e90
   Address: 01006e90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01006e90(undefined1 *param_1,double *param_2)

{
  double dVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  uVar2 = ftol();
  dVar1 = _DAT_011db3f0;
  param_1[3] = uVar2;
  if (dVar1 != param_2[1]) {
    dVar1 = *param_2;
    if (*param_2 == _DAT_011db3d0) {
      dVar1 = _DAT_011db3f0;
    }
    floor(dVar1 * _DAT_011db400);
    uVar3 = ftol();
    switch(uVar3) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
    }
  }
  uVar2 = ftol();
  *param_1 = uVar2;
  uVar2 = ftol();
  param_1[1] = uVar2;
  uVar2 = ftol();
  param_1[2] = uVar2;
  return;
}


