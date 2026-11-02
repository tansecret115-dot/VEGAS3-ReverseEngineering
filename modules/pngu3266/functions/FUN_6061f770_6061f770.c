/* Module: pngu3266.dll
   Function: FUN_6061f770
   Address: 6061f770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6061f770(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((0 < param_1) && (param_1 < 0xd)) {
    iVar4 = 1 << ((byte)param_1 & 0x1f);
    *(int *)((int)this + 0xc) = param_1;
    *(int *)((int)this + 8) = param_1 + 1;
    *(undefined4 *)this = 1;
    *(int *)((int)this + 0x20) = iVar4;
    *(int *)((int)this + 0x24) = iVar4 + 1;
    *(int *)((int)this + 0x14) = iVar4 * 2;
    iVar1 = 0;
    *(int *)((int)this + 0x10) = iVar4 + 2;
    if (0 < iVar4) {
      piVar2 = (int *)((int)this + 0x4028);
      do {
        piVar2[-0x1000] = 0;
        *piVar2 = iVar1;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < *(int *)((int)this + 0x20));
    }
    if (iVar1 < 0x1000) {
      puVar3 = (undefined4 *)((int)this + iVar1 * 4 + 0x28);
      iVar1 = 0x1000 - iVar1;
      do {
        puVar3[0x1000] = 0;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *(int *)((int)this + 0x10028) = (int)this + 0x8028;
    return 0;
  }
  return 0x80070057;
}


