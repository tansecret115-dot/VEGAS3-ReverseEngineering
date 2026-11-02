/* Module: mp3rw.dll
   Function: FUN_00485d40
   Address: 00485d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00485d40(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00485bc0(param_1,0x7f,7);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return 1;
}


