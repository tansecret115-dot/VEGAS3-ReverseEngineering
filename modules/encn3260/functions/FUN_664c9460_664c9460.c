/* Module: encn3260.dll
   Function: FUN_664c9460
   Address: 664c9460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c9460(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_664ba9f0(*(int **)(param_1 + 0xc0));
  if (*(undefined4 **)(param_1 + 0x12) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x12))(5,1,iVar1);
  }
  return;
}


