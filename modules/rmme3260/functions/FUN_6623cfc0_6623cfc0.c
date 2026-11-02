/* Module: rmme3260.dll
   Function: FUN_6623cfc0
   Address: 6623cfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6623cfc0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x138;
  if (*(int *)(param_1 + 0x138) == 0) {
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)(iVar1 + 0xc) + 0x10))(iVar1 + 0xc);
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


