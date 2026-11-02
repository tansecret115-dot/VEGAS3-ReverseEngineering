/* Module: sipr3260.dll
   Function: FUN_632a1390
   Address: 632a1390
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_632a1390(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_632a12b0(param_1);
  if ((iVar2 == 0) && (*(code **)(param_1 + 0x5d) != (code *)0x0)) {
    sVar1 = (**(code **)(param_1 + 0x5d))(*(undefined4 *)(param_1 + 0x41));
    if (sVar1 != 0) {
      iVar2 = -0x7fffbffb;
    }
  }
  return iVar2;
}


