/* Module: vegas30.exe
   Function: FUN_005ed4a0
   Address: 005ed4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005ed4a0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8007000e;
  iVar1 = FUN_005ec620();
  if (iVar1 != 0) {
    uVar2 = 0;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
    *(int *)(*(int *)(param_2 + 4) + 0x140) = *(int *)(*(int *)(param_2 + 4) + 0x140) + -1;
    *(uint *)(*(int *)(param_2 + 4) + 0x134) = *(uint *)(*(int *)(param_2 + 4) + 0x134) | 0x10;
    if (*(int *)(param_1 + 0x1c) != 0) {
      DAT_0064767c = DAT_0064767c | 0x100;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_2 + 8);
    }
    if (*(int *)(param_2 + 8) == 0) {
      if (param_1 != iVar1) {
        uVar2 = FUN_005ec1d0(param_2);
        return uVar2;
      }
      if (*(int *)(*(int *)(param_2 + 4) + 0x140) == 0) {
        if (param_3 != 0) {
          uVar2 = FUN_005ec1d0(param_2);
          return uVar2;
        }
        FUN_005f0120(0);
      }
    }
  }
  return uVar2;
}


