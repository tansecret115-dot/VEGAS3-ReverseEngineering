/* Module: vegas30.exe
   Function: FUN_0054b220
   Address: 0054b220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054b220(uint param_1,int param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  double dVar3;
  
  *param_3 = 0;
  if ((-1 < param_2) && ((0 < param_2 || (param_1 != 0)))) {
    if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x3d091)))) {
      lVar1 = __allmul(param_1,param_2,8,0);
      dVar3 = (double)lVar1 * _DAT_006128f8;
      uVar2 = _SfGetString_8(DAT_00647204,0x6e4a);
      SfPrintF(param_3,uVar2,dVar3);
      return;
    }
    dVar3 = (double)CONCAT44(param_2,param_1) * _DAT_0061a6f0;
    uVar2 = _SfGetString_8(DAT_00647204,0x6e4b);
    SfPrintF(param_3,uVar2,dVar3);
  }
  return;
}


