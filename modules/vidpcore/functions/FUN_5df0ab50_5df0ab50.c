/* Module: vidpcore.dll
   Function: FUN_5df0ab50
   Address: 5df0ab50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df0ab50(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_8;
  uint local_4;
  
  uVar2 = param_1;
  uVar3 = 0;
  local_8 = 0;
  local_4 = 0;
  iVar1 = FUN_5df0a440(param_1,&local_8);
  if (iVar1 < 0) {
    uVar3 = 0x8004e12d;
  }
  else {
    iVar1 = FUN_5df11990(&local_4);
    if (-1 < iVar1) {
      if (*(int *)(local_8 + 4) == 0) {
        iVar1 = FUN_5df0eb20(uVar2,&param_1);
        uVar2 = param_1;
        if (iVar1 < 0) {
          uVar3 = 0x8004e12e;
          goto LAB_5df0abca;
        }
      }
      else {
        uVar2 = *(uint *)(local_8 + 0x10);
      }
      if ((uVar2 <= local_4) || (uVar2 - local_4 == 1)) goto LAB_5df0abca;
    }
    uVar3 = 0x8004e131;
  }
LAB_5df0abca:
  if (local_8 != 0) {
    FUN_5de03b10(local_8);
  }
  return uVar3;
}


