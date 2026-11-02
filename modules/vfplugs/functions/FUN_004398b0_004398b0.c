/* Module: vfplugs.dll
   Function: FUN_004398b0
   Address: 004398b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004398b0(LPCSTR param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  iVar2 = _ismbcspace((int)*param_1);
  while (iVar2 != 0) {
    param_1 = CharNextA(param_1);
    iVar2 = _ismbcspace((int)*param_1);
  }
  local_8 = 0;
  cVar1 = *param_1;
  iVar2 = DAT_00494c58;
  while (DAT_00494c58 = iVar2, cVar1 != '\0') {
    FUN_00481790();
    FUN_00481790();
    lstrcpynA(&stack0xffffffe8,&DAT_00494c50,iVar2 + 1);
    (&stack0xffffffe8)[iVar2] = 0;
    (&stack0xffffffe8)[iVar2] = 0;
    lstrcpynA(&stack0xffffffe8,param_1,iVar2 + 1);
    (&stack0xffffffe8)[iVar2] = 0;
    (&stack0xffffffe8)[iVar2] = 0;
    iVar3 = lstrcmpA(&stack0xffffffe8,&stack0xffffffe8);
    iVar2 = DAT_00494c58;
    if (iVar3 == 0) {
      while (iVar2 + -1 != 0) {
        param_1 = CharNextA(param_1);
        iVar2 = iVar2 + -1;
      }
    }
    else {
      iVar2 = _ismbcdigit((int)*param_1);
      if (iVar2 == 0) break;
      local_8 = *param_1 + -0x30 + local_8 * 10;
    }
    param_1 = CharNextA(param_1);
    iVar2 = DAT_00494c58;
    cVar1 = *param_1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return local_8;
}


