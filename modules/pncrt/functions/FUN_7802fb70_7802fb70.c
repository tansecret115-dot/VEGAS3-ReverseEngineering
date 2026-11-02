/* Module: pncrt.dll
   Function: FUN_7802fb70
   Address: 7802fb70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7802fb70(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = tolower((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (__mb_cur_max < 2) {
        uVar4 = (byte)_pctype[*param_1 * 2] & 4;
      }
      else {
        uVar4 = _isctype((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_7803f558;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}


