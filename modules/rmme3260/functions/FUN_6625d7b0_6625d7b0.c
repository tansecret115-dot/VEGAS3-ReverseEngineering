/* Module: rmme3260.dll
   Function: FUN_6625d7b0
   Address: 6625d7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625d7b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_66250ae0(*(int **)(param_1 + 0xc0));
  if (*(undefined4 **)(param_1 + 0x12) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x12))(5,1,iVar1);
  }
  return;
}


