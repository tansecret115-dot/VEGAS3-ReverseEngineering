/* Module: rnco3260.dll
   Function: RNColorCreateImageManipulator
   Address: 636f3320
   Source: Ghidra pseudocode (Stage 10 batch) */


int RNColorCreateImageManipulator(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* 0x3320  13  RNColorCreateImageManipulator */
  iVar2 = 0;
  puVar1 = operator_new(200);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_636f3440(puVar1);
  }
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  if (-1 < iVar2) {
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_637652d0,param_1);
  }
  return iVar2;
}


