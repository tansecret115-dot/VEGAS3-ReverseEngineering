/* Module: vegas30k.dll
   Function: _SfDibReleaseStockLUT@8
   Address: 010cbfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * _SfDibReleaseStockLUT_8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* 0xcbfc0  880  _SfDibReleaseStockLUT@8 */
  if ((((0 < param_2) && (param_2 < 0x11)) && (0 < param_1)) && (param_1 < 9)) {
    param_2 = param_1 * 0x10 + param_2;
    iVar1 = param_2 * 8;
    puVar2 = (undefined4 *)(&DAT_0128eb28 + iVar1);
    if (0 < *(int *)(&DAT_0128eb2c + param_2 * 8)) {
      iVar3 = *(int *)(&DAT_0128eb2c + param_2 * 8) + -1;
      *(int *)(&DAT_0128eb2c + iVar1) = iVar3;
      if (iVar3 == 0) {
        GlobalFree((HGLOBAL)*puVar2);
        *puVar2 = 0;
      }
      return (undefined1 *)0x0;
    }
    *(undefined4 *)(&DAT_0128eb2c + iVar1) = 0;
    *puVar2 = 0;
  }
  return &DAT_80070057;
}


