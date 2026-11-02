/* Module: vidcap30.exe
   Function: _SfGrayMenu@12
   Address: 0047a9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfGrayMenu_12(HMENU param_1,UINT *param_2,int param_3)

{
  int iVar1;
  
                    /* 0x7a9f0  445  _SfGrayMenu@12 */
  if (param_3 < 0) {
    param_3 = 10000;
  }
  iVar1 = 0;
  if (0 < param_3) {
    do {
      if (*param_2 == 0) {
        return;
      }
      EnableMenuItem(param_1,*param_2,1);
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 1;
    } while (iVar1 < param_3);
  }
  return;
}


