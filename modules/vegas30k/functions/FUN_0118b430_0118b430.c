/* Module: vegas30k.dll
   Function: FUN_0118b430
   Address: 0118b430
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0118b430(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  int *piVar5;
  int *unaff_ESI;
  
  piVar2 = param_1;
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    return -0x7fff0001;
  }
  if (param_3 != 1) {
    return -0x7fffbfff;
  }
  if (param_2 == 0) {
    iVar3 = FUN_0118fa20(&param_1);
    if (param_1 != (int *)0x0) {
      piVar5 = (int *)0x0;
      iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      if (-1 < iVar3) {
        piVar1 = (int *)piVar2[0x35];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        iVar3 = (**(code **)(*(int *)piVar2[0x2c] + 0x14))((int *)piVar2[0x2c],piVar2 + 0x35);
        piVar2[0x15] = piVar2[0x15] & 0xfff8ffff;
      }
      (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,0);
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
  else {
    iVar3 = FUN_0118fa20(&param_1);
    if (param_1 != (int *)0x0) {
      hMem = GlobalAlloc(0x40,0x10);
      pvVar4 = GlobalLock(hMem);
      if (pvVar4 == (LPVOID)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_011a2c80(piVar2);
      }
      FUN_011a2cd0(1);
      (**(code **)(*param_1 + 0xc))(param_1);
      iVar3 = (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,1);
      if (-1 < iVar3) {
        piVar1 = (int *)piVar2[0x35];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        FUN_0118f9b0(piVar2 + 0x35);
        piVar2[0x15] = piVar2[0x15] & 0xfff9ffffU | 0x10000;
      }
      (**(code **)(*piVar5 + 8))(piVar5);
      return iVar3;
    }
  }
  return iVar3;
}


