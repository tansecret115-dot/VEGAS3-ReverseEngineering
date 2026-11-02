/* Module: vidcap30.exe
   Function: FUN_00537440
   Address: 00537440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00537440(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x670) = 0;
  *(undefined4 *)(param_1 + 0x674) = 0;
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00536e70(0xaaaaaab0,"FindFirstCentralDirectory",0);
    return 0x80004005;
  }
  if (*(int *)(param_1 + 0x30) == 0xc054d55) {
    iVar1 = FUN_00537260(*(uint *)(param_1 + 0x4c) + *(uint *)(param_1 + 0x890),
                         *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x894) +
                         (uint)CARRY4(*(uint *)(param_1 + 0x4c),*(uint *)(param_1 + 0x890)),param_2)
    ;
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x670) = *(uint *)(param_1 + 0x4c) + *(uint *)(param_1 + 0x890);
      *(uint *)(param_1 + 0x674) =
           *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x894) +
           (uint)CARRY4(*(uint *)(param_1 + 0x4c),*(uint *)(param_1 + 0x890));
      return 0;
    }
    return 1;
  }
  FUN_00536e70(0xaaaaaaa5,"FindFirstCentralDirectory",0);
  return 0x80004005;
}


