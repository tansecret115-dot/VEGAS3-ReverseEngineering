/* Module: vidcap30.exe
   Function: FUN_0046fbd0
   Address: 0046fbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0046fbd0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8007000e;
  iVar1 = FUN_0046ed20();
  if (iVar1 != 0) {
    uVar2 = 0;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
    *(int *)(*(int *)(param_2 + 4) + 0x128) = *(int *)(*(int *)(param_2 + 4) + 0x128) + -1;
    *(uint *)(*(int *)(param_2 + 4) + 0x124) = *(uint *)(*(int *)(param_2 + 4) + 0x124) | 0x10;
    if (*(int *)(param_1 + 0x1c) != 0) {
      DAT_005ba50c = DAT_005ba50c | 0x100;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_2 + 8);
    }
    if (*(int *)(param_2 + 8) == 0) {
      if (param_1 != iVar1) {
        uVar2 = FUN_0046e8d0(param_2);
        return uVar2;
      }
      if (*(int *)(*(int *)(param_2 + 4) + 0x128) == 0) {
        if (param_3 != 0) {
          uVar2 = FUN_0046e8d0(param_2);
          return uVar2;
        }
        FUN_00471030(0);
      }
    }
  }
  return uVar2;
}


