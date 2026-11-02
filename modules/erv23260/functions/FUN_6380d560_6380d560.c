/* Module: erv23260.dll
   Function: FUN_6380d560
   Address: 6380d560
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6380d560(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  uint local_8;
  
  piVar2 = (int *)0x0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x128) != 0) {
    do {
      uVar1 = *(uint *)(param_1 + 0x124);
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          piVar2 = (int *)(*(int *)(param_1 + 8) + (local_8 * uVar1 + uVar3) * 0x7c);
          piVar2[0x1e] = 0;
          if (uVar3 % *(uint *)(param_1 + 300) < *(int *)(param_1 + 0x124) - 1U) {
            piVar2[0x1e] = (int)(piVar2 + 0x1f);
          }
          bVar4 = uVar3 == 0;
          if (local_8 == 0) {
            bVar4 = bVar4 | 4;
          }
          if (*(int *)(param_1 + 0x124) - 1U == uVar3) {
            bVar4 = bVar4 | 2;
          }
          if (*(int *)(param_1 + 0x128) - 1U == local_8) {
            bVar4 = bVar4 | 8;
          }
          *(byte *)(piVar2 + 0x19) = bVar4;
          *(byte *)((int)piVar2 + 0x65) = bVar4;
          piVar2[1] = local_8 << 4;
          *piVar2 = uVar3 << 4;
          uVar1 = *(uint *)(param_1 + 0x124);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
      }
      piVar2[0x1e] = 0;
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 0x128));
  }
  return;
}


