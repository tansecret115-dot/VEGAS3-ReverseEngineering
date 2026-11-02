/* Module: vegas30.exe
   Function: FUN_004d5a60
   Address: 004d5a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004d5a60(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x34);
  do {
    iVar1 = (*(code *)**(undefined4 **)*puVar2)(param_1,param_2);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 < 4);
  return 0;
}


