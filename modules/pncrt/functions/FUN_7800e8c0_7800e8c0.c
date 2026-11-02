/* Module: pncrt.dll
   Function: FUN_7800e8c0
   Address: 7800e8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_7800e8c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = _isatty(param_1[4]);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == &DAT_7803f818) {
    iVar2 = 0;
  }
  else {
    if (param_1 != (undefined4 *)&DAT_7803f838) {
      return 0;
    }
    iVar2 = 1;
  }
  if ((param_1[3] & 0x10c) != 0) {
    return 0;
  }
  if ((&DAT_78042478)[iVar2] == 0) {
    pvVar3 = malloc(0x1000);
    (&DAT_78042478)[iVar2] = pvVar3;
    if (pvVar3 == (void *)0x0) {
      param_1[2] = param_1 + 5;
      *param_1 = param_1 + 5;
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_7800e94e;
    }
  }
  uVar1 = (&DAT_78042478)[iVar2];
  param_1[6] = 0x1000;
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = 0x1000;
LAB_7800e94e:
  param_1[3] = param_1[3] | 0x1102;
  return 1;
}


