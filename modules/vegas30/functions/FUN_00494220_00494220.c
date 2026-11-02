/* Module: vegas30.exe
   Function: FUN_00494220
   Address: 00494220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00494220(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = *param_2;
  uVar2 = *(uint *)(param_1 + 400);
  iVar5 = (param_2[1] - *(int *)(param_1 + 0x194)) - (uint)(uVar1 < uVar2);
  iVar3 = *(int *)(param_1 + 0x194) + param_2[1] + (uint)CARRY4(uVar2,uVar1);
  if ((((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) ||
     ((*(int *)(param_1 + 0xb74) < 1 && (*(int *)(param_1 + 0xb74) < 0)))) {
    uVar4 = *(uint *)(param_1 + 0x98) - *(uint *)(param_1 + 0x1a0);
    uVar6 = (*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x1a4)) -
            (uint)(*(uint *)(param_1 + 0x98) < *(uint *)(param_1 + 0x1a0));
    if ((iVar5 <= (int)uVar6) &&
       ((((iVar5 < (int)uVar6 || (uVar1 - uVar2 <= uVar4)) && ((int)uVar6 <= iVar3)) &&
        (((int)uVar6 < iVar3 || (uVar4 <= uVar2 + uVar1)))))) {
      *param_2 = uVar4;
      param_2[1] = uVar6;
      return 1;
    }
  }
  return 0;
}


