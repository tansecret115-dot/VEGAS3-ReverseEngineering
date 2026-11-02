/* Module: wmfplug2.dll
   Function: FUN_004140e0
   Address: 004140e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004140e0(uint param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_2 + 0x10);
  while ((*piVar2 == 0 || (uVar1 == param_1))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
    if (4 < uVar1) {
      return 1;
    }
  }
  return 0;
}


