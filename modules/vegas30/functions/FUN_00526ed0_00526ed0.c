/* Module: vegas30.exe
   Function: FUN_00526ed0
   Address: 00526ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00526ed0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_EDI;
  undefined4 *puVar4;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 auStack_22c [4];
  uchar auStack_21c [260];
  uint uStack_118;
  undefined4 uStack_114;
  uchar auStack_110 [12];
  undefined1 local_104 [260];
  
  uVar1 = FUN_0050a110(*(undefined4 *)(param_1 + 0xfc));
  puVar4 = &local_234;
  uVar2 = FUN_005256c0(param_1);
  FUN_0050a0a0(uVar2,puVar4);
  iVar3 = FUN_0050a040(uVar1,local_234);
  if (iVar3 != 0) {
    uVar1 = FUN_005256c0(param_1);
  }
  while( true ) {
    iVar3 = FUN_00526890(param_1,local_104,0x104);
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar3 = FUN_005254d0(param_1,uVar1,local_104,&local_230);
    if (iVar3 != 0) break;
    iVar3 = FUN_005268e0(param_1,local_104);
    if (-1 < iVar3) {
      iVar3 = (**(code **)**(undefined4 **)(param_1 + 300))
                        (*(undefined4 **)(param_1 + 300),&DAT_006335c8,&local_234);
      if (iVar3 < 0) {
        return iVar3;
      }
      puVar4 = auStack_22c;
      for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      auStack_22c[2] = local_234;
      auStack_22c[3] = local_230;
      _mbscpy(auStack_21c,auStack_110);
      uStack_114 = FUN_00526de0(param_1);
      iVar3 = _FXPackage_SavePackage_8(unaff_EDI,auStack_22c);
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      return iVar3;
    }
  }
  iVar3 = (**(code **)**(undefined4 **)(param_1 + 300))
                    (*(undefined4 **)(param_1 + 300),&DAT_006335c8,&local_234);
  if (iVar3 < 0) {
    return iVar3;
  }
  puVar4 = auStack_22c;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  _mbscpy(auStack_21c,auStack_110);
  uStack_118 = 4;
  uStack_114 = FUN_00526de0(param_1);
  iVar3 = _FXPackage_SavePackage_8(unaff_EDI,auStack_22c);
  (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = FUN_00526d10(param_1,uVar1,&local_230);
  if (iVar3 < 0) {
    return iVar3;
  }
  if ((uStack_118 & 1) == 0) {
    return iVar3;
  }
  uVar2 = FUN_0050a150(*(undefined4 *)(param_1 + 0xfc));
  iVar3 = FUN_00526d10(param_1,uVar2,&local_230);
  return iVar3;
}


