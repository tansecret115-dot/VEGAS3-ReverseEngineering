/* Module: mp3plug.dll
   Function: FUN_5f68f6a0
   Address: 5f68f6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f68f928) */
/* WARNING: Removing unreachable block (ram,0x5f68f7f4) */
/* WARNING: Removing unreachable block (ram,0x5f68f812) */
/* WARNING: Removing unreachable block (ram,0x5f68f821) */
/* WARNING: Removing unreachable block (ram,0x5f68f84f) */
/* WARNING: Removing unreachable block (ram,0x5f68f856) */
/* WARNING: Removing unreachable block (ram,0x5f68f863) */
/* WARNING: Removing unreachable block (ram,0x5f68f867) */
/* WARNING: Removing unreachable block (ram,0x5f68f884) */
/* WARNING: Removing unreachable block (ram,0x5f68f85f) */
/* WARNING: Removing unreachable block (ram,0x5f68f8b1) */
/* WARNING: Removing unreachable block (ram,0x5f68f8b9) */
/* WARNING: Removing unreachable block (ram,0x5f68f8c1) */
/* WARNING: Removing unreachable block (ram,0x5f68f8f8) */
/* WARNING: Removing unreachable block (ram,0x5f68f900) */
/* WARNING: Removing unreachable block (ram,0x5f68f96e) */
/* WARNING: Removing unreachable block (ram,0x5f68f995) */
/* WARNING: Removing unreachable block (ram,0x5f68f9b7) */
/* WARNING: Removing unreachable block (ram,0x5f68f9de) */
/* WARNING: Removing unreachable block (ram,0x5f68fa00) */
/* WARNING: Removing unreachable block (ram,0x5f68fa2b) */
/* WARNING: Removing unreachable block (ram,0x5f68fa4d) */
/* WARNING: Removing unreachable block (ram,0x5f68fa6e) */
/* WARNING: Removing unreachable block (ram,0x5f68fa90) */
/* WARNING: Removing unreachable block (ram,0x5f68fabb) */
/* WARNING: Removing unreachable block (ram,0x5f68fadd) */
/* WARNING: Removing unreachable block (ram,0x5f68fb1a) */
/* WARNING: Removing unreachable block (ram,0x5f68fb3d) */
/* WARNING: Removing unreachable block (ram,0x5f68fb80) */

int __thiscall FUN_5f68f6a0(void *this,undefined4 param_1,undefined4 param_2)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *this_00;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)((int)this + 300) + 0x424);
  if (*(int *)(iVar5 + 0x3e) == 0) {
    if (9 < *(uint *)(*(int *)((int)this + 300) + 8)) {
      return -0x7ff8ffa9;
    }
  }
  else if (*(uint *)(iVar5 + 0x3a) < 0x4c) {
    return -0x7ff8ffa9;
  }
  pvVar1 = GlobalAlloc(0x40,0x130);
  puVar2 = GlobalLock(pvVar1);
  if ((puVar2 == (undefined4 *)0x0) || (piVar3 = (int *)FUN_5f694d90(puVar2), piVar3 == (int *)0x0))
  {
    return -0x7ff8fff2;
  }
  pvVar1 = GlobalAlloc(0x40,0x10);
  puVar2 = GlobalLock(pvVar1);
  if ((puVar2 == (undefined4 *)0x0) ||
     (this_00 = (int *)FUN_5f6950f0(puVar2), this_00 == (int *)0x0)) {
    return -0x7ff8fff2;
  }
  FUN_5f695110(this_00,param_2);
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x118)) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x11c) + 8) + iVar5 * 4);
      if ((puVar2 != (undefined4 *)0x0) && (iVar4 = (**(code **)*puVar2)(), -1 < iVar4)) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)this + 0x118));
  }
  (**(code **)(*piVar3 + 8))();
  (**(code **)(*this_00 + 8))();
  return -0x7ff8ffa9;
}


