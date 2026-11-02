/* Module: mpegin.dll
   Function: FUN_1000aab0
   Address: 1000aab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000aab0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x12e54);
  iVar1 = *(int *)(iVar3 + 600);
  iVar2 = *(int *)(iVar3 + 0x25c);
  if (*(int *)(iVar3 + 0x2d0) < *(int *)(param_1 + 0xcac)) {
    do {
      if ((*(int *)(iVar3 + 0x240) != 0) || (*(int *)(iVar3 + 0x244) != 0)) break;
      FUN_10005910((int *)(iVar3 + 0x200),8);
      *(int *)(*(int *)(param_1 + 0x12e54) + 0x2d0) =
           *(int *)(*(int *)(param_1 + 0x12e54) + 0x2d0) + 1;
      iVar3 = *(int *)(param_1 + 0x12e54);
    } while (*(int *)(iVar3 + 0x2d0) < *(int *)(param_1 + 0xcac));
  }
  iVar3 = *(int *)(param_1 + 0x12e54);
  if ((*(int *)(iVar3 + 0x240) != 0) || (*(int *)(iVar3 + 0x244) != 0)) {
    return 1;
  }
  *(undefined4 *)(iVar3 + 0x2d0) = 0;
  *(int *)(*(int *)(param_1 + 0x12e54) + 0x2c8) = *(int *)(*(int *)(param_1 + 0x12e54) + 0x2c8) + -1
  ;
  iVar3 = *(int *)(param_1 + 0x12e54);
  if ((iVar1 == *(int *)(iVar3 + 600)) && (iVar2 == *(int *)(iVar3 + 0x25c))) {
    *(double *)(iVar3 + 0xd0) = *(double *)(iVar3 + 0xe8) + *(double *)(iVar3 + 0xd0);
    return 0;
  }
  *(double *)(iVar3 + 0xd0) = (double)*(longlong *)(iVar3 + 600);
  return 0;
}


