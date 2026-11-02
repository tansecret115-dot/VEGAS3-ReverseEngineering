/* Module: vidcap30.exe
   Function: FUN_00537cf0
   Address: 00537cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


CArchive2 * __thiscall FUN_00537cf0(CArchive2 *param_1,byte param_2)

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


