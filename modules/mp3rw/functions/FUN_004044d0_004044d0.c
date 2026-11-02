/* Module: mp3rw.dll
   Function: FUN_004044d0
   Address: 004044d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_004044d0(undefined4 *param_1,char *param_2,short param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  *param_1 = 0;
  cVar1 = *param_2;
  for (; (cVar1 != '\0' && (param_3 != 0)); param_3 = param_3 + -1) {
    cVar1 = *param_2;
    if ((((cVar1 < '0') || ('9' < cVar1)) && ((cVar1 < 'A' || ('Z' < cVar1)))) &&
       ((cVar1 < 'a' || ('z' < cVar1)))) {
      *(undefined1 *)(iVar2 + (int)param_1) = 0x25;
      iVar3 = iVar2 + 1;
      iVar2 = iVar2 + 2;
      _itoa((int)*param_2,(char *)(iVar3 + (int)param_1),0x10);
    }
    else {
      *(char *)(iVar2 + (int)param_1) = cVar1;
    }
    cVar1 = param_2[1];
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined1 *)(iVar2 + (int)param_1) = 0;
  return param_1;
}


