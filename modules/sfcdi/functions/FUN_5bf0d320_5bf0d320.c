/* Module: sfcdi.dll
   Function: FUN_5bf0d320
   Address: 5bf0d320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0d320(int param_1,undefined4 *param_2,uint *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = FUN_5bf2bcc0(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar2 = FUN_5bf2bb90(param_1);
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        iVar3 = FUN_5bf2bbb0(param_1,uVar4);
        if ((iVar3 != 0) && ((*(uint *)(iVar3 + 8) & 4) == 0)) {
          *param_2 = *(undefined4 *)(iVar3 + 0x14);
          uVar2 = *(uint *)(iVar3 + 0x18);
          if (0xe1 < uVar2) {
            uVar2 = 0xe1;
          }
          *param_3 = uVar2;
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
  }
  return 0x8004e00a;
}


