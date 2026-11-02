/* Module: sfpaplug.dll
   Function: FUN_00410ed0
   Address: 00410ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00410ed0(uint param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  int *piVar3;
  int unaff_EBP;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = FUN_00411100(param_1);
  }
  else {
    iVar1 = FUN_00410fd0(param_1);
  }
  if (-1 < iVar1) {
    pvVar2 = GlobalAlloc(0x40,0x2c);
    piVar3 = GlobalLock(pvVar2);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xc);
      piVar3[1] = 0;
      piVar3[2] = iVar1;
      piVar3[3] = -1;
      piVar3[4] = 0;
      piVar3[5] = 0xc;
      piVar3[6] = 100;
      piVar3[8] = 0;
      piVar3[9] = 0;
      *piVar3 = (int)&PTR_FUN_0044e880;
      piVar3[10] = 0;
    }
    *(int **)(param_1 + 8) = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
      if (*(int *)(param_1 + 0x20) == 0) {
        iVar1 = FUN_00411430(param_1);
      }
      else {
        iVar1 = FUN_004112e0(param_1);
      }
      if (iVar1 < 0) {
        return iVar1;
      }
      pvVar2 = GlobalAlloc(0x40,0x2c);
      piVar3 = GlobalLock(pvVar2);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x14);
        piVar3[1] = 0;
        piVar3[2] = iVar1;
        piVar3[3] = -1;
        piVar3[4] = 0;
        piVar3[5] = 0xc;
        piVar3[6] = 100;
        piVar3[8] = 0;
        piVar3[9] = 0;
        *piVar3 = (int)&PTR_FUN_0044ef68;
        piVar3[10] = 0;
      }
      *(int **)(param_1 + 0x10) = piVar3;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(piVar3);
        return unaff_EBP;
      }
    }
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}


