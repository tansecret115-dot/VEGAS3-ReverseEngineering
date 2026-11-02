/* Module: 28_83260.dll
   Function: FUN_100046a0
   Address: 100046a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_100046a0(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int local_8c [33];
  int local_8;
  
  uVar6 = 0;
  if (0 < (int)param_3) {
    piVar1 = param_1;
    for (uVar2 = param_3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *piVar1 = 0;
      piVar1 = piVar1 + 1;
    }
    for (uVar2 = (uint)((param_3 & 1) != 0); piVar5 = local_8c, uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined2 *)piVar1 = 0;
      piVar1 = (int *)((int)piVar1 + 2);
    }
    do {
      uVar3 = (int)uVar6 >> 0x1f;
      uVar2 = uVar6 ^ uVar3;
      uVar6 = uVar6 + 1;
      *piVar5 = ((uVar2 - uVar3 & 1 ^ uVar3) != uVar3) + 9;
      piVar5 = piVar5 + 1;
    } while ((int)uVar6 < (int)param_3);
  }
  local_8 = 0;
  param_3 = 0;
  piVar1 = param_1;
  param_1 = local_8c;
  do {
    iVar4 = *param_1 - local_8;
    iVar7 = 8 - iVar4;
    if (iVar7 < 1) {
      uVar6 = CONCAT22((short)(param_3 >> 0x10),(ushort)*(byte *)(param_3 + param_2));
    }
    else {
      uVar6 = 0xff >> ((byte)iVar7 & 0x1f) &
              CONCAT22((short)((uint)param_2 >> 0x10),(ushort)*(byte *)(param_3 + param_2));
    }
    *(short *)piVar1 = (short)*piVar1 + (short)(uVar6 << ((byte)local_8 & 0x1f));
    if ((iVar4 < 9) &&
       (*(short *)((int)piVar1 + 2) =
             *(short *)((int)piVar1 + 2) +
             (ushort)(*(byte *)(param_3 + param_2) >> ((byte)iVar4 & 0x1f)), iVar4 < 9)) {
      param_1 = param_1 + 1;
      piVar1 = (int *)((int)piVar1 + 2);
    }
    else {
      iVar7 = local_8 + 8;
    }
    param_3 = param_3 + 1;
    local_8 = iVar7;
  } while ((int)param_3 < 0x26);
  return 0;
}


