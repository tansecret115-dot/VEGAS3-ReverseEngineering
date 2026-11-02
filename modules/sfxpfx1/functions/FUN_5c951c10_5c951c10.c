/* Module: sfxpfx1.dll
   Function: FUN_5c951c10
   Address: 5c951c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5c951c10(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *(int *)((int)this + 0x48) = param_1;
  uVar3 = (uint)*(ushort *)(param_1 + 2);
  if (uVar3 != 0) {
    puVar2 = (undefined4 *)((int)this + 0x78);
    puVar1 = (undefined4 *)((int)this + 100);
    do {
      puVar1[-2] = 0;
      *puVar1 = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar1[9] = 0;
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(undefined4 *)((int)this + 0x90) = 0;
  FUN_5c951c60(this);
  return;
}


