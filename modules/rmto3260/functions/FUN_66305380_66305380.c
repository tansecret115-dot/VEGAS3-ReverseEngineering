/* Module: rmto3260.dll
   Function: FUN_66305380
   Address: 66305380
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_66305380(int param_1)

{
  LSTATUS LVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(*(int *)(param_1 + 0xc) + -8) == 0)) {
    uVar2 = 0x80040009;
  }
  else {
    FUN_66305400(param_1);
    LVar1 = RegOpenKeyExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_1 + 0xc),0,
                          *(REGSAM *)(param_1 + 0x20),(PHKEY)(param_1 + 8));
    if (LVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = RegOpenKeyExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_1 + 0xc),0,
                            *(REGSAM *)(param_1 + 0x20),(PHKEY)(param_1 + 8));
      uVar2 = uVar2 & 0xffff | 0x80070000;
    }
    if (-1 < (int)uVar2) {
      *(undefined4 *)(param_1 + 0x24) = 1;
      return uVar2;
    }
  }
  return uVar2;
}


