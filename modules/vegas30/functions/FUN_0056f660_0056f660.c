/* Module: vegas30.exe
   Function: FUN_0056f660
   Address: 0056f660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0056f660(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int **)(param_1 + 0x2b0) != (int *)0x0) &&
     (iVar1 = **(int **)(param_1 + 0x2b0), iVar1 != 0)) {
    if ((param_3 != 0) && (iVar6 = 0, 0 < iVar1)) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar6 * 4);
        if ((iVar2 != param_2) && (piVar3 = *(int **)(iVar2 + 4), piVar3 != (int *)0x0)) {
          if (*(int *)(iVar2 + 8) == 3) {
            uVar4 = (**(code **)(*piVar3 + 0x6c))(piVar3,0);
            *(uint *)(iVar2 + 0xc) = (uVar4 & 1) << 1 | *(uint *)(iVar2 + 0xc) & 0xfffffffd;
            uVar4 = (**(code **)(**(int **)(iVar2 + 4) + 0x60))(*(int **)(iVar2 + 4),0);
          }
          else {
            uVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,0);
            *(uint *)(iVar2 + 0xc) = (uVar4 & 1) << 1 | *(uint *)(iVar2 + 0xc) & 0xfffffffd;
            uVar4 = (**(code **)(**(int **)(iVar2 + 4) + 0x44))(*(int **)(iVar2 + 4),0);
          }
          *(uint *)(iVar2 + 0xc) = (*(uint *)(iVar2 + 0xc) ^ uVar4) & 1 ^ *(uint *)(iVar2 + 0xc);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar6 * 4);
        piVar3 = *(int **)(iVar2 + 4);
        if (piVar3 != (int *)0x0) {
          if (*(int *)(iVar2 + 8) == 3) {
            iVar5 = (**(code **)(*piVar3 + 0x70))(piVar3);
            *(uint *)(iVar2 + 0xc) = (uint)(iVar5 == 0) << 1 | *(uint *)(iVar2 + 0xc) & 0xfffffffd;
            iVar5 = (**(code **)(**(int **)(iVar2 + 4) + 100))(*(int **)(iVar2 + 4));
            *(uint *)(iVar2 + 0xc) =
                 ((uint)(iVar5 == 0) ^ *(uint *)(iVar2 + 0xc)) & 1 ^ *(uint *)(iVar2 + 0xc);
            iVar5 = (**(code **)(**(int **)(iVar2 + 4) + 0x68))(*(int **)(iVar2 + 4));
          }
          else {
            iVar5 = (**(code **)(*piVar3 + 0x54))(piVar3);
            *(uint *)(iVar2 + 0xc) = (uint)(iVar5 == 0) << 1 | *(uint *)(iVar2 + 0xc) & 0xfffffffd;
            iVar5 = (**(code **)(**(int **)(iVar2 + 4) + 0x48))(*(int **)(iVar2 + 4));
            *(uint *)(iVar2 + 0xc) =
                 ((uint)(iVar5 == 0) ^ *(uint *)(iVar2 + 0xc)) & 1 ^ *(uint *)(iVar2 + 0xc);
            iVar5 = (**(code **)(**(int **)(iVar2 + 4) + 0x4c))(*(int **)(iVar2 + 4));
          }
          *(uint *)(iVar2 + 0xc) = (uint)(iVar5 == 0) << 2 | *(uint *)(iVar2 + 0xc) & 0xfffffffb;
          if (*(int *)(iVar2 + 0x470) != 0) {
            _MeterInst_Message_16(*(int *)(iVar2 + 0x470),0x61d,0,(uint)(iVar5 == 0));
          }
          if (*(int *)(iVar2 + 0x818) != 0) {
            _MeterInst_Message_16(*(int *)(iVar2 + 0x818),0x61d,0,*(uint *)(iVar2 + 0xc) >> 2 & 1);
          }
          if (*(int *)(iVar2 + 0x340) != 0) {
            _FaderInst_Message_16(*(int *)(iVar2 + 0x340),10,~*(uint *)(iVar2 + 0xc) >> 2 & 1,0);
          }
          if (*(int *)(iVar2 + 0x6e8) != 0) {
            _FaderInst_Message_16(*(int *)(iVar2 + 0x6e8),10,~*(uint *)(iVar2 + 0xc) >> 2 & 1,0);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
  }
  return;
}


