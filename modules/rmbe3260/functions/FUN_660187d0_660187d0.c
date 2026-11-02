/* Module: rmbe3260.dll
   Function: FUN_660187d0
   Address: 660187d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_660187d0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (DAT_660750c8 == (int *)0x0) {
    piVar2 = (int *)FUN_66018ea0();
    if (piVar2 == (int *)0x0) {
      return -0x7ff8fff2;
    }
    iVar1 = (**(code **)(*piVar2 + 0x24))(piVar2);
    DAT_660750c8 = piVar2;
  }
  if (-1 < iVar1) {
    iVar1 = (**(code **)*DAT_660750c8)(DAT_660750c8,&DAT_66065b58,param_1);
  }
  return iVar1;
}


