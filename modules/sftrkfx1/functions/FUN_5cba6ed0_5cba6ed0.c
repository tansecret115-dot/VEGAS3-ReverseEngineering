/* Module: sftrkfx1.dll
   Function: FUN_5cba6ed0
   Address: 5cba6ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cba6ed0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  uint unaff_EDI;
  undefined4 *puVar4;
  double *pdVar5;
  undefined1 local_8 [4];
  double *pdStack_4;
  
  piVar1 = *(int **)((int)this + 0x260);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0x264) != 0)) {
    (**(code **)(*piVar1 + 0xc))(piVar1,local_8);
    if (unaff_EDI == 0 && unaff_ESI == 0) {
      pdVar5 = pdStack_4;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pdVar5 = 0;
        pdVar5 = (double *)((int)pdVar5 + 4);
      }
      *(undefined4 *)(pdStack_4 + 4) = 0;
      *(undefined4 *)((int)pdStack_4 + 0x24) = 0x3ff00000;
      return 0;
    }
    uVar2 = FUN_5cba6d40(this,pdStack_4,unaff_EDI,unaff_ESI);
    return uVar2;
  }
  puVar4 = param_1;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1[8] = 0;
  param_1[9] = 0x3ff00000;
  return 1;
}


