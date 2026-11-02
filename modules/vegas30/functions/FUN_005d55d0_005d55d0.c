/* Module: vegas30.exe
   Function: FUN_005d55d0
   Address: 005d55d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d55d0(undefined4 param_1,HWND param_2,undefined4 *param_3,int param_4)

{
  float10 fVar1;
  CHAR local_28 [40];
  
  if (param_4 == 0x300) {
    if (param_3[1] == 0) {
      *param_3 = 1;
    }
  }
  else if (param_4 == 0x200) {
    local_28[0] = '\0';
    GetWindowTextA(param_2,local_28,0x28);
    fVar1 = (float10)_SfTextToDoubleTokenEx_32
                               (local_28,param_3[4],param_3[5],DAT_0062a190,DAT_0062a194,
                                DAT_0062a198,DAT_0062a19c,0);
    *(double *)(param_3 + 4) = (double)fVar1;
    SfSetWindowText(param_2,&DAT_00619d20,(double)fVar1);
    return 1;
  }
  return 1;
}


