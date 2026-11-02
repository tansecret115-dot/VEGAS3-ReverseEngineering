/* Module: rmme3260.dll
   Function: FUN_6623a820
   Address: 6623a820
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6623a820(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  if ((((byte)*(undefined4 *)(iVar1 + 0x487) & 0x20) == 0x20) && (*(int *)(iVar1 + 0x47f) != 0)) {
    *(undefined4 *)(iVar1 + 0x47f) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x483) = 1;
    (**(code **)(*(int *)(param_1 + 4) + 0x40))((int *)(param_1 + 4));
  }
  return;
}


