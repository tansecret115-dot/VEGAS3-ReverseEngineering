/* Module: rmto3260.dll
   Function: FUN_662cbb40
   Address: 662cbb40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662cbb40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  local_c = *(int *)(iVar1 + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar1 + 0x10);
  }
  uVar5 = 0;
  if ((uVar4 & 0xffff) != 0) {
    do {
      if (iVar2 < 0) {
        return;
      }
      puVar3 = (undefined4 *)FUN_662ed930(&local_c);
      local_8 = 0;
      iVar2 = (**(code **)(*(int *)*puVar3 + 0x68))((int *)*puVar3,&local_8);
      uVar5 = uVar5 + 1;
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + local_8;
    } while (uVar5 < (uVar4 & 0xffff));
  }
  return;
}


