/* Module: rmme3260.dll
   Function: FUN_6624c6e0
   Address: 6624c6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6624c6e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_662352f0(*(int *)(param_1 + 0x40));
  if (iVar1 == 0) {
    return 0x80004005;
  }
  *param_2 = *(undefined4 *)(iVar1 + 0x10);
  return 0;
}


