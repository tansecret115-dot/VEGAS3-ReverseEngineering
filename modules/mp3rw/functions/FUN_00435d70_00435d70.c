/* Module: mp3rw.dll
   Function: FUN_00435d70
   Address: 00435d70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_00435d70(void *this,HANDLE param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)((int)this + 0x30);
  for (iVar2 = 400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_00438810(this,param_1);
  if (-1 < (int)uVar1) {
    *(HANDLE *)((int)this + 8) = param_1;
    uVar1 = FUN_00438f90(this,(undefined4 *)((int)this + 0x8b0));
    return uVar1;
  }
  CloseHandle(param_1);
  return uVar1;
}


