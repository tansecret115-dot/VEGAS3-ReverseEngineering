/* Module: sfcdi.dll
   Function: FUN_5bf20af0
   Address: 5bf20af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf20af0(uint *param_1,uint *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  uVar6 = 0;
  local_18 = 2;
  if (param_1 == (uint *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *param_1;
  }
  if (local_14 == 0) {
    return 0;
  }
  do {
    iVar5 = *(int *)(param_1[2] + uVar6 * 4);
    if (iVar5 != 0) {
      uVar7 = 0;
      uVar3 = ftol();
      uVar4 = ftol();
      uVar3 = FUN_5bf3b630(param_2,(uchar *)"Some Name",uVar4,uVar3,uVar7);
      pbVar1 = *(byte **)(iVar5 + 0x28);
      if (pbVar1 == (byte *)0x0) {
        local_18 = 2;
      }
      else {
        puVar2 = *(undefined4 **)(param_2[2] + uVar3 * 4);
        if ((*pbVar1 & 1) != 0) {
          *puVar2 = 4;
          puVar2[1] = local_18;
          local_18 = local_18 + 1;
        }
        if ((*pbVar1 & 2) != 0) {
          puVar2[4] = puVar2[4] | 1;
        }
        if ((*pbVar1 & 4) != 0) {
          puVar2[4] = puVar2[4] | 2;
        }
        iVar5 = lstrlenA((LPCSTR)(pbVar1 + 4));
        if (iVar5 != 0) {
          lstrcpynA((LPSTR)&local_10,(LPCSTR)(pbVar1 + 4),0xd);
          local_4 = 0;
          puVar2[6] = local_10;
          puVar2[7] = local_c;
          puVar2[8] = local_8;
          puVar2[4] = puVar2[4] | 8;
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < local_14);
  return 0;
}


