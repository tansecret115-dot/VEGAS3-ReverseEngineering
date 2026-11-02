/* Module: encn3260.dll
   Function: FUN_664965b0
   Address: 664965b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664965b0(void *param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)param_1 + 0x206) != 0) {
    *(undefined4 *)((int)param_1 + 0x20a) = 1;
    *(undefined2 *)((int)param_1 + 0x78) = 1;
    FUN_66494b60((int)param_1);
    return;
  }
  *(undefined4 *)((int)param_1 + 0x2e) = 1;
  if (*(int *)((int)param_1 + 0x3a) == 0) {
    uVar2 = FUN_66495960(param_1,(uint)*(ushort *)((int)param_1 + 0x6e),
                         (uint)*(ushort *)((int)param_1 + 0x70));
    puVar3 = (undefined4 *)FUN_664c04a0(*(void **)((int)param_1 + 10),uVar2);
    sVar1 = (**(code **)(*(int *)*puVar3 + 0x14))();
    *(ushort *)((int)param_1 + 0x76) = sVar1 + 1U;
    if ((uint)(ushort)(sVar1 + 1U) == *(uint *)((int)param_1 + 0x66)) {
      *(undefined2 *)((int)param_1 + 0x76) = 0;
    }
    *(undefined4 *)((int)param_1 + 0x2a) = 1;
  }
  return;
}


