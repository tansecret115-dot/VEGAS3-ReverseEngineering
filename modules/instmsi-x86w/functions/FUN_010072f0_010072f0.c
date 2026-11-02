/* Module: InstMsi-x86w.exe
   Function: FUN_010072f0
   Address: 010072f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_010072f0(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint local_4;
  
  switch(*(ushort *)((int)param_1 + 0xb2) & 0xf) {
  case 0:
    uVar1 = *(ushort *)(param_1[0x12] + 4);
    *param_2 = uVar1;
    puVar5 = (undefined1 *)param_1[0xf];
    puVar6 = (undefined1 *)param_1[0x10];
    for (uVar4 = (uint)uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    return 1;
  case 1:
    break;
  case 2:
    local_4 = (uint)*param_2;
    iVar3 = FUN_0100599f();
    if (iVar3 == 0) {
      *param_2 = (ushort)local_4;
      return 1;
    }
    FUN_01007480((undefined4 *)*param_1,7,0);
    return 0;
  case 3:
    local_4 = (uint)*param_2;
    bVar2 = FUN_01007620((int *)param_1[0xd],param_1[0xf],(uint)*(ushort *)(param_1[0x12] + 4),
                         param_1[0x10],&local_4);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      *param_2 = (ushort)local_4;
      return 1;
    }
    FUN_01007480((undefined4 *)*param_1,7,0);
    return 0;
  default:
    FUN_01007480((undefined4 *)*param_1,6,0);
    return 0;
  }
  local_4 = param_1[0x25];
  iVar3 = FUN_0100599f();
  if (iVar3 == 0) {
    *param_2 = (ushort)local_4;
    return 1;
  }
  FUN_01007480((undefined4 *)*param_1,7,0);
  return 0;
}


