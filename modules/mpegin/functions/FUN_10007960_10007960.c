/* Module: mpegin.dll
   Function: FUN_10007960
   Address: 10007960
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10007960(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)(*(int *)(param_1 + 0x12e54) + 0x28) =
       (uint)(*(int *)(*(int *)(param_1 + 0x12e54) + 0x28) == 0);
  iVar1 = *(int *)(param_1 + 0x12e54);
  uVar2 = *(uint *)(iVar1 + 0x31c);
  if (0x35353552 < uVar2) {
    if (uVar2 < 0x5659555a) {
      if (uVar2 != 0x56595559) {
        if ((uVar2 != 0x35363552) && (uVar2 != 0x41524742)) {
          return;
        }
        goto LAB_10007a20;
      }
    }
    else if (uVar2 != 0x59565955) {
      return;
    }
LAB_10007a42:
    *(undefined4 *)(iVar1 + 0x324) = *(undefined4 *)(iVar1 + 0x10 + *(int *)(iVar1 + 0x28) * 0xc);
    return;
  }
  if (uVar2 != 0x35353552) {
    if (uVar2 < 0x3259555a) {
      if (uVar2 != 0x32595559) {
        if ((uVar2 != 0x30323449) && (uVar2 != 0x32315659)) {
          return;
        }
        *(undefined4 *)(iVar1 + 0x324) =
             *(undefined4 *)(iVar1 + 0x10 + *(int *)(iVar1 + 0x28) * 0xc);
        iVar1 = *(int *)(param_1 + 0x12e54);
        *(undefined4 *)(iVar1 + 0x328) =
             *(undefined4 *)(iVar1 + 0x14 + *(int *)(iVar1 + 0x28) * 0xc);
        iVar1 = *(int *)(param_1 + 0x12e54);
        *(undefined4 *)(iVar1 + 0x32c) = *(undefined4 *)(iVar1 + (*(int *)(iVar1 + 0x28) + 2) * 0xc)
        ;
        return;
      }
      goto LAB_10007a42;
    }
    if ((uVar2 != 0x33524742) && (uVar2 != 0x34524742)) {
      return;
    }
  }
LAB_10007a20:
  *(int *)(iVar1 + 0x324) =
       (*(int *)(param_1 + 0x30) + -1) * *(int *)(param_1 + 0x54) +
       *(int *)(iVar1 + 0x10 + *(int *)(iVar1 + 0x28) * 0xc);
  return;
}


