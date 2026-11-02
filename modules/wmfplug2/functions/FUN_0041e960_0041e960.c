/* Module: wmfplug2.dll
   Function: FUN_0041e960
   Address: 0041e960
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041e960(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x214);
  if (*(int *)(param_1 + 0x214) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x224) != 0) {
    FUN_004068f0(*(int *)(param_1 + 0x224));
  }
  if ((*piVar1 != 0) || (iVar3 = WMCreateEditor(piVar1), -1 < iVar3)) {
    iVar3 = (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1,param_1 + 0xc);
    if (iVar3 < 0) {
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *piVar1 = 0;
      return iVar3;
    }
    iVar3 = FUN_0041e9f0(param_1);
    if (iVar3 < 0) {
      (**(code **)(*(int *)*piVar1 + 0x10))((int *)*piVar1);
    }
  }
  return iVar3;
}


