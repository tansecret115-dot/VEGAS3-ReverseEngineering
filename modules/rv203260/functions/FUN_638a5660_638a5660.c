/* Module: rv203260.dll
   Function: FUN_638a5660
   Address: 638a5660
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_638a5660(int param_1)

{
  int iVar1;
  
  if ((*(code **)(param_1 + 0xf0) == (code *)0x0) || (*(int *)(param_1 + 0xb0) == 0)) {
    iVar1 = 0x6f;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0xf0))(*(int *)(param_1 + 0xb0));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      return 0;
    }
  }
  return iVar1;
}


