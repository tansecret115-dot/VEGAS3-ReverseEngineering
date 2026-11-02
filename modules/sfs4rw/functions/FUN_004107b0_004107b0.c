/* Module: sfs4rw.dll
   Function: FUN_004107b0
   Address: 004107b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004107b0(undefined4 param_1,char *param_2,uint *param_3)

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
  bVar1 = FUN_004191f0(param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 0x80070005;
  }
  iVar2 = FUN_00419270(this,&local_4,&param_3);
  if (iVar2 != 0) {
    uVar3 = FUN_00418bb0();
    if (param_2 != (char *)0x0) {
      uVar4 = FUN_00419070(param_2);
      uVar3 = uVar3 ^ uVar4;
    }
    bVar5 = 0x20 - (char)param_3;
    if (local_4 != ((uint)(-1 << (bVar5 & 0x1f)) >> (bVar5 & 0x1f) & uVar3)) {
      return 0x80070005;
    }
  }
  return 0;
}


