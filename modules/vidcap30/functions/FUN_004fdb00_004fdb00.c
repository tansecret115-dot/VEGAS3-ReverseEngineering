/* Module: vidcap30.exe
   Function: FUN_004fdb00
   Address: 004fdb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fdb00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x488) == 2)) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    iVar3 = FUN_004fdb70(uVar1,param_2,param_3);
    if (iVar3 != 0) {
      FUN_004fd800(param_1,uVar1,uVar2,param_2,param_3);
      return;
    }
    iVar3 = FUN_004fdb70(uVar2,param_2,param_3);
    if (iVar3 != 0) {
      FUN_004fd5f0(param_1,uVar1,uVar2,param_2,param_3);
    }
  }
  return;
}


