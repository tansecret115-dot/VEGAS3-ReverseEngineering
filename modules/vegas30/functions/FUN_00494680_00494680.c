/* Module: vegas30.exe
   Function: FUN_00494680
   Address: 00494680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00494680(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar1 = *param_2;
  uVar2 = *(uint *)(param_1 + 400);
  iVar7 = (param_2[1] - *(int *)(param_1 + 0x194)) - (uint)(uVar1 < uVar2);
  uVar8 = *(uint *)(param_1 + 0xb74);
  iVar5 = *(int *)(param_1 + 0x194) + param_2[1] + (uint)CARRY4(uVar2,uVar1);
  uVar3 = *(uint *)(param_1 + 0xb70);
  if ((iVar7 <= (int)uVar8) &&
     ((((iVar7 < (int)uVar8 || (uVar1 - uVar2 <= uVar3)) && ((int)uVar8 <= iVar5)) &&
      (((int)uVar8 < iVar5 || (uVar3 <= uVar2 + uVar1)))))) {
    *param_2 = uVar3;
    param_2[1] = uVar8;
    return 1;
  }
  uVar4 = *(uint *)(param_1 + 0xb78);
  if (uVar4 != 0 || *(int *)(param_1 + 0xb7c) != 0) {
    uVar6 = uVar3 + uVar4;
    uVar8 = uVar8 + *(int *)(param_1 + 0xb7c) + (uint)CARRY4(uVar3,uVar4);
    if ((((iVar7 <= (int)uVar8) && ((iVar7 < (int)uVar8 || (uVar1 - uVar2 <= uVar6)))) &&
        ((int)uVar8 <= iVar5)) && (((int)uVar8 < iVar5 || (uVar6 <= uVar2 + uVar1)))) {
      *param_2 = uVar6;
      param_2[1] = uVar8;
      return 1;
    }
  }
  return 0;
}


