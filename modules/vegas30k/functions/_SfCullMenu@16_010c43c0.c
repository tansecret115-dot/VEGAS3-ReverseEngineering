/* Module: vegas30k.dll
   Function: _SfCullMenu@16
   Address: 010c43c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfCullMenu_16(HMENU param_1,UINT *param_2,int param_3,int param_4)

{
  int iVar1;
  
                    /* 0xc43c0  801  _SfCullMenu@16 */
  if (param_3 < 0) {
    param_3 = 10000;
  }
  iVar1 = 0;
  if (0 < param_3) {
    do {
      if (*param_2 == 0) break;
      DeleteMenu(param_1,*param_2,0);
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 1;
    } while (iVar1 < param_3);
  }
  if (param_4 != 0) {
    _SfCleanMenu_12(param_1,0,0xffffffff);
  }
  return;
}


