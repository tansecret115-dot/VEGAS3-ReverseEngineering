/* Module: encn3260.dll
   Function: FUN_664d7ca0
   Address: 664d7ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664d7ca0(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    uVar1 = *(uint *)((int)this + 0xc);
    uVar4 = *(uint *)(param_1 + 4) % uVar1 + 1;
    if (uVar4 < uVar1) {
      piVar2 = (int *)(*(int *)((int)this + 0x18) + uVar4 * 4);
      do {
        if (*piVar2 != 0) {
          return *(int *)(*(int *)((int)this + 0x18) + uVar4 * 4);
        }
        uVar4 = uVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar4 < uVar1);
      return 0;
    }
    iVar3 = 0;
  }
  return iVar3;
}


