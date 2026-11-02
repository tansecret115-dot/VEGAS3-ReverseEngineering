/* Module: vegas30.exe
   Function: FUN_00418090
   Address: 00418090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00418090(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 == 2) {
    uVar2 = DAT_006487dc;
    DAT_006487dc = param_2;
    return uVar2;
  }
  if (iVar1 == 3) {
    uVar2 = DAT_006491f4;
    DAT_006491f4 = param_2;
    return uVar2;
  }
  if (iVar1 == 4) {
    uVar2 = DAT_006491f8;
    DAT_006491f8 = param_2;
    return uVar2;
  }
  if (iVar1 == 5) {
    uVar2 = 0;
  }
  return uVar2;
}


