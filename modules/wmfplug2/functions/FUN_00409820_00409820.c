/* Module: wmfplug2.dll
   Function: FUN_00409820
   Address: 00409820
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00409820(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 *puVar3;
  undefined *puVar4;
  int *piStack_28;
  undefined4 *puStack_24;
  undefined4 local_18 [6];
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = -0x7ffb1ff9;
  }
  else {
    piStack_28 = *(int **)(param_1 + 0x4c);
    puStack_24 = local_18;
    iVar2 = (**(code **)(*piStack_28 + 0x14))();
    if (-1 < iVar2) {
      *(undefined4 *)(param_1 + 0x30) = unaff_EDI;
      puVar3 = *(undefined4 **)(param_1 + 0x4c);
      local_18[0] = 0;
      puVar4 = &DAT_0047b600;
      iVar2 = (**(code **)*puVar3)(puVar3,&DAT_0047b600,(undefined4 *)(param_1 + 0x54));
      if (-1 < iVar2) {
        piVar1 = *(int **)(param_1 + 0x54);
        piStack_28 = (int *)0x8;
        iVar2 = (**(code **)(*piVar1 + 0x14))
                          (piVar1,&puStack_24,L"Duration",&stack0xffffffe0,&stack0xffffffe4,
                           &piStack_28);
        *(undefined4 **)(param_1 + 0x38) = puVar3;
        *(undefined **)(param_1 + 0x3c) = puVar4;
        FUN_00409650(param_1);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return iVar2;
      }
    }
  }
  return iVar2;
}


