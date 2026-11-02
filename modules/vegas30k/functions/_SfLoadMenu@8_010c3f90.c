/* Module: vegas30k.dll
   Function: _SfLoadMenu@8
   Address: 010c3f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLoadMenu_8(undefined4 *param_1,LPCSTR param_2)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID lpMenuTemplate;
  HMENU pHVar1;
  
                    /* 0xc3f90  1093  _SfLoadMenu@8 */
  if (((((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) &&
      (hResInfo = FindResourceExA((HMODULE)param_1[0x4e],&DAT_00000004,param_2,
                                  *(WORD *)(param_1 + 0x4f)), hResInfo != (HRSRC)0x0)) &&
     (hResData = LoadResource((HMODULE)param_1[0x4e],hResInfo), hResData != (HGLOBAL)0x0)) {
    lpMenuTemplate = LockResource(hResData);
    pHVar1 = LoadMenuIndirectA(lpMenuTemplate);
    if (pHVar1 != (HMENU)0x0) goto LAB_010c3ff6;
  }
  pHVar1 = LoadMenuA((HINSTANCE)*param_1,param_2);
  if (pHVar1 == (HMENU)0x0) {
    return;
  }
LAB_010c3ff6:
  FUN_010c3f40(pHVar1);
  return;
}


