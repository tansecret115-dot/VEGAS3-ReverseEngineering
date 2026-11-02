/* Module: sftrans1.dll
   Function: FUN_00530390
   Address: 00530390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00530390(uint param_1)

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
  iVar1 = FUN_0052fc80(param_1,&local_8);
  if (iVar1 < 0) {
    uVar3 = 0x8004e12d;
  }
  else {
    iVar1 = FUN_005371a0(&local_4);
    if (-1 < iVar1) {
      if (*(int *)(local_8 + 4) == 0) {
        iVar1 = FUN_00534360(uVar2,&param_1);
        uVar2 = param_1;
        if (iVar1 < 0) {
          uVar3 = 0x8004e12e;
          goto LAB_0053040a;
        }
      }
      else {
        uVar2 = *(uint *)(local_8 + 0x10);
      }
      if ((uVar2 <= local_4) || (uVar2 - local_4 == 1)) goto LAB_0053040a;
    }
    uVar3 = 0x8004e131;
  }
LAB_0053040a:
  if (local_8 != 0) {
    FUN_004035f0(local_8);
  }
  return uVar3;
}


