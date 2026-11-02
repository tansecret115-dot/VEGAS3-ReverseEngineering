/* Module: sftrans1.dll
   Function: FUN_0047c4e0
   Address: 0047c4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0047c4e0(HWND param_1,double *param_2,double param_3,double param_4,double param_5,
            double param_6)

{
  int iVar1;
  float10 fVar2;
  CHAR local_104 [260];
  
  *param_2 = param_3;
  iVar1 = GetWindowTextA(param_1,local_104,0x104);
  if (iVar1 == 0) {
    return 0;
  }
  fVar2 = (float10)FUN_004d6ed0(local_104,0);
  if ((float10)param_4 <= fVar2) {
    fVar2 = (float10)FUN_004d6ed0(local_104,0);
    if (fVar2 <= (float10)param_5) {
      fVar2 = (float10)FUN_004d6ed0(local_104,0);
    }
    else {
      fVar2 = (float10)param_5;
    }
  }
  else {
    fVar2 = (float10)param_4;
  }
  *param_2 = (double)fVar2;
  if ((float10)param_6 < ABS(fVar2 - (float10)param_3)) {
    return 1;
  }
  return 0;
}


