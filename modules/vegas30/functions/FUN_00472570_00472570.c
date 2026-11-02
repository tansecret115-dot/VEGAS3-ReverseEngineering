/* Module: vegas30.exe
   Function: FUN_00472570
   Address: 00472570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00472570(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x34) + -6;
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  else if (param_1[1] < iVar3) {
    iVar3 = param_1[1];
  }
  iVar2 = iVar3;
  uVar1 = ftol(iVar3);
  iVar2 = FUN_004724b0(param_1[1],uVar1,iVar2);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  *param_1 = iVar2;
  param_1[1] = iVar3;
  return;
}


