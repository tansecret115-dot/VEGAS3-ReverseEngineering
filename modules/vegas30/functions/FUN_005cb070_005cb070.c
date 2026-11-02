/* Module: vegas30.exe
   Function: FUN_005cb070
   Address: 005cb070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cb070(int param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  uVar2 = 1;
  if ((*(uint *)(param_1 + 0x10) & param_3) != (param_2 & param_3 & param_3)) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    FUN_005b83b0(puVar1,1);
    uVar3 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = ~param_3 & uVar3 | param_2 & param_3;
    if (*(int *)(param_1 + 4) == 3) {
      *(uint *)*puVar1 = *(uint *)*puVar1 | 0x200000;
    }
    *(uint *)*puVar1 = *(uint *)*puVar1 | 8;
    uVar3 = *(uint *)(param_1 + 0x10) ^ uVar3;
    if ((uVar3 & 3) != 0) {
      *(uint *)*puVar1 = *(uint *)*puVar1 | 0x200;
    }
    if ((uVar3 & 4) != 0) {
      FUN_005b9000(puVar1);
      *(uint *)*puVar1 = *(uint *)*puVar1 | 4;
    }
    FUN_005b84d0(puVar1,1);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    if ((uVar3 & 2) != 0) {
      local_4 = *(uint *)(param_1 + 0x10) >> 1 & 1;
      local_c = 1;
      local_8 = uVar2;
      FUN_00568d40(&local_c,0xc);
    }
    if ((uVar3 & 1) != 0) {
      local_4 = *(uint *)(param_1 + 0x10) & 1;
      local_c = 3;
      local_8 = uVar2;
      FUN_00568d40(&local_c,0xc);
    }
    uVar2 = 0;
  }
  return uVar2;
}


