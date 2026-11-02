/* Module: sfmarket2.dll
   Function: FUN_004329d0
   Address: 004329d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_004329d0(void *this,HANDLE param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)((int)this + 0x30);
  for (iVar2 = 400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_00435470(this,param_1);
  if (-1 < (int)uVar1) {
    *(HANDLE *)((int)this + 8) = param_1;
    uVar1 = FUN_00435bf0(this,(undefined4 *)((int)this + 0x8b0));
    return uVar1;
  }
  CloseHandle(param_1);
  return uVar1;
}


