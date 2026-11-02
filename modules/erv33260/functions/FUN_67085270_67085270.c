/* Module: erv33260.dll
   Function: FUN_67085270
   Address: 67085270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_67085270(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  char local_48;
  char *local_2c;
  int local_28;
  int local_24;
  char *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = *(int *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x94);
  iVar4 = *(int *)(param_1 + 100);
  iVar5 = *(int *)(param_1 + 0x48);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  uVar8 = *(undefined4 *)(param_1 + 0x60);
  iVar9 = *(int *)(param_1 + 0x5c);
  iVar10 = *(int *)(param_1 + 0x74);
  iVar11 = *(int *)(param_1 + 0x4c);
  local_2c = (char *)(*(int *)(param_1 + 0x18) + param_2 * 2);
  local_24 = -*(int *)(param_1 + 0x78);
  local_1c = 0;
  local_28 = *(int *)(param_1 + 0x78) * -3;
  do {
    local_18 = iVar10 * -3 + -0x2c;
    iVar17 = 0;
    local_20 = local_2c;
    local_14 = (iVar1 * 0x10 - iVar10) * 3 + 0x11;
    do {
      cVar12 = (char)(iVar9 * *local_20 + 0x2000 >> 0xe);
      cVar15 = cVar12 - *local_20;
      cVar13 = (char)(iVar9 * local_20[1] + 0x2000 >> 0xe);
      local_48 = cVar13 - local_20[1];
      if (local_14 < cVar15) {
        cVar15 = (char)local_14;
      }
      if (cVar15 < local_18) {
        cVar15 = (char)local_18;
      }
      iVar16 = (iVar5 * 0x10 + local_24) * 3 + 0x11;
      if (iVar16 < local_48) {
        local_48 = (char)iVar16;
      }
      if ((int)local_48 < local_28 + -0x2c) {
        local_48 = (char)(local_28 + -0x2c);
      }
      iVar16 = (int)cVar12 % 3;
      if (iVar16 < 0) {
        iVar16 = iVar16 + 3;
      }
      iVar14 = (int)cVar13 % 3;
      if (iVar14 < 0) {
        iVar14 = iVar14 + 3;
      }
      (**(code **)(iVar3 + (iVar16 + iVar14 * 4) * 4))(uVar6,8);
      iVar16 = (int)cVar15 % 3;
      if (iVar16 < 0) {
        iVar16 = iVar16 + 3;
      }
      iVar14 = (int)local_48 % 3;
      if (iVar14 < 0) {
        iVar14 = iVar14 + 3;
      }
      (**(code **)(iVar3 + (iVar16 + iVar14 * 4) * 4))(uVar6,8);
      iVar17 = iVar17 + 8;
      local_20 = local_20 + 4;
      local_14 = local_14 + -0x18;
      local_18 = local_18 + -0x18;
    } while (iVar17 < 0x10);
    local_28 = local_28 + -0x18;
    local_1c = local_1c + 8;
    local_24 = local_24 + -8;
    local_2c = local_2c + iVar11 * 4;
  } while (local_1c < 0x10);
  (**(code **)(param_1 + 0x9c))(uVar2,uVar7,iVar4 + 0x100,0x10,0,iVar9,uVar8);
  return;
}


