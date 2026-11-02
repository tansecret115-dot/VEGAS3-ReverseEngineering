/* Module: erv33260.dll
   Function: FUN_6707b790
   Address: 6707b790
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707b790(void *this,int param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((((uVar1 != 0) && (piVar4 = *(int **)this, piVar4 != (int *)0x0)) &&
      (iVar2 = *(int *)((int)this + 8), iVar2 != 0)) && (param_1 != 0)) {
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        if (param_1 == *piVar4) break;
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar3 < uVar1);
    }
    *(uint *)(iVar2 + uVar3 * 4) = *(uint *)(iVar2 + uVar3 * 4) & ~(1 << (param_2 & 0x1f));
  }
  return;
}


