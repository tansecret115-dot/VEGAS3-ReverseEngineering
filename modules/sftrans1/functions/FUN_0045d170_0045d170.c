/* Module: sftrans1.dll
   Function: FUN_0045d170
   Address: 0045d170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045d170(int param_1,int *param_2,uint param_3,int param_4,undefined4 *param_5)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  if (((param_3 != 0) && (BVar1 = IsBadReadPtr(param_2,param_3 * 0x48), BVar1 != 0)) ||
     (param_4 != 0)) {
    return 0x80070057;
  }
  BVar1 = IsBadWritePtr(param_5,0x48);
  if (BVar1 != 0) {
    return 0x80004003;
  }
  puVar6 = param_5;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if ((*(byte *)(param_1 + 0x80) & 2) != 0) {
    *param_5 = 2;
  }
  if (param_3 != 0) {
    uVar4 = 0;
    piVar5 = param_2;
    if (param_3 != 0) {
      do {
        if (*piVar5 != (*(uint *)(param_1 + 0x80) & 1) * 2) {
          return 0x80070057;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 0x12;
      } while (uVar4 < param_3);
    }
  }
  if ((*(byte *)(param_1 + 0x80) & 2) != 0) {
    uVar2 = FUN_0045cf90(param_5,param_3,param_2);
    return uVar2;
  }
  uVar2 = FUN_0045ce40(param_5,param_3,param_2);
  return uVar2;
}


