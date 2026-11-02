/* Module: vegas30.exe
   Function: FUN_00412500
   Address: 00412500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412500(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040c050(param_2);
  if (param_2 == 2) {
    if (*(int *)(param_1 + 0x9c) != 2) {
      DAT_0064767c = DAT_0064767c | 0x10000;
    }
  }
  else if ((*(int *)(param_1 + 0x9c) == 2) && (param_2 != 0x61)) {
    DAT_0064767c = DAT_0064767c | 0x20000;
  }
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 0x14) < 0xc)) {
    *(int *)(param_1 + 0x9c) = param_2;
  }
  return;
}


