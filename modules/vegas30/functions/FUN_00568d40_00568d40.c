/* Module: vegas30.exe
   Function: FUN_00568d40
   Address: 00568d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00568d40(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_006595a0 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *DAT_006595a0;
  }
  iVar2 = 0;
  if (iVar3 < 1) {
    return 1;
  }
  do {
    piVar1 = *(int **)(DAT_006595a0[1] * iVar2 + DAT_006595a0[2] + 0x114);
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1,param_2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar3);
  return 1;
}


