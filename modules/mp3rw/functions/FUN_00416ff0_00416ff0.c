/* Module: mp3rw.dll
   Function: FUN_00416ff0
   Address: 00416ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00416ff0(void *param_1)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int local_4;
  
  pvVar1 = param_1;
  if (param_1 != (void *)0x0) {
    iVar3 = FUN_00412f90(param_1,&local_4,(int *)&param_1,2);
    switch(iVar3) {
    case 0x4e12e:
    case 0x4e131:
    case 0x4e136:
    case 0x4e137:
      bVar2 = FUN_004117b0(pvVar1);
      return (bool)('\x01' - (CONCAT31(extraout_var,bVar2) != 1));
    case 0x4e12f:
      return true;
    }
  }
  return false;
}


