/* Module: vidcap30.exe
   Function: FUN_00580c50
   Address: 00580c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00580c50(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0x8004025f;
  }
  if (param_2 == 1) {
    iVar2 = *(int *)(param_1 + 0x8c);
    if (*(int *)(iVar2 + 0x18) != 0) {
      if (iVar2 != 0) {
        uVar1 = FUN_0057cac0(iVar2 + 0xc,*(int *)(param_1 + 0x90) + 0x34);
        return uVar1;
      }
      uVar1 = FUN_0057cac0(0,*(int *)(param_1 + 0x90) + 0x34);
      return uVar1;
    }
  }
  else if (*(int *)(*(int *)(param_1 + 0x90) + 0x18) != 0) {
    iVar2 = FUN_0057ae60(*(int *)(param_1 + 0x90) + 0x34);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x90) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x90) + 0xc;
      }
      uVar1 = FUN_0057cac0(iVar2,*(int *)(param_1 + 0x8c) + 0x34);
      return uVar1;
    }
  }
  return 0;
}


