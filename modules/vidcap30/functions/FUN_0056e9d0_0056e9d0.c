/* Module: vidcap30.exe
   Function: FUN_0056e9d0
   Address: 0056e9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0056e9d0(uint param_1)

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
  iVar1 = FUN_0056e2c0(param_1,&local_8);
  if (iVar1 < 0) {
    uVar3 = 0x8004e12d;
  }
  else {
    iVar1 = FUN_005760d0(&local_4);
    if (-1 < iVar1) {
      if (*(int *)(local_8 + 4) == 0) {
        iVar1 = FUN_005729a0(uVar2,&param_1);
        uVar2 = param_1;
        if (iVar1 < 0) {
          uVar3 = 0x8004e12e;
          goto LAB_0056ea4a;
        }
      }
      else {
        uVar2 = *(uint *)(local_8 + 0x10);
      }
      if ((uVar2 <= local_4) || (uVar2 - local_4 == 1)) goto LAB_0056ea4a;
    }
    uVar3 = 0x8004e131;
  }
LAB_0056ea4a:
  if (local_8 != 0) {
    FUN_00404b20(local_8);
  }
  return uVar3;
}


