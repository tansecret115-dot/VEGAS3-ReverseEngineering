/* Module: mp3plug.dll
   Function: FUN_5f6ffcf0
   Address: 5f6ffcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6ffcf0(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int local_18;
  
  puVar2 = param_1 + 4;
  uVar3 = 0;
  uVar4 = 0;
  local_18 = 0;
  do {
    uVar1 = *param_1;
    bVar5 = (int)uVar1 < 0;
    if ((int)uVar1 < 0) {
      uVar1 = -uVar1;
    }
    uVar3 = uVar3 * 2 | uVar1;
    if (uVar1 != 0) {
      local_18 = local_18 + 1;
      uVar4 = uVar4 * 2 | (uint)bVar5;
    }
    param_1 = param_1 + 1;
  } while ((int)param_1 < (int)puVar2);
  (**(code **)(&DAT_5f74a200 + param_2 * 4))(uVar3,uVar4,local_18,param_3);
  return;
}


