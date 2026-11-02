/* Module: sfxpfx2.dll
   Function: FUN_5c893250
   Address: 5c893250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c893250(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  puVar3 = (undefined4 *)((int)this + 0x1c);
  for (iVar2 = 0x4a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  uVar1 = *(undefined4 *)((int)this + 0x144);
  *(undefined4 *)((int)this + 0x144) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return uVar1;
}


