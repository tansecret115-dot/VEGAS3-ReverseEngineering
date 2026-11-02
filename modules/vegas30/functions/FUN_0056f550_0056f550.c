/* Module: vegas30.exe
   Function: FUN_0056f550
   Address: 0056f550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0056f550(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int **)(param_1 + 0x2b0) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(param_1 + 0x2b0);
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar5 * 4);
      piVar2 = *(int **)(iVar1 + 4);
      if (piVar2 != (int *)0x0) {
        if (*(int *)(iVar1 + 8) == 3) {
          iVar3 = (**(code **)(*piVar2 + 0x68))(piVar2);
          *(uint *)(iVar1 + 0xc) = (uint)(iVar3 == 0) << 2 | *(uint *)(iVar1 + 0xc) & 0xfffffffb;
        }
        else {
          iVar3 = (**(code **)(*piVar2 + 0x4c))(piVar2);
          *(uint *)(iVar1 + 0xc) = (uint)(iVar3 == 0) << 2 | *(uint *)(iVar1 + 0xc) & 0xfffffffb;
        }
        if (*(int *)(iVar1 + 0x470) != 0) {
          _MeterInst_Message_16(*(int *)(iVar1 + 0x470),0x61d,0,*(uint *)(iVar1 + 0xc) >> 2 & 1);
        }
        if (*(int *)(iVar1 + 0x818) != 0) {
          _MeterInst_Message_16(*(int *)(iVar1 + 0x818),0x61d,0,*(uint *)(iVar1 + 0xc) >> 2 & 1);
        }
        if (*(int *)(iVar1 + 0x340) != 0) {
          _FaderInst_Message_16(*(int *)(iVar1 + 0x340),10,~*(uint *)(iVar1 + 0xc) >> 2 & 1,0);
        }
        if (*(int *)(iVar1 + 0x6e8) != 0) {
          _FaderInst_Message_16(*(int *)(iVar1 + 0x6e8),10,~*(uint *)(iVar1 + 0xc) >> 2 & 1,0);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}


