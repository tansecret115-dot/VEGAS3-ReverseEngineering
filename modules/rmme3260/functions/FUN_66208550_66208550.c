/* Module: rmme3260.dll
   Function: FUN_66208550
   Address: 66208550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66208550(int param_1,short param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  *param_3 = 0;
  iVar3 = 0;
  uVar2 = 0x40012;
  if (0 < *(int *)(param_1 + 0x1c)) {
    piVar4 = *(int **)(param_1 + 0x18);
    while ((iVar1 = *piVar4, iVar1 == 0 || (*(short *)(iVar1 + 4) != param_2))) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      if (*(int *)(param_1 + 0x1c) <= iVar3) {
        return uVar2;
      }
    }
    uVar2 = 0;
    *param_3 = iVar1;
  }
  return uVar2;
}


