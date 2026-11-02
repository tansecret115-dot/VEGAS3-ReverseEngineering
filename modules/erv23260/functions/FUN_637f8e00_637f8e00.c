/* Module: erv23260.dll
   Function: FUN_637f8e00
   Address: 637f8e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_637f8e00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2e4);
  uVar1 = 0;
  if (iVar2 != 0) {
    while (*(int *)(iVar2 + 0xc) == 0) {
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) {
        return uVar1;
      }
    }
    if (*(int *)(iVar2 + 8) == 0) {
      uVar1 = *(undefined4 *)(iVar2 + 0xc);
    }
  }
  return uVar1;
}


