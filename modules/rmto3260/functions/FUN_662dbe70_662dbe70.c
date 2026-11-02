/* Module: rmto3260.dll
   Function: FUN_662dbe70
   Address: 662dbe70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_662dbe70(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)((int)this + 0x88);
    if (param_1 < uVar1) {
      iVar3 = (param_1 - uVar1) + -1;
    }
    else {
      iVar3 = param_1 - uVar1;
    }
    if (iVar3 != 0) {
      *(uint *)((int)this + 0x8c) = uVar1;
      *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + *(int *)((int)this + 0x94);
      *(uint *)((int)this + 0x88) = param_1;
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0x94) = 0;
    }
    uVar1 = *(uint *)((int)this + 0x88);
    uVar2 = *(uint *)((int)this + 0x8c);
    iVar3 = *(int *)((int)this + 0x90) + param_2;
    *(int *)((int)this + 0x90) = iVar3;
    if (uVar1 < uVar2) {
      iVar4 = (uVar1 - uVar2) + -1;
    }
    else {
      iVar4 = uVar1 - uVar2;
    }
    iVar3 = iVar3 - (iVar4 * *(uint *)((int)this + 0x84)) / 1000;
    *(int *)((int)this + 0x94) = iVar3;
    if ((double)*(int *)((int)this + 0x80) <
        ((double)(*(int *)((int)this + 0x98) + iVar3) * _DAT_66307408) /
        (double)*(uint *)((int)this + 0x84) - _DAT_66307410) {
      uVar5 = ftol();
      *(undefined4 *)((int)this + 0x80) = uVar5;
      return 0;
    }
  }
  return 0;
}


