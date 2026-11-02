/* Module: sfmarket2.dll
   Function: FUN_00410ec0
   Address: 00410ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00410ec0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_EBP;
  int *unaff_EDI;
  undefined4 local_18 [2];
  undefined4 *puStack_10;
  wchar_t *pwStack_c;
  undefined4 uStack_4;
  
  local_18[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1,local_18);
  if (-1 < iVar1) {
    while (unaff_EBP != (int *)0x0) {
      uStack_4 = 0;
      iVar1 = (**(code **)(*unaff_EBP + 0x1c))(unaff_EBP,&uStack_4);
      if ((-1 < iVar1) && (iVar2 = _wcsicmp(pwStack_c,L"#text"), iVar2 == 0)) {
        iVar1 = (**(code **)(*unaff_EDI + 0x20))(unaff_EDI,&stack0xffffffe0);
        if ((-1 < iVar1) && ((short)unaff_EDI == 8)) {
          Ordinal_6(*puStack_10);
          uVar3 = Ordinal_2((uint)unaff_EBP & 0xffff0000);
          *puStack_10 = uVar3;
        }
        Ordinal_9(&stack0xffffffd8);
        Ordinal_6(local_18[0]);
        return iVar1;
      }
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*unaff_EDI + 0x40))(unaff_EDI,&stack0xffffffdc);
      }
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      Ordinal_6(puStack_10);
      if (iVar1 < 0) {
        return iVar1;
      }
    }
  }
  return iVar1;
}


