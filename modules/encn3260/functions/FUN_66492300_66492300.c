/* Module: encn3260.dll
   Function: FUN_66492300
   Address: 66492300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66492300(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar1 = FUN_6648d1b0(*(int *)(param_1 + 0x2c));
    while (iVar1 != 0) {
      if (*(void **)(iVar1 + 0x16) != (void *)0x0) {
        FUN_66496630(*(void **)(iVar1 + 0x16));
      }
      iVar1 = FUN_6648d220(*(int *)(param_1 + 0x2c));
    }
  }
  return 0;
}


