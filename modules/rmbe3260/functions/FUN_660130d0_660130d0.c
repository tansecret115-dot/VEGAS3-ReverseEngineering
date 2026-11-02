/* Module: rmbe3260.dll
   Function: FUN_660130d0
   Address: 660130d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660130d0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = DAT_660750a4;
  piVar1 = DAT_660750a4;
  if (DAT_660750a4 == (int *)0x0) {
    piVar2 = (int *)FUN_66013d30();
    if (piVar2 == (int *)0x0) {
      return -0x7ff8fff2;
    }
    iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2);
    piVar1 = piVar2;
    if (iVar3 < 0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar1 = DAT_660750a4;
    }
  }
  DAT_660750a4 = piVar1;
  if (-1 < iVar3) {
    iVar3 = (**(code **)*piVar2)(piVar2,&DAT_66065928,param_1);
  }
  return iVar3;
}


