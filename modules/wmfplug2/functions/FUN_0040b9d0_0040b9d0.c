/* Module: wmfplug2.dll
   Function: FUN_0040b9d0
   Address: 0040b9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040b9d0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    puVar1 = FUN_0040c890(param_1);
    *(undefined4 **)(param_1 + 0x24) = puVar1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return -0x7ff8fff2;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0xc))
                    (param_1 + 0x10,*(int *)(param_1 + 0x24),param_2);
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return iVar2;
}


