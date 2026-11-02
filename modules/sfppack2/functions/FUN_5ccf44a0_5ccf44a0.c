/* Module: sfppack2.dll
   Function: FUN_5ccf44a0
   Address: 5ccf44a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5ccf44a0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  uint unaff_EDI;
  undefined4 *puVar4;
  int unaff_retaddr;
  undefined1 local_8 [4];
  undefined4 *puStack_4;
  
  piVar1 = *(int **)((int)this + 0x4b8);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0x4bc) != 0)) {
    (**(code **)(*piVar1 + 0xc))(piVar1,local_8);
    if (unaff_EDI == 0 && unaff_ESI == 0) {
      puVar4 = puStack_4;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      puStack_4[10] = 0;
      puStack_4[0xb] = 0x3ff00000;
      return 0;
    }
    uVar2 = FUN_5ccf42b0(this,puStack_4,unaff_EDI,unaff_ESI,unaff_retaddr);
    return uVar2;
  }
  puVar4 = param_1;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1[10] = 0;
  param_1[0xb] = 0x3ff00000;
  return 1;
}


