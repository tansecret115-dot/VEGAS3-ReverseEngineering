/* Module: vegas30k.dll
   Function: _SfLoadAccelerators@8
   Address: 010c3d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLoadAccelerators_8(undefined4 *param_1,LPCSTR param_2)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPACCEL paccel;
  HACCEL pHVar1;
  
                    /* 0xc3d30  1087  _SfLoadAccelerators@8 */
  if (((((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) &&
      (hResInfo = FindResourceExA((HMODULE)param_1[0x4e],&DAT_00000009,param_2,
                                  *(WORD *)(param_1 + 0x4f)), hResInfo != (HRSRC)0x0)) &&
     (hResData = LoadResource((HMODULE)param_1[0x4e],hResInfo), hResData != (HGLOBAL)0x0)) {
    paccel = LockResource(hResData);
    pHVar1 = CreateAcceleratorTableA(paccel,0);
    if (pHVar1 != (HACCEL)0x0) {
      return;
    }
  }
  LoadAcceleratorsA((HINSTANCE)*param_1,param_2);
  return;
}


