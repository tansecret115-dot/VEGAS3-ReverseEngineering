/* Module: erv23260.dll
   Function: FUN_638038d0
   Address: 638038d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638038d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)((int)this + 0xa4);
  puVar3 = param_1 + 5;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0xc] = (uint)(*(int *)((int)this + 0x818) != 0);
  puVar2 = (undefined4 *)((int)this + 0x90);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}


