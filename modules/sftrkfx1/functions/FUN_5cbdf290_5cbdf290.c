/* Module: sftrkfx1.dll
   Function: FUN_5cbdf290
   Address: 5cbdf290
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbdf290(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  
  srand((uint)param_2);
  uVar7 = 0xf9;
  param_2 = param_1 + 0x13a;
  *param_1 = 0;
  param_1[1] = 0x67;
  pcVar8 = (char *)((int)param_1 + 0x101);
  do {
    if (uVar7 < 0xf9) {
      cVar1 = (-7 - (char)param_1) + (char)pcVar8;
    }
    else {
      cVar1 = '\0';
    }
    *pcVar8 = cVar1;
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar7 = uVar7 - 1;
    *param_2 = iVar4 + (iVar2 * 0x8000 + iVar3) * 4;
    param_2 = param_2 + -1;
    pcVar8 = pcVar8 + -1;
  } while (-1 < (int)uVar7);
  uVar6 = 0xffffffff;
  uVar7 = 0x80000000;
  puVar5 = param_1 + 0x44;
  do {
    *puVar5 = uVar6 & *puVar5 | uVar7;
    uVar7 = uVar7 >> 1;
    uVar6 = uVar6 >> 1;
    puVar5 = puVar5 + 7;
  } while (uVar7 != 0);
  return;
}


