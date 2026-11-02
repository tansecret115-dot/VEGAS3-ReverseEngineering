/* Module: vidcap30.exe
   Function: FUN_004285a0
   Address: 004285a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004285a0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x84c);
  if (piVar1 != (int *)0x0) {
    uVar2 = DAT_005bb4dc;
    if (param_2 == 0) {
      uVar2 = 0xc0;
    }
    (**(code **)(*piVar1 + 0x18))(piVar1,uVar2);
  }
  return;
}


