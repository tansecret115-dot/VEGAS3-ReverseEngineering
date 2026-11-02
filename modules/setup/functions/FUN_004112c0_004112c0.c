/* Module: Setup.exe
   Function: FUN_004112c0
   Address: 004112c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004112c0(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_360 [13];
  int local_32c;
  int local_328;
  int local_324;
  
  if (*(int *)((int)this + 8) != 0) {
    if (-1 < *(int *)((int)this + 0x674)) {
      iVar1 = FUN_00411020(this,*(LONG *)((int)this + 0x670),*(int *)((int)this + 0x674),local_360);
      if (iVar1 == 0) {
        FUN_00410c30(this,0xaaaaaaa5,(uchar *)"FindNextCentralDirectory",(uchar *)0x0);
        return 0x8004e0b0;
      }
      uVar2 = local_328 * 2 + local_324 * 2;
      uVar3 = uVar2 + local_32c * 2;
      uVar4 = uVar3 + *(uint *)((int)this + 0x670);
      iVar5 = uVar4 + 0x54;
      iVar6 = (uint)CARRY4(local_328 * 2,local_324 * 2) + (uint)CARRY4(uVar2,local_32c * 2) +
              *(int *)((int)this + 0x674) + (uint)CARRY4(uVar3,*(uint *)((int)this + 0x670)) +
              (uint)(0xffffffab < uVar4);
      iVar1 = FUN_00411020(this,iVar5,iVar6,param_1);
      if (iVar1 == 0) {
        return 1;
      }
      *(int *)((int)this + 0x670) = iVar5;
      *(int *)((int)this + 0x674) = iVar6;
      return 0;
    }
  }
  FUN_00410c30(this,0xaaaaaab0,(uchar *)"FindNextCentralDirectory",(uchar *)0x0);
  return 0x80004005;
}


