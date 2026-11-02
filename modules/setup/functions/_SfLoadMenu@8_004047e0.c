/* Module: Setup.exe
   Function: _SfLoadMenu@8
   Address: 004047e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLoadMenu_8(undefined4 *param_1,LPCSTR param_2)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID lpMenuTemplate;
  HMENU pHVar1;
  
                    /* 0x47e0  256  _SfLoadMenu@8 */
  if (((((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) &&
      (hResInfo = FindResourceExA((HMODULE)param_1[0x4e],(LPCSTR)0x4,param_2,
                                  *(WORD *)(param_1 + 0x4f)), hResInfo != (HRSRC)0x0)) &&
     (hResData = LoadResource((HMODULE)param_1[0x4e],hResInfo), hResData != (HGLOBAL)0x0)) {
    lpMenuTemplate = LockResource(hResData);
    pHVar1 = LoadMenuIndirectA(lpMenuTemplate);
    if (pHVar1 != (HMENU)0x0) goto LAB_00404846;
  }
  pHVar1 = LoadMenuA((HINSTANCE)*param_1,param_2);
  if (pHVar1 == (HMENU)0x0) {
    return;
  }
LAB_00404846:
  FUN_00404790(pHVar1);
  return;
}


