/* Module: vegas30.exe
   Function: FUN_005e51c0
   Address: 005e51c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_005e51c0(HWND param_1,int param_2,int param_3)

{
  float10 fVar1;
  CHAR local_28 [40];
  
  if (param_3 == 0x300) {
    return true;
  }
  if (param_3 == 0x200) {
    local_28[0] = '\0';
    GetWindowTextA(param_1,local_28,0x28);
    fVar1 = (float10)_SfTextToDoubleTokenEx_32
                               (local_28,*(undefined4 *)(param_2 + 0x20),
                                *(undefined4 *)(param_2 + 0x24),DAT_0062ab68,DAT_0062ab6c,
                                DAT_0062ab70,_DAT_0062ab74,0);
    *(double *)(param_2 + 0x20) = (double)fVar1;
    SfSetWindowText(param_1,&DAT_00619d20,(double)fVar1);
  }
  return param_3 == 0x200;
}


