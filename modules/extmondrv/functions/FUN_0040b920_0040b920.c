/* Module: extmondrv.dll
   Function: FUN_0040b920
   Address: 0040b920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040b920(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  piVar1 = (int *)param_1[0xc];
  if ((piVar1 != (int *)0x0) && (param_1[4] != 0)) {
    local_4 = param_1 + 0xd;
    iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,&local_4);
    if (-1 < iVar2) {
      (**(code **)(*param_1 + 0x40))(0);
      return 1;
    }
  }
  return 0;
}


