/* Module: vegas30.exe
   Function: FUN_0043c8b0
   Address: 0043c8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0043c9c2) */
/* WARNING: Removing unreachable block (ram,0x0043c9ca) */
/* WARNING: Removing unreachable block (ram,0x0043c9d4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043c8b0(void)

{
  int iVar1;
  undefined1 ***pppuVar2;
  undefined *puStack_258;
  undefined1 ***apppuStack_254 [11];
  undefined4 uStack_228;
  WCHAR aWStack_214 [259];
  undefined2 uStack_e;
  undefined4 uStack_8;
  
  apppuStack_254[0] = (undefined1 ***)(apppuStack_254 + 1);
  apppuStack_254[1] = (undefined1 ***)0x0;
  puStack_258 = &DAT_00611d10;
  iVar1 = SfS4RWCreateInstance();
  if (-1 < iVar1) {
    iVar1 = FUN_0043c5f0(0);
    if ((-1 < iVar1) && (iVar1 = (**(code **)(_DAT_00000000 + 0x4c))(0,3,0,0x4c), -1 < iVar1)) {
      MultiByteToWideChar(0,1,"Sonic Foundry Vegas 3.0",-1,aWStack_214,0x104);
      uStack_e = 0;
      iVar1 = (**(code **)(_DAT_00000000 + 0x28))(0,aWStack_214);
      if ((-1 < iVar1) &&
         ((iVar1 = FUN_0043c150(0,1), -1 < iVar1 &&
          (iVar1 = (**(code **)(_DAT_00000000 + 0x30))(0,0,0), -1 < iVar1)))) {
        FUN_0043c7f0(0);
        pppuVar2 = (undefined1 ***)apppuStack_254;
        for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pppuVar2 = (undefined1 **)0x0;
          pppuVar2 = pppuVar2 + 1;
        }
        uStack_228 = uStack_8;
        iVar1 = (**(code **)(_DAT_00000000 + 0x44))(0,&puStack_258,apppuStack_254);
      }
    }
    (**(code **)(_DAT_00000000 + 8))(0);
    if (-1 < iVar1) {
      return 0;
    }
  }
  return 0;
}


