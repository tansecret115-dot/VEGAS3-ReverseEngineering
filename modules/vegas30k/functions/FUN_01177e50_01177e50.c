/* Module: vegas30k.dll
   Function: FUN_01177e50
   Address: 01177e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01177e50(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_8;
  int local_4;
  
  local_8 = *(int *)(param_1 + 0x1b0);
  local_4 = *(int *)(param_1 + 0x1b4);
  if ((*(uint *)(param_1 + 0x50) & 0x400) != 0) {
    piVar1 = *(int **)(param_1 + 0x1f8);
    if (piVar1 == (int *)0x0) {
      iVar3 = _SfGetMillisec_0();
      iVar2 = *(int *)(param_1 + 100);
      if (iVar2 == 0) {
        iVar3 = iVar3 - *(int *)(param_1 + 0x1c8);
        *(int *)(param_1 + 0x1cc) = iVar3;
        uVar4 = __allmul(iVar3,0,10000,0);
        local_8 = (uint)uVar4 + *(uint *)(param_1 + 0x1b8);
        local_4 = (int)((ulonglong)uVar4 >> 0x20) + *(int *)(param_1 + 0x1bc) +
                  (uint)CARRY4((uint)uVar4,*(uint *)(param_1 + 0x1b8));
      }
      FUN_01191ee0(param_1 + 0x118,*(undefined4 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1bc)
                   ,&local_8,iVar2);
    }
    else {
      (**(code **)(*piVar1 + 0xf4))(piVar1,&local_8);
    }
    *(int *)(param_1 + 0x1b0) = local_8;
    *(int *)(param_1 + 0x1b4) = local_4;
  }
  return;
}


