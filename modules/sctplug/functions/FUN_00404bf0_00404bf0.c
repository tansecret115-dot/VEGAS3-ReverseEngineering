/* Module: sctplug.dll
   Function: FUN_00404bf0
   Address: 00404bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00404bf0(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00404c50(param_1);
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x230) != 0)) {
    uVar2 = ftol();
    *param_2 = uVar2;
  }
  return iVar1;
}


