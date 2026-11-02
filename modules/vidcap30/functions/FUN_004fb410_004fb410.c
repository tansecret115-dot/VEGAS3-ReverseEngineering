/* Module: vidcap30.exe
   Function: FUN_004fb410
   Address: 004fb410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fb410(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_20 [4];
  int local_10;
  undefined1 *local_c;
  uint *puStack_4;
  
  iVar4 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  puVar7 = local_20;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  _SfList_CreateExZ_32(&param_1,4,0x10,0x10,0x40000002,0,0,0);
  if (param_1 != 0) {
    local_10 = param_1;
    piVar2 = *(int **)(iVar4 + 0x3c);
    local_20[0] = 1;
    local_c = &DAT_00586c70;
    (**(code **)(*piVar2 + 0xc))(piVar2,local_20);
    uVar6 = 0;
    uVar3 = *puStack_4;
    if (uVar3 != 0) {
      do {
        FUN_004f9d30(uVar1,uVar6,0,*(undefined4 *)(puStack_4[2] + uVar6 * 4));
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    FUN_00497a20(*(undefined4 *)(iVar4 + 0x3c),puStack_4,0);
    _SfList_Destroy_4(puStack_4);
  }
  return;
}


