/* Module: mp3plug.dll
   Function: FUN_5f686820
   Address: 5f686820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f686820(LPCWSTR param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(uint *)((int)param_2 + 0xe52);
  if ((uVar2 & 0xfffffff0) == 0) {
    if ((uVar2 & 0xf) == 0) goto switchD_5f686841_caseD_1;
    switch(uVar2 & 0xf) {
    case 1:
    case 2:
    case 4:
    case 8:
      goto switchD_5f686841_caseD_1;
    }
  }
  uVar2 = 0;
switchD_5f686841_caseD_1:
  puVar3 = param_2;
  for (iVar1 = 0x395; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(uint *)((int)param_2 + 0xe52) = uVar2;
  FUN_5f68c9c0(param_1,param_2,(int *)0x0);
  return;
}


