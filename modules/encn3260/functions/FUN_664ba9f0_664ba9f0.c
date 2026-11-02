/* Module: encn3260.dll
   Function: FUN_664ba9f0
   Address: 664ba9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_664ba9f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[1];
  iVar2 = *piVar1;
  iVar3 = piVar1[2];
  param_1[1] = iVar2;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = 0;
    (**(code **)(*param_1 + 0x20))(piVar1);
    return iVar3;
  }
  param_1[2] = 0;
  (**(code **)(*param_1 + 0x20))(piVar1);
  return iVar3;
}


