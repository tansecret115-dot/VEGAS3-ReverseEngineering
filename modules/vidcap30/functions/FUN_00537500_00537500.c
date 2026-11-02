/* Module: vidcap30.exe
   Function: FUN_00537500
   Address: 00537500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00537500(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_360 [52];
  int local_32c;
  int local_328;
  int local_324;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (-1 < *(int *)(param_1 + 0x674)) {
      iVar1 = FUN_00537260(*(undefined4 *)(param_1 + 0x670),*(int *)(param_1 + 0x674),local_360);
      if (iVar1 == 0) {
        FUN_00536e70(0xaaaaaaa5,"FindNextCentralDirectory",0);
        return 0x8004e0b0;
      }
      uVar2 = local_328 * 2 + local_324 * 2;
      uVar3 = uVar2 + local_32c * 2;
      uVar4 = uVar3 + *(uint *)(param_1 + 0x670);
      iVar5 = uVar4 + 0x54;
      iVar6 = (uint)CARRY4(local_328 * 2,local_324 * 2) + (uint)CARRY4(uVar2,local_32c * 2) +
              *(int *)(param_1 + 0x674) + (uint)CARRY4(uVar3,*(uint *)(param_1 + 0x670)) +
              (uint)(0xffffffab < uVar4);
      iVar1 = FUN_00537260(iVar5,iVar6,param_2);
      if (iVar1 == 0) {
        return 1;
      }
      *(int *)(param_1 + 0x670) = iVar5;
      *(int *)(param_1 + 0x674) = iVar6;
      return 0;
    }
  }
  FUN_00536e70(0xaaaaaab0,"FindNextCentralDirectory",0);
  return 0x80004005;
}


