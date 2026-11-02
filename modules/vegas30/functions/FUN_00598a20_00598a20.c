/* Module: vegas30.exe
   Function: FUN_00598a20
   Address: 00598a20
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong FUN_00598a20(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = param_2 - param_4;
  iVar5 = (param_3 - param_5) - (uint)(param_2 < param_4);
  lVar6 = CONCAT44(iVar5,uVar4);
  if (*(int *)(param_1 + 0xd4) != 0) {
    iVar1 = *(int *)(param_1 + 0xbc);
    uVar2 = *(uint *)(param_1 + 0xb8);
    lVar3 = *(longlong *)(param_1 + 0xb8);
    lVar6 = CONCAT44(iVar5,uVar4);
    if ((iVar1 <= iVar5) && ((iVar1 < iVar5 || (lVar6 = CONCAT44(iVar5,uVar4), uVar2 <= uVar4)))) {
      lVar6 = __allrem(uVar4 - uVar2,(iVar5 - iVar1) - (uint)(uVar4 < uVar2),
                       *(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
      lVar6 = lVar6 + lVar3;
    }
  }
  return lVar6;
}


