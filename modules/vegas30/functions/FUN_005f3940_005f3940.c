/* Module: vegas30.exe
   Function: FUN_005f3940
   Address: 005f3940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005f3940(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  uVar2 = DAT_0064b138;
  uVar1 = FUN_005ba4b0(DAT_0064b138,0);
  uVar2 = FUN_005ba5c0(uVar2,uVar1,0);
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  return 0;
}


