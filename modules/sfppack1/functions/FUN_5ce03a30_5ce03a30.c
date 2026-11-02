/* Module: sfppack1.dll
   Function: FUN_5ce03a30
   Address: 5ce03a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ce03a30(undefined4 param_1,char *param_2,uint *param_3)

{
  uint *this;
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint local_4;
  
  this = param_3;
  if (param_3 == (uint *)0x0) {
    return 0x80070005;
  }
  bVar1 = FUN_5ce0beb0(param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 0x80070005;
  }
  iVar2 = FUN_5ce0bf30(this,&local_4,&param_3);
  if (iVar2 != 0) {
    uVar3 = FUN_5ce0b870();
    if (param_2 != (char *)0x0) {
      uVar4 = FUN_5ce0bd30(param_2);
      uVar3 = uVar3 ^ uVar4;
    }
    bVar5 = 0x20 - (char)param_3;
    if (local_4 != ((uint)(-1 << (bVar5 & 0x1f)) >> (bVar5 & 0x1f) & uVar3)) {
      return 0x80070005;
    }
  }
  return 0;
}


