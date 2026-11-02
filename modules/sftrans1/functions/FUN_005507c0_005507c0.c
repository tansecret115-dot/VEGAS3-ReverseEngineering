/* Module: sftrans1.dll
   Function: FUN_005507c0
   Address: 005507c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005507c0(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *local_20;
  int local_1c;
  undefined2 *local_18;
  
  if ((int)param_2 < 0x14) {
    param_2 = (undefined2 *)0x14;
  }
  else if (100 < (int)param_2) {
    param_2 = (undefined2 *)0x64;
  }
  if (param_3 < 0x14) {
    param_3 = 0x14;
  }
  *(undefined2 **)(param_1 + 0x1214) = param_2;
  *(int *)(param_1 + 0x1218) = param_3;
  iVar5 = ((int)param_2 << 4) / 100;
  local_18 = (undefined2 *)(param_1 + 0x12);
  local_1c = 0;
  do {
    iVar3 = iVar5 + 0x10 + local_1c;
    iVar10 = (local_1c - iVar5) + 0x10;
    param_3 = 0;
    local_20 = local_18;
    do {
      iVar4 = iVar5 + 0x10 + param_3;
      iVar9 = (param_3 - iVar5) + 0x10;
      param_2 = local_20;
      iVar6 = 0;
      do {
        iVar1 = iVar6 + 0x10;
        iVar8 = 0;
        if ((iVar10 < iVar1) && (iVar6 < iVar3)) {
          iVar8 = iVar1;
          if (iVar3 <= iVar1) {
            iVar8 = iVar3;
          }
          if (iVar6 <= iVar10) {
            iVar6 = iVar10;
          }
          iVar8 = iVar8 - iVar6;
        }
        iVar6 = 0;
        puVar11 = param_2;
        do {
          iVar2 = iVar6 + 0x10;
          iVar7 = 0;
          if ((iVar9 < iVar2) && (iVar6 < iVar4)) {
            iVar7 = iVar4;
            if (iVar2 < iVar4) {
              iVar7 = iVar2;
            }
            if (iVar6 <= iVar9) {
              iVar6 = iVar9;
            }
            iVar7 = iVar7 - iVar6;
          }
          *puVar11 = (short)((((uint)(iVar7 * iVar8 * 0xffff) >> 8) * *(int *)(param_1 + 0x1218)) /
                            0x640);
          iVar6 = iVar2;
          puVar11 = puVar11 + 0x300;
        } while (iVar2 < 0x30);
        param_2 = param_2 + 0x100;
        iVar6 = iVar1;
      } while (iVar1 < 0x30);
      param_3 = param_3 + 1;
      local_20 = local_20 + 0x10;
    } while (param_3 < 0x10);
    local_1c = local_1c + 1;
    local_18 = local_18 + 1;
  } while (local_1c < 0x10);
  return;
}


