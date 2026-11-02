/* Module: rmto3260.dll
   Function: FUN_662dd960
   Address: 662dd960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662dd960(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (puVar1 = *(undefined4 **)(param_1 + 0x34), puVar1 != (undefined4 *)0x0)) {
    uVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3);
    return uVar2;
  }
  return 0x80004005;
}


