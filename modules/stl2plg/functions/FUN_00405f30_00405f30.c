/* Module: stl2plg.dll
   Function: FUN_00405f30
   Address: 00405f30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00405f30(undefined4 *param_1,char *param_2)

{
  FILE *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == (char *)0x0) {
    return -0x7ff8ffa9;
  }
  puVar3 = param_1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  pFVar1 = fopen(param_2,"rb");
  *param_1 = pFVar1;
  return (-(uint)(pFVar1 != (FILE *)0x0) & 0x7fffbffb) + 0x80004005;
}


