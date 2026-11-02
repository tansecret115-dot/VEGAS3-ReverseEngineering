/* Module: vegas30.exe
   Function: FUN_005748c0
   Address: 005748c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005748c0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0x74) != 0)) &&
     (*(int *)(*(int *)(DAT_0064762c + 0x74) + 0x80) != 0)) {
    if (param_2 == 2) {
      uVar2 = 4;
    }
    else if (param_2 == 3) {
      uVar2 = 2;
    }
    else {
      if (param_2 != 5) {
        return;
      }
      uVar2 = 1;
    }
    iVar1 = FUN_0056a550(param_1,uVar2);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(iVar1 + 4) + 0x5c))(*(int **)(iVar1 + 4),&local_18);
      *(undefined4 *)(iVar1 + 0x20) = unaff_EBX;
      *(undefined4 *)(iVar1 + 0x24) = uStack_1c;
      *(undefined4 *)(iVar1 + 0x28) = local_18;
      *(undefined4 *)(iVar1 + 0x2c) = uStack_14;
      if (param_2 == 3) {
        (**(code **)(**(int **)(iVar1 + 4) + 0x78))(*(int **)(iVar1 + 4),&stack0xffffffe0);
        *(undefined4 *)(iVar1 + 0x628) = unaff_EBX;
        *(undefined4 *)(iVar1 + 0x62c) = uStack_1c;
        *(undefined4 *)(iVar1 + 0x630) = local_18;
        *(undefined4 *)(iVar1 + 0x634) = uStack_14;
      }
      FUN_0056df80(iVar1);
    }
  }
  return;
}


