/* Module: vegas30.exe
   Function: FUN_005b51e0
   Address: 005b51e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005b51e0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  LONG local_b0;
  undefined4 local_ac [41];
  LONG local_8;
  
  iVar1 = -0x7ff8ffa9;
  if (param_2 == 0) {
    puVar3 = (undefined4 *)(param_1 + 0x11c);
    for (iVar1 = 0x2b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *puVar3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
    return 0;
  }
  if (param_2 < *(uint *)(param_1 + 0x1cc)) {
    local_b0 = 0;
    SetFilePointer(*(HANDLE *)(param_1 + 0x118),*(LONG *)(param_1 + 0x1c0),&local_b0,0);
    uVar4 = 0;
    iVar1 = 0;
    if (param_2 != 0xffffffff) {
      do {
        iVar1 = FUN_005b5a00(local_ac);
        if (iVar1 < 0) {
          return iVar1;
        }
        local_b0 = 0;
        SetFilePointer(*(HANDLE *)(param_1 + 0x118),local_8,&local_b0,0);
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_2 + 1);
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    puVar3 = local_ac;
    for (iVar2 = 0x2b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_3 = *puVar3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
  }
  return iVar1;
}


