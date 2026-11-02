/* Module: vegas30.exe
   Function: FUN_005ff7b0
   Address: 005ff7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ff7b0(uint param_1)

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
  iVar1 = FUN_005ff0a0(param_1,&local_8);
  if (iVar1 < 0) {
    uVar3 = 0x8004e12d;
  }
  else {
    iVar1 = FUN_00606b80(&local_4);
    if (-1 < iVar1) {
      if (*(int *)(local_8 + 4) == 0) {
        iVar1 = FUN_00603780(uVar2,&param_1);
        uVar2 = param_1;
        if (iVar1 < 0) {
          uVar3 = 0x8004e12e;
          goto LAB_005ff82a;
        }
      }
      else {
        uVar2 = *(uint *)(local_8 + 0x10);
      }
      if ((uVar2 <= local_4) || (uVar2 - local_4 == 1)) goto LAB_005ff82a;
    }
    uVar3 = 0x8004e131;
  }
LAB_005ff82a:
  if (local_8 != 0) {
    FUN_0040bfc0(local_8);
  }
  return uVar3;
}


