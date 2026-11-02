/* Module: pnrs3260.dll
   Function: PNCreateInstance
   Address: 606f1000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 PNCreateInstance(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  
                    /* 0x1000  1  PNCreateInstance */
  if (DAT_606f4038 == (int *)0x0) {
    puVar2 = operator_new(0xc);
    if (puVar2 == (undefined4 *)0x0) {
      DAT_606f4038 = (int *)0x0;
    }
    else {
      DAT_606f4038 = FUN_606f1050(puVar2);
    }
  }
  piVar1 = DAT_606f4038;
  bVar3 = DAT_606f4038 == (int *)0x0;
  *param_1 = DAT_606f4038;
  if (bVar3) {
    return 0x8007000e;
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


