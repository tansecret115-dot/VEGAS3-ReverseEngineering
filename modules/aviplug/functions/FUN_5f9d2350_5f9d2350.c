/* Module: aviplug.dll
   Function: FUN_5f9d2350
   Address: 5f9d2350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9d2350(double *param_1,int param_2,double *param_3)

{
  double *pdVar1;
  int iVar2;
  
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0x3ff00000;
  *(undefined4 *)(param_3 + 1) = 0;
  *(undefined4 *)((int)param_3 + 0xc) = 0;
  iVar2 = param_2;
  pdVar1 = param_3;
  if (0 < param_2) {
    do {
      iVar2 = iVar2 + -1;
      *(undefined4 *)(pdVar1 + 2) = 0;
      *(undefined4 *)((int)pdVar1 + 0x14) = 0;
      *(undefined4 *)(pdVar1 + 3) = 0;
      *(undefined4 *)((int)pdVar1 + 0x1c) = 0;
      pdVar1 = pdVar1 + 2;
    } while (iVar2 != 0);
    iVar2 = param_2;
    if (0 < param_2) {
      do {
        FUN_5f9d2440(*param_1,param_1[1],param_2,param_3);
        param_1 = param_1 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}


