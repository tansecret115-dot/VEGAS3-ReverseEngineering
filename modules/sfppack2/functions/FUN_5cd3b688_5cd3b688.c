/* Module: sfppack2.dll
   Function: FUN_5cd3b688
   Address: 5cd3b688
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5cd3b688(int *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  bool bVar3;
  int local_c;
  int *local_8;
  
  iVar2 = 0;
  if (DAT_5cd5f2a4 != 0) {
    ppuVar1 = &PTR_DAT_5cd5f17c + (DAT_5cd5f2a4 + -1) * 5;
    local_c = DAT_5cd5f2a4 + -1;
    local_8 = param_1;
    do {
      if (ppuVar1[1] != (undefined *)0x0) {
        iVar2 = CoCreateInstance((IID *)*ppuVar1,(LPUNKNOWN)0x0,1,(IID *)&DAT_5cd5a760,&local_8);
        if (iVar2 < 0) {
          if ((iVar2 == -0x7fffbffe) || (iVar2 == -0x7ffbfdfe)) {
            iVar2 = 0;
          }
        }
        else {
          iVar2 = (**(code **)(*local_8 + 0x10))(local_8);
          (**(code **)(*local_8 + 8))(local_8);
        }
      }
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = FUN_5cd3b2e0();
      if (iVar2 < 0) {
        return iVar2;
      }
      ppuVar1 = ppuVar1 + -5;
      bVar3 = local_c != 0;
      local_c = local_c + -1;
    } while (bVar3);
  }
  return iVar2;
}


