/* Module: vidcap30.exe
   Function: FUN_00433c10
   Address: 00433c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00433c10(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_20 [4];
  undefined4 local_10;
  
  puVar1 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  if (param_2 != 0) {
    local_20[3] = *(undefined4 *)(param_2 + 0x210);
    local_10 = *(undefined4 *)(param_2 + 0x20c);
    local_20[1] = param_1;
    local_20[0] = 0x412;
    (**(code **)(*DAT_005bba24 + 0xc))(DAT_005bba24,local_20);
  }
  return local_10;
}


