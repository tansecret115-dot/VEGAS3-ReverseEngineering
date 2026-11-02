/* Module: dnet3260.dll
   Function: FUN_63052640
   Address: 63052640
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_63052640(UINT param_1,LPSTR param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 *cchBufferMax;
  int iVar2;
  int iVar3;
  
  cchBufferMax = param_3;
  iVar3 = 0;
  bVar1 = false;
  iVar2 = 0;
  FUN_63052620();
  if (0 < DAT_63055520) {
    param_3 = &DAT_630554f0;
    do {
      if (((HINSTANCE)*param_3 != (HINSTANCE)0x0) &&
         (iVar2 = LoadStringA((HINSTANCE)*param_3,param_1,param_2,(int)cchBufferMax), iVar2 != 0)) {
        bVar1 = true;
        break;
      }
      iVar3 = iVar3 + 1;
      param_3 = param_3 + 1;
    } while (iVar3 < DAT_63055520);
  }
  if (!bVar1) {
    iVar2 = LoadStringA(DAT_6305551c,param_1,param_2,(int)cchBufferMax);
  }
  return iVar2;
}


