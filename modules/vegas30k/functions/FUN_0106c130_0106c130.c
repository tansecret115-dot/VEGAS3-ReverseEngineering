/* Module: vegas30k.dll
   Function: FUN_0106c130
   Address: 0106c130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_0106c130(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 local_360 [9];
  uint local_33c;
  int local_338;
  undefined1 local_30c [260];
  undefined1 local_208;
  undefined1 local_104;
  
  puVar4 = local_360;
  for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar2 = 0;
  uVar3 = 0;
  local_30c[0] = 0;
  local_208 = 0;
  local_104 = 0;
  iVar1 = FUN_01070bd0(local_360);
  while (iVar1 == 0) {
    iVar1 = FUN_0106c0e0(local_30c);
    if (iVar1 == 0) {
      bVar5 = CARRY4(uVar3,local_33c);
      uVar3 = uVar3 + local_33c;
      iVar2 = iVar2 + local_338 + (uint)bVar5;
    }
    iVar1 = FUN_01070c90(local_360);
  }
  return CONCAT44(iVar2,uVar3);
}


