/* Module: mp3plug.dll
   Function: FUN_5f6927b0
   Address: 5f6927b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6927b0(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_5f692810(param_1);
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0x240) != 0) {
      uVar2 = ftol();
      *param_2 = uVar2;
    }
  }
  return iVar1;
}


