/* Module: vegas30k.dll
   Function: FUN_011d2cd0
   Address: 011d2cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011d2cd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x154) & 0x400) == 0) {
    return -0x7fff0001;
  }
  iVar1 = FUN_011d2c60(*(undefined4 *)(param_1 + 500));
  if (-1 < iVar1) {
    iVar2 = *(int *)(param_1 + 500) + 1;
    *(int *)(param_1 + 500) = iVar2;
    if (*(int *)(param_1 + 0x1ec) <= iVar2) {
      *(undefined4 *)(param_1 + 500) = 0;
    }
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffbff;
  }
  return iVar1;
}


