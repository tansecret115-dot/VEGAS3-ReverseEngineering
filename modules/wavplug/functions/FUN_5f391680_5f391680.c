/* Module: wavplug.dll
   Function: FUN_5f391680
   Address: 5f391680
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f391680(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_5f3916e0(param_1);
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x230) != 0)) {
    uVar2 = ftol();
    *param_2 = uVar2;
  }
  return iVar1;
}


