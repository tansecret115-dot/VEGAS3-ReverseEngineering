/* Module: Setup.exe
   Function: FUN_00411ab0
   Address: 00411ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


CArchive2 * __thiscall FUN_00411ab0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  CArchive2::~CArchive2(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}


