/* Module: sftrkfx1.dll
   Function: FUN_5cba7c70
   Address: 5cba7c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cba7c70(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  if ((DAT_5cc11480 == 0) || (DAT_5cc11488 < 1)) {
    uVar2 = FUN_5cba1960();
    if (uVar2 == 0) {
      puVar4 = &DAT_5cc0f648;
      goto LAB_5cba7caf;
    }
  }
  puVar4 = (undefined4 *)((int)this + 0x34);
LAB_5cba7caf:
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  uVar1 = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x1c) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return uVar1;
}


