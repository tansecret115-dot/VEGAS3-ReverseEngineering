/* Module: sfxpfx2.dll
   Function: FUN_5c8a2610
   Address: 5c8a2610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5c8a2610(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_5c8dd5a8;
  puVar3 = (undefined4 *)((int)this + 800);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_5c8dd5e0;
  puVar3 = (undefined4 *)((int)this + 0x358);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_5c8dd618;
  puVar3 = (undefined4 *)((int)this + 0x390);
  for (iVar1 = 0x62; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x318) = 0;
  iVar1 = FUN_5c8a2530(this,param_1,param_2);
  *(uint *)((int)this + 0x6c) = (uint)(-1 < iVar1);
  return;
}


