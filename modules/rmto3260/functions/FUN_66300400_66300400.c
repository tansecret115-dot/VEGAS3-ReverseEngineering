/* Module: rmto3260.dll
   Function: FUN_66300400
   Address: 66300400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_66300400(int param_1,uint param_2,int param_3,short *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  *param_4 = 0;
  if (param_5 == 0) {
    param_5 = DAT_66311d8c;
  }
  iVar2 = param_1;
  if ((DAT_66311d80 & 0xffff) <= (param_2 & 0xffff)) {
    do {
      iVar1 = FUN_66300cf0(iVar2,param_3,param_5);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      *param_4 = *param_4 + DAT_66311aa0;
      iVar2 = iVar2 + (DAT_66311d80 & 0xffff);
      param_3 = param_3 + (_DAT_66311aa0 & 0xffff);
    } while ((int)(DAT_66311d80 & 0xffff) <= (int)((param_1 - iVar2) + (param_2 & 0xffff)));
    return 0;
  }
  return 0;
}


