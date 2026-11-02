/* Module: encn3260.dll
   Function: FUN_664d1f70
   Address: 664d1f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664d1f70(GUID *param_1)

{
  HRESULT HVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  HVar1 = CoCreateGuid(param_1);
  if (HVar1 != 0) {
    uVar2 = 0x80004005;
  }
  return uVar2;
}


