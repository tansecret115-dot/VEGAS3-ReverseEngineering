/* Module: tokr3260.dll
   Function: FUN_680560f0
   Address: 680560f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_680560f0(int param_1,uint *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_2004;
  undefined4 uStackY_1c;
  
  FUN_6805a6a0();
  uVar2 = param_2[0x3c89];
  iVar5 = *(int *)(uVar2 + 0x1c);
  if (((param_2[0x1860] == 1) && (*(int *)(uVar2 + 0x10) == 1)) && (*(int *)(uVar2 + 0x18) == 0)) {
    iVar3 = 0;
    if (0 < iVar5) {
      iVar6 = param_1 + iVar5;
      do {
        *(undefined1 *)((int)&local_2004 + iVar3) = *(undefined1 *)(iVar6 + -1);
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar3 < iVar5);
    }
    puVar4 = &local_2004;
    while ((char)local_2004 == -8) {
      pcVar1 = (char *)((int)puVar4 + 1);
      puVar4 = (uint *)((int)puVar4 + 1);
      local_2004._0_1_ = *pcVar1;
    }
  }
  else {
    puVar4 = (uint *)(*(int *)(uVar2 + 0x20) + param_1);
  }
  uStackY_1c = 0x6805616d;
  iVar5 = FUN_68055430(param_2,puVar4);
  if (iVar5 == -999999) {
    return;
  }
  uVar7 = iVar5 + 7 >> 3;
  param_2[0x3c77] = uVar7;
  if ((*(int *)(uVar2 + 0x18) != 1) && (*(int *)(uVar2 + 0xc) != 0x12)) {
    uVar7 = param_2[0x3c75];
  }
  *(uint *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + uVar7;
  return;
}


