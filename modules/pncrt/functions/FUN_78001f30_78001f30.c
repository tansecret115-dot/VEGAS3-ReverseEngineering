/* Module: pncrt.dll
   Function: FUN_78001f30
   Address: 78001f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78001f30(undefined4 *param_1)

{
  DName *pDVar1;
  undefined4 *this;
  undefined4 *puVar2;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  if (*DAT_78041aac == '\0') {
    FUN_78006450(param_1,2);
    return param_1;
  }
  if (*DAT_78041aac == '?') {
    DAT_78041aac = DAT_78041aac + 1;
    pDVar1 = FUN_78001fb0(local_10);
    puVar2 = param_1;
    this = FUN_780061c0(local_8,'-');
    FUN_78006750(this,puVar2,pDVar1);
    return param_1;
  }
  FUN_78001fb0(param_1);
  return param_1;
}


