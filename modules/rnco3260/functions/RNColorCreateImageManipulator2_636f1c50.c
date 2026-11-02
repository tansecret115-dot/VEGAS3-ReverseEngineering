/* Module: rnco3260.dll
   Function: RNColorCreateImageManipulator2
   Address: 636f1c50
   Source: Ghidra pseudocode (Stage 10 batch) */


int RNColorCreateImageManipulator2(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* 0x1c50  12  RNColorCreateImageManipulator2 */
  iVar2 = 0;
  puVar1 = operator_new(100);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_636f1e20(puVar1);
  }
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  if (-1 < iVar2) {
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_637652b0,param_1);
    if ((-1 < iVar2) && (DAT_63767240 == 0)) {
      InitColorConverter();
      SetColorAdjustments(0.0,0.0,0.0,0.0);
      DAT_63767240 = 1;
    }
  }
  return iVar2;
}


