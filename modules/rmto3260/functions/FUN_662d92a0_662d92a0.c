/* Module: rmto3260.dll
   Function: FUN_662d92a0
   Address: 662d92a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662d92a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_662f6560(7);
  if (-1 < iVar1) {
    puVar2 = FUN_662f6520();
    *(undefined4 **)(param_1 + 4) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
  }
  return iVar1;
}


