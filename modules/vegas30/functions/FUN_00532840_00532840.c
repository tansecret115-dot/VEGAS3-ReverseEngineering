/* Module: vegas30.exe
   Function: FUN_00532840
   Address: 00532840
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0053292a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00532840(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float10 extraout_ST0;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_20;
  
  if (((*(uint *)(param_1 + 4) & 2) == 0) || (*(int *)(param_1 + 0x8b8) == 0)) {
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      iVar2 = *(int *)(param_1 + 0x418);
      ftol();
      if (iVar2 == 0) {
        lVar6 = 0;
      }
      else {
        ftol();
        lVar6 = ftol();
      }
      *(longlong *)(param_1 + 0x8f0) = lVar6;
      if (iVar2 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = ftol();
      }
      *(longlong *)(param_1 + 0x8e0) = lVar7;
      *(longlong *)(param_1 + 0x8e8) = lVar6 + lVar7;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x8e0);
    iVar2 = *(int *)(param_1 + 0x8e4);
    ftol();
    uVar4 = ftol();
    iVar3 = *(uint *)(param_1 + 0x8f0) + uVar1;
    local_20 = CONCAT44((*(int *)(param_1 + 0x8f4) + iVar2 +
                        (uint)CARRY4(*(uint *)(param_1 + 0x8f0),uVar1)) - (uint)(iVar3 == 0),
                        iVar3 + -1);
    ceil((double)((float10)local_20 * (float10)_DAT_006106c8 * extraout_ST0));
    ftol();
    uVar5 = ftol();
    *(undefined8 *)(param_1 + 0x8e8) = uVar5;
    uVar5 = ftol();
    *(undefined8 *)(param_1 + 0x8f0) = uVar5;
    *(undefined8 *)(param_1 + 0x8e0) = uVar4;
  }
  uVar4 = ftol();
  *(undefined8 *)(param_1 + 0x8f8) = uVar4;
  return;
}


