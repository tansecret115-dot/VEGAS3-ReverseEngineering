/* Module: vegas30k.dll
   Function: FUN_01071480
   Address: 01071480
   Source: Ghidra pseudocode (Stage 10 batch) */


CArchive2 * __thiscall FUN_01071480(CArchive2 *param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  CArchive2::~CArchive2(param_1);
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}


