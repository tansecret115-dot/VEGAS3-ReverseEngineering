/* Module: vegas30.exe
   Function: FUN_005bdc20
   Address: 005bdc20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005bdc20(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  int iStack_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  puVar3 = local_80;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_80[1] = *(undefined4 *)(param_1 + 8);
  local_80[2] = *(undefined4 *)(param_1 + 0x10);
  local_80[3] = *(undefined4 *)(param_1 + 0x14);
  local_70 = *(undefined4 *)(param_1 + 0x18);
  local_14 = *(undefined4 *)(param_1 + 0x118);
  local_6c = *(undefined4 *)(param_1 + 0x1c);
  local_18 = *(undefined4 *)(param_1 + 0x10c);
  local_80[0] = 0x80;
  if (*(undefined4 **)(param_1 + 0x110) == (undefined4 *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = **(undefined4 **)(param_1 + 0x110);
  }
  if (*(undefined4 **)(param_1 + 0x114) == (undefined4 *)0x0) {
    local_c = 0;
  }
  else {
    local_c = **(undefined4 **)(param_1 + 0x114);
  }
  local_8 = *(int *)(param_1 + 0x120);
  local_4 = *(undefined4 *)(param_1 + 0x124);
  piVar4 = param_2;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_80,0x80,0);
  iVar2 = local_8;
  if ((((-1 < iVar1) &&
       ((iStack_20 == 0 ||
        (iVar1 = tSFVIDEOFILTERCACHE::Persist
                           ((IStream *)**(undefined4 **)(*(int *)(param_1 + 0x110) + 8),(int)param_2
                           ), -1 < iVar1)))) &&
      ((iStack_1c == 0 ||
       (iVar1 = tSFVIDEOFILTERCACHE::Persist
                          ((IStream *)**(undefined4 **)(*(int *)(param_1 + 0x114) + 8),(int)param_2)
       , -1 < iVar1)))) &&
     ((iVar2 != 0 &&
      (iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&stack0xffffff68,4,0), -1 < iVar1)))) {
    iVar5 = 0;
    if (0 < (int)piVar4) {
      do {
        iVar1 = tSFVIDEOFILTERCACHE::Persist
                          (*(IStream **)(*(int *)(*(int *)(param_1 + 0x50) + 8) + iVar5 * 4),
                           (int)param_2);
        if (iVar1 < 0) {
          return iVar1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)piVar4);
    }
    FUN_00522af0(param_2,iVar2);
  }
  return iVar1;
}


