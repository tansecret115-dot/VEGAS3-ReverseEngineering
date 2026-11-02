/* Module: vegas30.exe
   Function: FUN_0046c030
   Address: 0046c030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046c030(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_8 != 0) {
    uVar1 = FUN_005ba4b0(param_1,0);
    uVar1 = FUN_005ba950(param_1,uVar1,0);
    FUN_004eaad0(param_1,0,0x24,0);
    FUN_0044b150(uVar1,param_3,param_4,param_5,param_6,param_7 != 0);
  }
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == 3)) {
    FUN_004ea250(param_1,param_2,0x29,0);
    iVar2 = FUN_00523300(param_2 + 0x80,param_3,param_4,param_5,param_6,param_7 != 0);
    if (-1 < iVar2) {
      FUN_0044b150(*(undefined4 *)(param_2 + 0x78),param_3,param_4,param_5,param_6,param_7 != 0);
    }
  }
  return;
}


