/* Module: stl2plg.dll
   Function: FUN_00401eb0
   Address: 00401eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00401eb0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3b0) != 0) {
    if (*(int *)(param_1 + 0x3a8) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x3a8) + 0x58);
    }
    (**(code **)(**(int **)(param_1 + 0x3b4) + 0x18))
              (*(int **)(param_1 + 0x3b4),0,0,0,0,uVar1,*(int *)(param_1 + 0x3b0));
    *(undefined4 *)(param_1 + 0x3b0) = 0;
  }
  return;
}


