/* Module: rmto3260.dll
   Function: RMACreateRMFile
   Address: 662dc680
   Source: Ghidra pseudocode (Stage 10 batch) */


int RMACreateRMFile(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0x1c680  6  RMACreateRMFile */
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffb;
  }
  puVar1 = operator_new(0x68);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_662dc700(puVar1);
  }
  if (piVar2 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,param_2);
  if (-1 < iVar3) {
    *param_1 = piVar2 + 4;
    return iVar3;
  }
  *param_1 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  return iVar3;
}


