/* Module: pncrt.dll
   Function: FUN_78001fb0
   Address: 78001fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_78001fb0(void *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *DAT_78041aac;
  if (cVar1 == '\0') {
    FUN_78006450(param_1,2);
    return param_1;
  }
  if (('/' < cVar1) && (cVar1 < ':')) {
    DAT_78041aac = DAT_78041aac + 1;
    FUN_780063f0(param_1,(int)cVar1 - 0x2f);
    return param_1;
  }
  uVar2 = 0;
  while (cVar1 != '@') {
    if (cVar1 == '\0') {
      FUN_78006450(param_1,2);
      return param_1;
    }
    if ((cVar1 < 'A') || ('P' < cVar1)) goto LAB_78002029;
    DAT_78041aac = DAT_78041aac + 1;
    uVar2 = uVar2 * 0x10 + -0x41 + (int)cVar1;
    cVar1 = *DAT_78041aac;
  }
  cVar1 = *DAT_78041aac;
  DAT_78041aac = DAT_78041aac + 1;
  if (cVar1 == '@') {
    FUN_780063f0(param_1,uVar2);
    return param_1;
  }
LAB_78002029:
  FUN_78006450(param_1,1);
  return param_1;
}


