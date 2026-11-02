/* Module: erv23260.dll
   Function: FUN_6380db20
   Address: 6380db20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6380db20(void *this,undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  uVar6 = param_2[3] + uVar5;
  for (; uVar5 < uVar6; uVar5 = uVar5 + 1) {
    uVar3 = param_2[1];
    if (uVar3 < uVar1 + uVar2) {
      iVar4 = (uVar5 * *(int *)((int)this + 0x124) + uVar3) * 0x7c;
      iVar7 = (uVar1 + uVar2) - uVar3;
      do {
        *(undefined4 *)(*(int *)((int)this + 8) + 0x58 + iVar4) = param_1;
        *(undefined4 *)(*(int *)((int)this + 8) + 0x60 + iVar4) = 1;
        iVar4 = iVar4 + 0x7c;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return 0;
}


