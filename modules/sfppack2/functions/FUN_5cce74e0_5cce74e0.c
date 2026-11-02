/* Module: sfppack2.dll
   Function: FUN_5cce74e0
   Address: 5cce74e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cce74e0(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_5cd526d0;
  puVar3 = (undefined4 *)((int)this + 0x498);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_5cd52708;
  puVar3 = (undefined4 *)((int)this + 0x4d0);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_5cd52740;
  puVar3 = (undefined4 *)((int)this + 0x508);
  for (iVar1 = 0x62; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x490) = 0;
  iVar1 = FUN_5cce7380(this,param_1,param_2);
  *(uint *)((int)this + 0x90) = (uint)(-1 < iVar1);
  return;
}


