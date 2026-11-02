/* Module: rmme3260.dll
   Function: FUN_66242360
   Address: 66242360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66242360(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x10) + 0xc))(iVar1 + 0x10);
  }
  return 0;
}


