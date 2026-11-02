/* Module: vegas30.exe
   Function: FUN_00579990
   Address: 00579990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00579990(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_EDI;
  
  piVar2 = param_1;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    param_1 = (int *)0x0;
    uVar3 = (**(code **)(*piVar1 + 0x40))(piVar1,&param_1);
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar2 = unaff_EDI;
    return uVar3;
  }
  *param_1 = 0;
  return 0;
}


