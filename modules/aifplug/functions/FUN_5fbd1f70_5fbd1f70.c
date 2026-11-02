/* Module: aifplug.dll
   Function: FUN_5fbd1f70
   Address: 5fbd1f70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd1f70(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_5fbd1fd0(param_1);
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x220) != 0)) {
    uVar2 = ftol();
    *param_2 = uVar2;
  }
  return iVar1;
}


