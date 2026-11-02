/* Module: vegas30k.dll
   Function: FUN_011bf2f0
   Address: 011bf2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011bf2f0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x204) == 0) {
    *(uint *)(param_1 + 0x168) = param_2;
    *(int *)(param_1 + 0x16c) = param_3;
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x174);
  uVar1 = *(uint *)(param_1 + 0x170);
  iVar2 = *(int *)(param_1 + 0x16c);
  uVar3 = *(uint *)(param_1 + 0x168);
  if ((iVar4 <= iVar2) && ((iVar4 < iVar2 || (uVar1 <= uVar3)))) {
    if ((param_3 < iVar2) || ((param_3 <= iVar2 && (param_2 < uVar3)))) {
      iVar5 = (iVar2 - param_3) - (uint)(uVar3 < param_2);
      if ((iVar4 <= iVar5) && ((iVar4 < iVar5 || (uVar1 <= uVar3 - param_2)))) {
        *(undefined4 *)(param_1 + 0x170) = 0;
        *(undefined4 *)(param_1 + 0x174) = 0;
        goto LAB_011bf39f;
      }
      iVar4 = (iVar4 - iVar2) - (uint)(uVar1 < uVar3);
    }
    else {
      iVar4 = (iVar4 - iVar2) - (uint)(uVar1 < uVar3);
    }
    *(uint *)(param_1 + 0x170) = (uVar1 - uVar3) + param_2;
    *(uint *)(param_1 + 0x174) = iVar4 + param_3 + (uint)CARRY4(uVar1 - uVar3,param_2);
  }
LAB_011bf39f:
  *(uint *)(param_1 + 0x168) = param_2;
  *(int *)(param_1 + 0x16c) = param_3;
  return 0;
}


