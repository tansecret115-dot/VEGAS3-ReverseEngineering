/* Module: encn3260.dll
   Function: FUN_664c5130
   Address: 664c5130
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664c5130(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_8;
  
  local_8 = -1;
  if (DAT_664ef9c8 != 0xffffffff) {
    DVar1 = GetTickCount();
    iVar4 = 0;
    local_8 = 0;
    if (DVar1 < DAT_664f2980) {
      uVar2 = (DVar1 - DAT_664f2980) - 1;
    }
    else {
      uVar2 = DVar1 - DAT_664f2980;
    }
    if ((999 < uVar2) || (DAT_664f297c < DAT_664ef9c8)) {
      if (999 < uVar2) {
        DAT_664f297c = 0;
        DAT_664f2980 = DVar1;
      }
      while (((DAT_664f2984 != (int *)0x0 && (DAT_664f2984[4] != 0)) &&
             (iVar4 = *(int *)(DAT_664f2984[1] + 8), iVar4 != param_1))) {
        uVar2 = *(uint *)(iVar4 + 4);
        if (DVar1 < uVar2) {
          uVar2 = (DVar1 - uVar2) - 1;
        }
        else {
          uVar2 = DVar1 - uVar2;
        }
        if (uVar2 < 1000) break;
        FUN_664ba9f0(DAT_664f2984);
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      if (((iVar4 == 0) || (iVar4 == param_1)) &&
         (local_8 = DAT_664ef9c8 - DAT_664f297c, iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 4) = 0;
        FUN_664ba9f0(DAT_664f2984);
      }
    }
    if (((local_8 == 0) && (DAT_664f2974 != 0)) && (1 < *(int *)(DAT_664f2974 + 0xc))) {
      if (DAT_664f2984 == (int *)0x0) {
        puVar3 = operator_new(0x14);
        if (puVar3 == (undefined4 *)0x0) {
          DAT_664f2984 = (int *)0x0;
        }
        else {
          DAT_664f2984 = (int *)FUN_664ba900(puVar3);
        }
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(DWORD *)(param_1 + 4) = DVar1;
        FUN_664baab0(DAT_664f2984,param_1);
      }
    }
  }
  return local_8;
}


