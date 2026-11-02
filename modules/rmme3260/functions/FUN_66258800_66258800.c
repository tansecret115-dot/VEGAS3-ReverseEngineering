/* Module: rmme3260.dll
   Function: FUN_66258800
   Address: 66258800
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66258800(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_8;
  
  local_8 = -1;
  if (DAT_6627c370 != 0xffffffff) {
    DVar1 = GetTickCount();
    iVar4 = 0;
    local_8 = 0;
    if (DVar1 < DAT_6627f188) {
      uVar2 = (DVar1 - DAT_6627f188) - 1;
    }
    else {
      uVar2 = DVar1 - DAT_6627f188;
    }
    if ((999 < uVar2) || (DAT_6627f184 < DAT_6627c370)) {
      if (999 < uVar2) {
        DAT_6627f184 = 0;
        DAT_6627f188 = DVar1;
      }
      while (((DAT_6627f18c != (int *)0x0 && (DAT_6627f18c[4] != 0)) &&
             (iVar4 = *(int *)(DAT_6627f18c[1] + 8), iVar4 != param_1))) {
        uVar2 = *(uint *)(iVar4 + 4);
        if (DVar1 < uVar2) {
          uVar2 = (DVar1 - uVar2) - 1;
        }
        else {
          uVar2 = DVar1 - uVar2;
        }
        if (uVar2 < 1000) break;
        FUN_66250ae0(DAT_6627f18c);
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      if (((iVar4 == 0) || (iVar4 == param_1)) &&
         (local_8 = DAT_6627c370 - DAT_6627f184, iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 4) = 0;
        FUN_66250ae0(DAT_6627f18c);
      }
    }
    if (((local_8 == 0) && (DAT_6627f17c != 0)) && (1 < *(int *)(DAT_6627f17c + 0xc))) {
      if (DAT_6627f18c == (int *)0x0) {
        puVar3 = operator_new(0x14);
        if (puVar3 == (undefined4 *)0x0) {
          DAT_6627f18c = (int *)0x0;
        }
        else {
          DAT_6627f18c = (int *)FUN_662509f0(puVar3);
        }
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(DWORD *)(param_1 + 4) = DVar1;
        FUN_66250b60(DAT_6627f18c,param_1);
      }
    }
  }
  return local_8;
}


