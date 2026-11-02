/* Module: pncrt.dll
   Function: FUN_7800f490
   Address: 7800f490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_7800f490(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_7800e5c0(param_1);
    FUN_7800f410(param_1);
    iVar1 = _close(param_1[4]);
    if (iVar1 < 0) {
      param_1[3] = 0;
      return 0xffffffff;
    }
    if ((void *)param_1[7] != (void *)0x0) {
      free((void *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}


