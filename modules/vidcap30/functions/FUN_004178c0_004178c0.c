/* Module: vidcap30.exe
   Function: FUN_004178c0
   Address: 004178c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004178c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_4;
  
  local_4 = 1;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1[2] + iVar6 * 4);
        if (1 < iVar1) {
          uVar3 = *(uint *)(iVar2 + 0x218);
          uVar4 = uVar3 | 1;
          *(uint *)(iVar2 + 0x218) = uVar4;
          if (iVar6 == 0) {
            *(uint *)(iVar2 + 0x218) = CONCAT31((int3)(uVar3 >> 8),(char)uVar4) | 2;
          }
          if (iVar6 == iVar1 + -1) {
            *(uint *)(iVar2 + 0x218) = *(uint *)(iVar2 + 0x218) | 4;
          }
        }
        if (*(int *)(iVar2 + 0x208) == 6) {
          param_2 = 1;
        }
        if (*(int *)(iVar2 + 0x214) < 0) {
          iVar7 = iVar2;
          uVar5 = _SfGetString_8(DAT_005ba2a0,0x95);
          SfErrorHandler_DetailsAddString(*(undefined4 *)(iVar2 + 0x214),uVar5,iVar7);
        }
        else {
          local_4 = FUN_004170a0(iVar2,param_2);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    return local_4;
  }
  return 0;
}


