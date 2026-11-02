/* Module: vegas30.exe
   Function: FUN_004942c0
   Address: 004942c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004942c0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(uint *)(param_1 + 400);
  iVar7 = (uVar2 - *(int *)(param_1 + 0x194)) - (uint)(uVar1 < uVar3);
  iVar6 = *(int *)(param_1 + 0x194) + uVar2 + (uint)CARRY4(uVar3,uVar1);
  if ((((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) ||
     ((*(int *)(param_1 + 0xb74) < 1 && (*(int *)(param_1 + 0xb74) < 0)))) {
    uVar4 = *(uint *)(param_1 + 0xb70);
    uVar5 = *(uint *)(param_1 + 0xb74);
    if ((iVar7 <= (int)uVar5) &&
       (((((iVar7 < (int)uVar5 || (uVar1 - uVar3 <= uVar4)) && ((int)uVar5 <= iVar6)) &&
         (((int)uVar5 < iVar6 || (uVar4 <= uVar3 + uVar1)))) &&
        ((uVar1 != uVar4 || (uVar2 != uVar5)))))) {
      *param_2 = uVar4;
      param_2[1] = uVar5;
      return 1;
    }
  }
  return 0;
}


