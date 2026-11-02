/* Module: vegas30.exe
   Function: FUN_005caff0
   Address: 005caff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005caff0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(uint *)(param_1 + 0x634) & 1) != param_2) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    FUN_005b83b0(puVar1,1);
    *(uint *)(param_1 + 0x634) =
         (*(uint *)(param_1 + 0x634) ^ param_2) & 1 ^ *(uint *)(param_1 + 0x634);
    *(uint *)**(undefined4 **)(param_1 + 8) = *(uint *)**(undefined4 **)(param_1 + 8) | 0x80;
    *(uint *)*puVar1 = *(uint *)*puVar1 | 8;
    if (param_1 != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200000;
      *(uint *)*puVar1 = *(uint *)*puVar1 | 0x2000;
    }
    FUN_005b84d0(puVar1,1);
    uVar2 = 0;
  }
  return uVar2;
}


