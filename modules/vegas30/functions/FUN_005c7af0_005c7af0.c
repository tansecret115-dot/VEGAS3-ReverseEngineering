/* Module: vegas30.exe
   Function: FUN_005c7af0
   Address: 005c7af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005c7af0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x20);
  if ((iVar4 < 0) || ((iVar4 < 1 && (iVar3 == 0)))) {
    iVar3 = 0;
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x20) = iVar3;
  iVar3 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x24) = iVar4;
  iVar4 = *(int *)(param_1 + 0x2c);
  if ((iVar4 < 0) || ((iVar4 < 1 && (iVar3 == 0)))) {
    iVar3 = 0;
    iVar4 = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  *(int *)(param_1 + 0x28) = iVar3;
  *(int *)(param_1 + 0x2c) = iVar4;
  uVar2 = *(uint *)(param_1 + 0x28);
  iVar3 = iVar4 + *(int *)(param_1 + 0x24) + (uint)CARRY4(uVar2,uVar1);
  if ((param_3 <= iVar3) && ((param_3 < iVar3 || (param_2 < uVar2 + uVar1)))) {
    if (uVar1 == 0 && *(int *)(param_1 + 0x24) == 0) {
      *(uint *)(param_1 + 0x28) = param_2;
      *(int *)(param_1 + 0x2c) = param_3;
      return;
    }
    if (uVar2 == 0 && iVar4 == 0) {
      *(uint *)(param_1 + 0x20) = param_2;
      *(int *)(param_1 + 0x24) = param_3;
      return;
    }
    uVar5 = ftol();
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    *(uint *)(param_1 + 0x28) = param_2 - *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x2c) =
         (param_3 - (int)((ulonglong)uVar5 >> 0x20)) - (uint)(param_2 < *(uint *)(param_1 + 0x20));
  }
  return;
}


