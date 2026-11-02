/* Module: sipr3260.dll
   Function: FUN_632a2110
   Address: 632a2110
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_632a2110(UINT param_1,LPSTR param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 *cchBufferMax;
  int iVar2;
  int iVar3;
  
  cchBufferMax = param_3;
  iVar3 = 0;
  bVar1 = false;
  iVar2 = 0;
  FUN_632a20f0();
  if (0 < DAT_632a53c0) {
    param_3 = &DAT_632a5390;
    do {
      if (((HINSTANCE)*param_3 != (HINSTANCE)0x0) &&
         (iVar2 = LoadStringA((HINSTANCE)*param_3,param_1,param_2,(int)cchBufferMax), iVar2 != 0)) {
        bVar1 = true;
        break;
      }
      iVar3 = iVar3 + 1;
      param_3 = param_3 + 1;
    } while (iVar3 < DAT_632a53c0);
  }
  if (!bVar1) {
    iVar2 = LoadStringA(DAT_632a53bc,param_1,param_2,(int)cchBufferMax);
  }
  return iVar2;
}


