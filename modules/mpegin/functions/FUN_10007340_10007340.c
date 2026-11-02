/* Module: mpegin.dll
   Function: FUN_10007340
   Address: 10007340
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10007340(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = FUN_100058f0((int *)(*(int *)(param_1 + 0x12e54) + 0x128));
  while (uVar1 != 0) {
    FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
    iVar2 = iVar2 + 1;
    uVar1 = FUN_100058f0((int *)(*(int *)(param_1 + 0x12e54) + 0x128));
  }
  return iVar2;
}


